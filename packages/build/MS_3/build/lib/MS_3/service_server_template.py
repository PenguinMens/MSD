# The following imports are necessary
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from example_interfaces.srv import AddTwoInts

# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node

# The class name is up to you
class MyClassName(Node):

    def __init__(self):
        super().__init__('default_name_of_node')
        # Service servers are created using interface type, service name and callback function
        self.service = self.create_service(AddTwoInts, 'name_of_service', self.service_callback)

    # Service callback will be called when the server receives a request
    # (request and response variables are already created and need to be filled with data)
    def service_callback(self, request, response):
        response.sum = request.a + request.b
        # Logger displays formatted text in the console, useful for simple debugging
        self.get_logger().info(f"Incoming request\na: {request.a}, b: {request.b}")

        # The response to be returned is part of the interface defined in the corresponding .srv file
        return response


# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = MyClassName()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
