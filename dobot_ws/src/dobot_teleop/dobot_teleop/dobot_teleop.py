# The following imports are necessary
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from std_msgs.msg import String
from dobot_magician_interface.msg import TeleopAction
from dobot_magician.dobot_client import DobotClient
from dobot_magician.dobot_kinematics_test_copy import inverse_kinematics
from dobot_magician.dobot_kinematics_test_copy import forward_kinematics_solution
# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node

# The class name is up to you
XMIN,YMIN,ZMIN,RMIN = forward_kinematics_solution(90,70,40,90) 
XMAX,YMAX,ZMAX,RMAX= forward_kinematics_solution(-90,0,-15,-90)
XMAX = forward_kinematics_solution(0,70,-15,-90)[0]
BOTTOM = 0.023
XROW1 = 0.062
XROW2 = 0.092
XROW3 = 0.122
XROW = [XROW1,XROW2,XROW3]
YCOL1 = -0.231
YCOL2 = -0.201
YCOL3 = -0.171
YCOL = [YCOL1,YCOL2,YCOL3]


class MyClassName(Node):

    def __init__(self):
        super().__init__('dobot_teleop')
        self.dobot = DobotClient()
        # Subscribers are created using interface type, topic name, callback function, and QoS setting
        # (the value of 10 can be left as is)
        self.subscription = self.create_subscription(
            TeleopAction,
            'teleop_keyboard',
            self.listener_callback,
            10)
        self.timer = self.create_timer(0.01, self.timer_callback)
        self.timer = self.create_timer(0.3, self.timer_callback2)
        self.joint_1 = -90
        self.joint_2 = 0
        self.joint_3 = 0
        self.joint_4 = 0
        self.x, self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)
        # 0 means stay still 
        # 
        self.robot_state = {
            "isCartisian": False,
            "KEY_UP": 0,
            "KEY_DOWN": 0,
            "KEY_LEFT": 0,
            "KEY_RIGHT": 0,
        }
        self.dobot.set_joint_ptp(-90,0,-15,-90)
        self.dobot_suction = False
        self.cartisian_mode = False
        self.is_homing =False
        self.is_auto = False
        self.keys_being_ppressed = []


    

        
    # Listener callback function will be called every time a message is published on the topic this node is subscribed to
    def listener_callback(self, msg):
        dobot = self.dobot
        # Logger displays formatted text in the console, useful for simple debugging
        ammount = 1
        cartesianAmmount = 0.001
        key = msg.key
        state = msg.state
        isCartisian = msg.cartisian
        valid = False
        #self.get_logger().info(f"BEFORE {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        self.get_logger().info(f"{self.cartisian_mode}")
        if self.is_homing:
            return
        if self.is_auto:
            print("auto so skipping")
            return
        if( state == 0):

            self.get_logger().info(f"{msg}")
            if key != "KEY_F5" and key != "KEY_H":
                print("GOES HERE")
                self.dobot.stop_current_action()
                self.joint_1,self.joint_2,self.joint_3,self.joint_4, = self.dobot.get_joint_state()
                self.keys_being_ppressed = []
            if key == "KEY_E":
                self.dobot_suction = not self.dobot_suction
            if key == "KEY_M":
                self.cartisian_mode = not self.cartisian_mode
            if key == "KEY_H":
                self.dobot.start_homing()
        else:    
            if key == "KEY_LEFT":
                if key not in self.keys_being_ppressed:
                    self.reset_robot()
                    self.keys_being_ppressed.append(key)
                if self.cartisian_mode:
                    self.y = self.y -cartesianAmmount
                else:
                    self.joint_1 = self.joint_1 - 1

            if key == "KEY_RIGHT":
                if key not in self.keys_being_ppressed:
                    self.reset_robot()
                    self.keys_being_ppressed.append(key)
                if self.cartisian_mode:
                    self.y = self.y + cartesianAmmount
                else:
                    self.joint_1 = self.joint_1 + 1     
            if key == "KEY_UP":
                if key not in self.keys_being_ppressed:
                    self.reset_robot()
                    self.keys_being_ppressed.append(key)
                    
                if self.cartisian_mode:
                    self.x = self.x + cartesianAmmount
                else:
                    self.joint_2 = self.joint_2 + 1


            if key == "KEY_DOWN":
                if key not in self.keys_being_ppressed:
                    self.reset_robot()
                    self.keys_being_ppressed.append(key)
                if self.cartisian_mode:
                    self.x = self.x - cartesianAmmount
                else:
                    self.joint_2 = self.joint_2 - 1       
            if key == "KEY_S":
                if key not in self.keys_being_ppressed:
                    self.reset_robot()
                    self.keys_being_ppressed.append(key)
                if self.cartisian_mode:
                    self.z + self.z -cartesianAmmount
                else:
                    self.joint_3 = self.joint_3 - 1
            if key == "KEY_W":
                if key not in self.keys_being_ppressed:
                    self.reset_robot()
                    self.keys_being_ppressed.append(key)
                if self.cartisian_mode:
                    self.z = self.z + cartesianAmmount
                else:
                    self.joint_3 = self.joint_3 + 1


            if key == "KEY_A":
                if key not in self.keys_being_ppressed:
                    self.reset_robot()
                    
                    self.keys_being_ppressed.append(key)
                if self.cartisian_mode:
                    self.r = self.r - cartesianAmmount
                else:
                    self.joint_4 = self.joint_4 - 1
            if key == "KEY_D":
                if key not in self.keys_being_ppressed:
                    self.reset_robot()
                    self.keys_being_ppressed.append(key)
                if self.cartisian_mode:
                    self.r = self.r + cartesianAmmount
                else:
                    self.joint_4 = self.joint_4 + 1

            if key == "KEY_E":
                if self.dobot_suction == False:
                    self.dobot.set_suction_cup(True)
                    
                if self.dobot_suction == True:
                    self.dobot.set_suction_cup(False)
            if key == "KEY_F5":
                self.auto_stack()
                    
        self.get_logger().info(f"{self.keys_being_ppressed}")
                # valid = self.dobot.is_goal_valid(self.joint_1,self.joint_2,self.joint_3,self.joint_4)
        #self.get_logger().info(f"after {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        # self.get_logger().info(f"after {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        # self.get_logger().info(f"after {self.x,self.y,self.z,self.r}")
      
        #dobot.set_joint_ptp(self.joint_1,self.joint_2,self.joint_3,self.joint_4)

    def timer_callback(self):
        # if(self.robot_state["KEY_LEFT"] == 1):
        #     self.joint_1 = self.joint_1 - 0.1
            
        # elif(self.robot_state["KEY_RIGHT"] == 1):
        #     self.joint_1 = self.joint_1 + 0.1            
        #self.joint_1 = self.joint_1 + 1
        pass
        
    def timer_callback2(self):
        
        if self.cartisian_mode:
            try:
                self.joint_1, self.joint_2, self.joint_3, self.joint_4 = inverse_kinematics(self.x, self.y,self.z,self.r)
            except Exception as e:
                self.reset_robot()
                print(e)
        else:
            self.x, self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)
        self.dobot.set_joint_ptp(self.joint_1,self.joint_2,self.joint_3,self.joint_4)
    def reset_robot(self):
        self.dobot.stop_current_action()
        self.joint_1,self.joint_2,self.joint_3,self.joint_4, = self.dobot.get_joint_state()
        self.x, self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)
    
        
    def auto_stack(self):
        self.is_auto = True
        dobot = self.dobot
        # Logger displays formatted text in the console, useful for simple debugging
        #self.get_logger().info(f"Incoming request\na: {a}, b: {b}")
        


        # do 2d translation first which is x and y diretion at once, then do z direction
        home_goal = [0,0,0,0]
        home_pose = forward_kinematics_solution(*home_goal)
        i = 0
        place_pose_list = [(0.135,0.226,BOTTOM,0),(0.105,0.226,BOTTOM,0),(0.075,0.226,BOTTOM,0),(0.045,0.226,BOTTOM,0),
                            (0.120,0.226,BOTTOM*2,0),(0.090,0.226,BOTTOM*2,0),(0.060,0.226,BOTTOM*2,0),
                                    (0.105,0.226,BOTTOM*3,0),(0.075,0.226,BOTTOM*3,0)
                       ]
        for x in XROW:
            for y in YCOL:
                
                pick_pose = (x,y,0.023,0)
                place_pose = place_pose_list[i]
                print(f"getting pick {pick_pose} to place {place_pose}")
                pick_goal = inverse_kinematics(*pick_pose)
                
                dobot.set_joint_ptp(*(inverse_kinematics(x, y,home_pose[2], 0)))
                # do z direction
                dobot.set_suction_cup(True)
                dobot.set_joint_ptp(*pick_goal)

                dobot.set_joint_ptp(*(inverse_kinematics(pick_pose[0],pick_pose[1] , home_pose[2], place_pose[3])))
                dobot.set_joint_ptp(*(inverse_kinematics(place_pose[0],place_pose[1] , home_pose[2], place_pose[3])))
                place_goal = inverse_kinematics(*place_pose)
                dobot.set_joint_ptp(*place_goal)
                dobot.set_suction_cup(False)
                dobot.set_joint_ptp(*(inverse_kinematics(place_pose[0],place_pose[1] , home_pose[2], place_pose[3])))
                dobot.set_joint_ptp(0,0,0,0)
                i = i + 1
        self.is_auto = False

# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = MyClassName()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
