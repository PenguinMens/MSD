# The following imports are necessary
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from std_msgs.msg import String

# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node

# The class name is up to you
class MyClassName(Node):

    def __init__(self):
        super().__init__('default_name_of_node')
        # Subscribers are created using interface type, topic name, callback function, and QoS setting
        # (the value of 10 can be left as is)
        self.subscription = self.create_subscription(
            String,
            'name_of_topic',
            self.listener_callback,
            10)

    # Listener callback function will be called every time a message is published on the topic this node is subscribed to
    def listener_callback(self, msg):
        # Logger displays formatted text in the console, useful for simple debugging
        self.get_logger().info(f"I heard: {msg.data}")

# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = MyClassName()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
