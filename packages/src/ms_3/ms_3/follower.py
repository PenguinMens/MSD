# The following imports are necessary
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from std_msgs.msg import String
from geometry_msgs.msg import Twist
# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node

# The class name is up to you
class MyClassName(Node):

    def __init__(self):
        super().__init__('follower')
        # Subscribers are created using interface type, topic name, callback function, and QoS setting
        # (the value of 10 can be left as is)
        self.subscription = self.create_subscription(
            Twist,
            '/leader/pose',
            self.listener_callback_leader,
            10)
        self.subscription = self.create_subscription(
            Twist,
            '/follower/pose',
            self.listener_callback_follower,
            10)
        
        self.publisher = self.create_publisher(Twist, '/follower/cmd_vel', 10)
        # Publishers typically publish message at a predefined rate
        timer_period = 0.5
        # The timer_callback function will be called every timer_period seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0


    # Listener callback function will be called every time a message is published on the topic this node is subscribed to
    def listener_callback_leader(self, msg):
        # Logger displays formatted text in the console, useful for simple debugging
        self.get_logger().info(f"I heard From the leader: x = {msg.linear.x} z =  {msg.angular.z}")
    # Listener callback function will be called every time a message is published on the topic this node is subscribed to
    def listener_callback_follower(self, msg):
        # Logger displays formatted text in the console, useful for simple debugging
        self.get_logger().info(f"I heard From the follower: x = {msg.linear.x} z = {msg.angular.z}")        

    def timer_callback(self):
        # To publish a message, you need to create the corresponding object first
        # The name is the same as interface name (e.g., String or My_message)
        msg = Twist()
        msg.linear.x= float(self.i)
        
        self.publisher.publish(msg)
        # Logger displays formatted text in the console, useful for simple debugging
        # self.get_logger().info('Publishing: "%f"' % msg.linear.x )
        self.i += 3.14

# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = MyClassName()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
