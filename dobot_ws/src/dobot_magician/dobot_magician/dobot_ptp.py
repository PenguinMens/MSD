# The following imports are necessary
import threading
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

# Replace the following import with the interface this node is using
from dobot_magician_interface.action import JointPTP
from dobot_magician.dobot_client import DobotClient
# You can import here any Python module you plan to use in this node
import time

# The class name is up to you
class MyClassName(Node):
    def __init__(self):
        self.dobot = DobotClient()
        super().__init__('joint_ptp')
        self.goal_handle = None
        self.goal_lock = threading.Lock()
        # Action servers are created using interface type, action name and callback functions
        self.action_server = ActionServer(
            self,
            JointPTP,
            'joint_ptp',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback,
            callback_group=ReentrantCallbackGroup())

    def destroy(self):
        self.action_server.destroy()
        super().destroy_node()

    # This function is called whenever new goal request is received
    def goal_callback(self, goal_request):
        # Accept or reject a client request to begin an action
        self.get_logger().info('Received goal request')
        goal = goal_request.joint_goal
        if(self.dobot.is_goal_valid(goal[0],goal[1],goal[2],goal[3]                  
                                                   
                                 )):
            return GoalResponse.ACCEPT
        else:
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
        feedback_msg = JointPTP.Feedback()
        goal = goal_handle.request.joint_goal
       
        self.dobot.set_joint_ptp(goal[0],
                                 goal[1],
                                 goal[2],
                                 goal[3]                                 
                                 )
        
        # Start executing the action
        while(1):
            # If goal is flagged as no longer active (ie. another goal was accepted),
            # then stop executing
            if not goal_handle.is_active:

                self.get_logger().info('Goal aborted')
                return JointPTP.Result()

            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
              
                self.get_logger().info('Goal canceled')
                return JointPTP.Result()

            # Update Fibonacci sequence
            feedback_msg.joint_state = self.dobot.get_joint_state()
            self.get_logger().info('Publishing feedback: {0}'.format(feedback_msg.joint_state[0]))
            goalcheck = True
            for i,joint in enumerate(feedback_msg.joint_state):
                if abs(joint - goal[i])  > 1:
                    goalcheck = False

            # Publish the feedback
            goal_handle.publish_feedback(feedback_msg)
            if goalcheck:
                self.stop_current_action()
                break
            # Sleep for demonstration purposes
            time.sleep(1)

        goal_handle.succeed()

        # Populate result message
        result = JointPTP.Result()
        result.joint_state = feedback_msg.joint_state

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
