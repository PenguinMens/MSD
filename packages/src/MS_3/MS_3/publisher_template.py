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
        # Publishers are created using interface type, topic name and QoS setting
        # (the value of 10 can be left as is)
        self.publisher = self.create_publisher(String, 'name_of_topic', 10)
        # Publishers typically publish message at a predefined rate
        timer_period = 0.5
        # The timer_callback function will be called every timer_period seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        # Define variables used by the node here, for example a simple counter
        self.i = 0

    def timer_callback(self):
        # To publish a message, you need to create the corresponding object first
        # The name is the same as interface name (e.g., String or My_message)
        msg = String()
        msg.data = f"Hello World: {self.i}"
        self.publisher.publish(msg)
        # Logger displays formatted text in the console, useful for simple debugging
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1


# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = MyClassName()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
