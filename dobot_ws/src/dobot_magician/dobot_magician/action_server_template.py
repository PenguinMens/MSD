# The following imports are necessary
import threading
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

# Replace the following import with the interface this node is using
from ...dobot_magician_interface.action import JointPTP

# You can import here any Python module you plan to use in this node
import time

# The class name is up to you
class MyClassName(Node):
    def __init__(self):
        super().__init__('joint_ptp')
        self.goal_handle = None
        self.goal_lock = threading.Lock()
        # Action servers are created using interface type, action name and callback functions
        self.action_server = ActionServer(
            self,
            JointPTP,
            'dobot/joint_ptp',
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
        return GoalResponse.ACCEPT
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

    # This function is called at the start of action execution
    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        
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
