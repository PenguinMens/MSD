# The following imports are necessary
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from dobot_magician_interface.srv import PickAndPlace

# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node
from dobot_magician.dobot_client import DobotClient
from dobot_magician.dobot_kinematics_test_copy import inverse_kinematics
from dobot_magician.dobot_kinematics_test_copy import forward_kinematics_solution

# The class name is up to you
class DobotHoming(Node):
    
    def __init__(self):
        super().__init__('dobot_pickandplace')
        # Service servers are created using interface type, service name and callback function
        self.service = self.create_service(PickAndPlace, 'dobot_move_block', self.service_callback)

    # Service callback will be called when the server receives a request
    # (request and response variables are already created and need to be filled with data)
    def service_callback(self, request, response):
        dobot = DobotClient()
        # Logger displays formatted text in the console, useful for simple debugging
        #self.get_logger().info(f"Incoming request\na: {request.a}, b: {request.b}")
        angle_goal = inverse_kinematics(*request.pick_pose)
        self.get_logger().info(f'Received goal request233 {angle_goal}')

        dobot.set_joint_ptp(*angle_goal)
        
        # if(self.dobot.is_goal_valid(*angle_goal                                   
        #                          )):
        #     self.get_logger().info("accepted")
        #     return GoalResponse.ACCEPT
        # else:
        #     self.get_logger().info("rejected")
        #     return GoalResponse.REJECT

        # DobotClient().start_homing()
        response.succes = True
        # The response to be returned is part of the interface defined in the corresponding .srv file
        return response
    

# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = DobotHoming()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
