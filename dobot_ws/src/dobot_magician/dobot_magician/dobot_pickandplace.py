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
        self.get_logger().info(f"pick{request.pick_pose} check")
        pick_goal = inverse_kinematics(request.pick_pose[0],request.pick_pose[1], request.pick_pose[2], request.pick_pose[3]) 
        place_goal = inverse_kinematics(*request.place_pose)
        self.get_logger().info(f"pick{pick_goal}")
        if not dobot.is_goal_valid(*pick_goal) :
            self.get_logger().info(f"ejected")
            response.succes = False
            return response
        self.get_logger().info(f"place{place_goal}")
        if not dobot.is_goal_valid(*place_goal):
            self.get_logger().info(f"ejected")
            response.succes = False
            return response

        home_goal = [0,0,0,0]
        home_pose = forward_kinematics_solution(*home_goal)
        # do 2d translation first which is x and y diretion at once, then do z direction

       
        dobot.set_joint_ptp(*(inverse_kinematics(request.pick_pose[0], request.pick_pose[1],home_pose[2], request.pick_pose[3])))
        # do z direction
        dobot.set_suction_cup(True)
        dobot.set_joint_ptp(*pick_goal)
        # turn on suction
  
        # go to place position
        # do 2d do z direction then x and y direction
        #first
        #x: 0.16595606067012675
        #y: 0.20025034355713284
        #z: 0.02020435440900212
        #W : 0.999

        # x: 0.18859696017283717
        # y: -0.21015132756178945
        # z: 0.019206533232770575
        # w : 0.45
        dobot.set_joint_ptp(*(inverse_kinematics(request.pick_pose[0],request.pick_pose[1] , home_pose[2], request.place_pose[3])))
        dobot.set_joint_ptp(*(inverse_kinematics(request.place_pose[0],request.place_pose[1] , home_pose[2], request.place_pose[3])))
        dobot.set_joint_ptp(*place_goal)
        dobot.set_suction_cup(False)
        dobot.set_joint_ptp(0,0,0,0)



        # loop until the dobot is do    ne homing

        
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
