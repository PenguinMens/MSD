# The following imports are necessary
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from std_srvs.srv import SetBool

# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node
from dobot_magician.dobot_client import DobotClient
# The class name is up to you
class DobotEE(Node):

    def __init__(self):
        self.dobot = DobotClient()
        super().__init__('dobot_ee')
        # Service servers are created using interface type, service name and callback function
        self.service = self.create_service(SetBool, 'dobot_enable_suction_cup', self.service_callback)

    # Service callback will be called when the server receives a request
    # (request and response variables are already created and need to be filled with data)
    def service_callback(self, request, response):
        

        print("setting suction on")
        # Logger displays formatted text in the console, useful for simple debugging
        if request.data:
            self.dobot.set_suction_cup(True)
        else:
            self.dobot.set_suction_cup(False)
        # The response to be returned is part of the interface defined in the corresponding .srv file
        return response


# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = DobotEE()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
