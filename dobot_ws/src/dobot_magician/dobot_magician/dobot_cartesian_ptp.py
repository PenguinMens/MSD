# The following imports are necessary
import threading
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

# Replace the following import with the interface this node is using
from dobot_magician_interface.action import PosePTP
from dobot_magician.dobot_client import DobotClient
from dobot_magician.dobot_kinematics_test_copy import inverse_kinematics
from dobot_magician.dobot_kinematics_test_copy import forward_kinematics_solution
# You can import here any Python module you plan to use in this node
import time

# The class name is up to you
class MyClassName(Node):
    def __init__(self):
        self.dobot = DobotClient()
        super().__init__('pose_ptp')
        self.goal_handle = None
        self.goal_lock = threading.Lock()
        # Action servers are created using interface type, action name and callback functions
        self.action_server = ActionServer(
            self,
            PosePTP,
            'pose_ptp',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback,
            callback_group=ReentrantCallbackGroup())

    def destroy(self):
        self.action_server.destroy()
        super().destroy_node()

    # This function is called whenever new goal request is received
    def goal_callback(self, goal_request: PosePTP):
        # Accept or reject a client request to begin an action
        self.get_logger().info(f'Received goal request233 {goal_request}')
        goal = goal_request.goal_pose
        self.get_logger().info(f'Received goal22 {goal}')
        angle_goal = inverse_kinematics(*goal)
        self.get_logger().info(f'Received goal request233 {angle_goal}')
        if(self.dobot.is_goal_valid(*angle_goal                                   
                                 )):
            self.get_logger().info("accepted")
            return GoalResponse.ACCEPT
        else:
            self.get_logger().info("rejected")
            return GoalResponse.REJECT
        

        # ... or return GoalResponse.REJECT

    # This function is called whenever new goal has been accepted
    def handle_accepted_callback(self, goal_handle):

        with self.goal_lock:
            # This server only allows one goal at a time
            if self.goal_handle is not None and self.goal_handle.is_active:
                self.get_logger().info('Aborting previous goal')
                # Abort the existing goal
                self.goal_handle.abort()
            self.goal_handle = goal_handle
                               
        goal_handle.execute()

    # This function is called whenever cancel request is received
    def cancel_callback(self, goal):
        # Accept or reject a client request to cancel an action
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        # The example below calculates the sum of the Fibonacci sequence up to a given term (which is the action goal); the feedback messages contain partial sums of the sequence

        # Append the seeds for the Fibonacci sequence
        feedback_msg = PosePTP.Feedback()
        goal = goal_handle.request.goal_pose
        angle_goal = inverse_kinematics(*goal)
        self.get_logger().info(f"angle goal{angle_goal}")

        self.dobot.set_joint_ptp(j1=angle_goal[0],j2=angle_goal[1],j3=angle_goal[2],j4=angle_goal[3] )
        
        # Start executing the action
        while(1):
            # If goal is flagged as no longer active (ie. another goal was accepted),
            # then stop executing
            if not goal_handle.is_active:

                self.get_logger().info('Goal aborted')
                return PosePTP.Result()

            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
              
                self.get_logger().info('Goal canceled')
                return PosePTP.Result()

            # Update Fibonacci sequence
            feedback_msg.current_pose = self.dobot.get_joint_state()
            self.get_logger().info('Publishing feedback: {0}'.format(feedback_msg.current_pose[0]))
            goalcheck = True
            
            for i,joint in enumerate(feedback_msg.current_pose):
                if abs(joint - angle_goal[i])  > 1:
                    self.get_logger().info(f"goal {angle_goal[i]} joint {feedback_msg.current_pose}")
                    goalcheck = False

            # Publish the feedback
            goal_handle.publish_feedback(feedback_msg)
            if goalcheck:
                #self.stop_current_action()
                break
            # Sleep for demonstration purposes
            time.sleep(1)

        goal_handle.succeed()

        # Populate result message
        result = PosePTP.Result()
        result.sucess = True
        self.get_logger().info(f"result {result}" )
        

        self.get_logger().info('Returning result: {0}'.format(feedback_msg))

        return result


def main(args=None):
    rclpy.init(args=args)

    node = MyClassName()

    # We use a MultiThreadedExecutor to handle incoming goal requests concurrently
    executor = MultiThreadedExecutor()
    rclpy.spin(node, executor=executor)

    node.destroy()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
