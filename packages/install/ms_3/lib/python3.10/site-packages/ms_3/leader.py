# The following imports are necessary
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from geometry_msgs.msg import Twist
from example_interfaces.srv import SetBool
# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node
import random
# The class name is up to you
class Leader(Node):

    def __init__(self):
        super().__init__('leader')
        # Publishers are created using interface type, topic name and QoS setting
        # (the value of 10 can be left as is)
        self.publisher = self.create_publisher(Twist, '/leader/cmd_vel', 10)
        # Publishers typically publish message at a predefined rate
        timer_period = 0.5
        # The timer_callback function will be called every timer_period seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        # Define variables used by the node here, for example a simple counter
        self.linear_velocity = 1.0

        # Service servers are created using interface type, service name and callback function
        self.service = self.create_service(SetBool, '/turbo', self.service_callback)

    def timer_callback(self):
        # To publish a message, you need to create the corresponding object first
        # The name is the same as interface name (e.g., String or My_message)

        msg = Twist()
        msg.linear.x= self.linear_velocity
        msg.angular.z = random.uniform(-3.14, 3.14)
        self.publisher.publish(msg)
        # Logger displays formatted text in the console, useful for simple debugging
        self.get_logger().info(f'Publishing: "x: {msg.linear.x} z: %f {msg.angular.z}"')
 
        
    def service_callback(self, request, response):
        response.success = request.data
        # Logger displays formatted text in the console, useful for simple debugging
        if(request.data):
            self.linear_velocity = 2.0
            self.get_logger().info(f"Turbo mode activated")
        else:
            self.linear_velocity = 1.0
            self.get_logger().info(f"Turbo mode deactivated")
        

        # The response to be returned is part of the interface defined in the corresponding .srv file
        return response


# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = Leader()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
