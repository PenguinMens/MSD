# The following imports are necessary
import math
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
BOTTOM = 0.019
XROW1 = 0.062
XROW2 = 0.092
XROW3 = 0.122
XROW = [XROW1,XROW2,XROW3]
YCOL1 = -0.231
YCOL2 = -0.201
YCOL3 = -0.171
YCOL = [YCOL1,YCOL2,YCOL3]

center_x = 0.092
center_y = -0.201
block_size = 0.025
gap = 0.005

# Define the offsets for the blocks relative to the center block
offsets = [
    (0, 0),     # Center block
    (-1, 1), (0, 1), (1, 1),
    (-1, 0),          (1, 0),
    (-1, -1), (0, -1), (1, -1)
]

# Calculate the coordinates for each block
pick_pose_list = [(center_x + offset[0] * (block_size + gap), center_y + offset[1] * (block_size + gap), BOTTOM,0) for offset in offsets]



# pick_pose_list = [(XROW[0],YCOL[0],BOTTOM,0),(XROW[0],YCOL[1],BOTTOM,0),(XROW[0],YCOL[2],BOTTOM,0),
#                   (XROW[1],YCOL[0],BOTTOM,0),(XROW[1],YCOL[1],BOTTOM,0),(XROW[1],YCOL[2],BOTTOM,0),
#                   (XROW[2],YCOL[0],BOTTOM,0),(XROW[2],YCOL[1],BOTTOM,0),(XROW[2],YCOL[2],BOTTOM,0)]



place_pose_list = []
# for i in range(9):
#     if i < 4:
#         place_pose_list.append((0.135 -  i * 0.031 ,0.226,BOTTOM+0.003,0))
#     elif i > 3 and i < 7:
#         place_pose_list.append((0.120 -  (i - 4) * 0.031 ,0.226,BOTTOM+BOTTOM + 0.003,0))
#     else:
#         place_pose_list.append((0.105 -  (i - 8) * 0.031 ,0.226,BOTTOM+BOTTOM + BOTTOM + 0.003,0))
BOTTOM_PLACE = BOTTOM + 0.002
place_pose_list = [(0.135,0.226,BOTTOM_PLACE,0),(0.105,0.226,BOTTOM_PLACE,0),(0.075,0.226,BOTTOM_PLACE,0),(0.045,0.226,BOTTOM_PLACE,0),
                        (0.120,0.226,BOTTOM_PLACE*2,0),(0.090,0.226,BOTTOM_PLACE*2,0),(0.060,0.226,BOTTOM_PLACE*2,0),
                               (0.105,0.226,BOTTOM_PLACE*3,0),(0.075,0.226,BOTTOM_PLACE*3,0)
                ]

# want to have a pick and place struct


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
        self.timer = self.create_timer(2, self.timer_callback)
        self.timer = self.create_timer(0.3, self.timer_callback2)
        self.joint_1 = 0
        self.joint_2 = 0
        self.joint_3 = 0
        self.joint_4 = 0
        
        self.x, self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)
        # 0 means stay still 
        # 

        self.get_logger().info(f"se{pick_pose_list}")
        self.get_logger().info(f"se{place_pose_list}")
        self.is_home = False
        self.robot_state = {
            "isCartisian": False,
            "KEY_UP": 0,
            "KEY_DOWN": 0,
            "KEY_LEFT": 0,
            "KEY_RIGHT": 0,
        }
        
        # first_block = (center_x, center_y,0.01, 0)
        # self.joint_1,self.joint_2,self.joint_3,self.joint_4  = inverse_kinematics(*first_block)
        

        self.dobot_instructions = []
        self.dobot_suction = False
        self.cartisian_mode = False
        self.is_homing =False
        self.is_auto = False
        self.is_asterix = False
        self.keys_being_ppressed = []
        self.i = 0

    

        
    # Listener callback function will be called every time a message is published on the topic this node is subscribed to
    def listener_callback(self, msg):
        dobot = self.dobot
        
        # Logger displays formatted text in the console, useful for simple debugging
        ammount = 1
        cartesianAmmount = 0.0001
        key = msg.key
        state = msg.state
        isCartisian = msg.cartisian
        valid = False
        #self.get_logger().info(f"BEFORE {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        # self.get_logger().info(f"self.is_auto{self.is_auto}")
        if self.is_homing:

            return
        if self.is_auto:
            if key == "KEY_H":
                self.reset_robot()
                self.is_auto = False

            return
        if self.is_asterix:
            # self.get_logger().info(f"skipping keyboard inpute")
            if key == "KEY_KPASTERISK" and state == 0:
                self.get_logger().info(f"making it asterix false")
                self.is_asterix = False
            return
        if( state == 0):

            self.get_logger().info(f"{msg}")
            if key != "KEY_F5" and key != "KEY_H" and key != "KEY_KPASTERISK" :  

                self.reset_robot()
                self.keys_being_ppressed = []
            if key == "KEY_E":
                self.dobot_suction = not self.dobot_suction
            if key == "KEY_M":
                self.cartisian_mode = not self.cartisian_mode
            if key == "KEY_H":
                self.dobot.start_homing()
            if key == "KEY_F5":
                self.i = 0
                self.is_auto = True
                self.dobot.set_joint_ptp(0,0,0,0)
            if key == "KEY_KPASTERISK":
                if(self.is_asterix == False):
                    self.is_asterix = True
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
                    self.z = self.z -cartesianAmmount
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
                    
                    self.r = self.r - 1
                else:
                    self.joint_4 = self.joint_4 - 1
            if key == "KEY_D":
                if key not in self.keys_being_ppressed:
                    self.reset_robot()
                    self.keys_being_ppressed.append(key)
                if self.cartisian_mode:
                    self.r = self.r + 1
                else:
                    self.joint_4 = self.joint_4 + 1

            if key == "KEY_E":
                if self.dobot_suction == False:
                    self.dobot.set_suction_cup(True)
                    
                if self.dobot_suction == True:
                    self.dobot.set_suction_cup(False)

                    
        # self.get_logger().info(f"{self.keys_being_ppressed}")
                # valid = self.dobot.is_goal_valid(self.joint_1,self.joint_2,self.joint_3,self.joint_4)
        #self.get_logger().info(f"after {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        # self.get_logger().info(f"after {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        # self.get_logger().info(f"after {self.x,self.y,self.z,self.r}")
      
        #dobot.set_joint_ptp(self.joint_1,self.joint_2,self.joint_3,self.joint_4)

    def timer_callback(self):
        #print(f"is auto is tes {self.is_auto}")0
        if(self.is_auto):
            temp = self.dobot.get_joint_state() 
            #print(self.dobot.get_joint_state())
            temp_check = True
            for joint in temp:
                if int(joint) != 0:
                    temp_check = False
            if(temp_check ):
                self.is_home = True
                if(self.i < 9):
                    self.auto_stack(self.i)
                self.i = self.i + 1
                
            else:
                self.is_home = False
            if(self.i > 8 and self.is_home == True):

                self.is_auto = False
        if(self.is_homing):
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
                #self.get_logger().info(f"{e}")
                if(not self.dobot.is_goal_valid(self.joint_1, self.joint_2, self.joint_3, self.joint_4 )):
                    self.reset_robot()
                # self.get_logger().info(f"{self.x, self.y,self.z,self.r}")
                # self.get_logger().info(f"{ }")
            except Exception as e:
                self.get_logger().info(f"{e}")
                self.reset_robot()
        
        else:
            self.x, self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)
        if(not self.is_homing and not self.is_auto):
            self.dobot.set_joint_ptp(self.joint_1,self.joint_2,self.joint_3,self.joint_4)
    def reset_robot(self):
        self.dobot.stop_current_action()
        self.joint_1,self.joint_2,self.joint_3,self.joint_4, = self.dobot.get_joint_state()
        self.x, self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)
    
        
    def auto_stack(self,i):

        self.is_home = False
        dobot = self.dobot
        # Logger displays formatted text in the console, useful for simple debugging
        #self.get_logger().info(f"Incoming request\na: {a}, b: {b}")
        


        # do 2d translation first which is x and y diretion at once, then do z direction

        home_goal = [0,0,0,0]
        home_pose = forward_kinematics_solution(*home_goal)
        
        pick_pose = pick_pose_list[i]
        place_pose = place_pose_list[i]
        x= pick_pose[0]
        y= pick_pose[1]

        pick_goal = inverse_kinematics(*pick_pose)
        
        dobot.set_joint_ptp(*(inverse_kinematics(x, y,home_pose[2], 0)))
        # do z direction
        dobot.set_suction_cup(True)
        dobot.set_joint_ptp(*(inverse_kinematics(x, y,pick_pose[2]+0.01, 0)))
        # dobot.set_joint_ptp(*(inverse_kinematics(x, y,pick_pose[2]+0.005, 0)))
        dobot.set_joint_ptp(*pick_goal)

        # dobot.set_joint_ptp(*(inverse_kinematics(x, y,pick_pose[2]+0.005, 0)))
        dobot.set_joint_ptp(*(inverse_kinematics(x, y,pick_pose[2]+0.01, 0)))
        dobot.set_joint_ptp(*(inverse_kinematics(x, y,pick_pose[2]+0.025, 0)))
        dobot.set_joint_ptp(*(inverse_kinematics(x, y, home_pose[2], 0)))
        #dobot.set_joint_ptp(*(inverse_kinematics(pick_pose[0],pick_pose[1] , home_pose[2], place_pose[3])))
        dobot.set_joint_ptp(*(inverse_kinematics(place_pose[0],place_pose[1] , home_pose[2], place_pose[3])))
        dobot.set_joint_ptp(*(inverse_kinematics(place_pose[0],place_pose[1] ,place_pose[2]+0.005, place_pose[3])))
        dobot.set_joint_ptp(*(inverse_kinematics(place_pose[0],place_pose[1] ,place_pose[2]+0.001, place_pose[3])))
        dobot.set_suction_cup(False)

        # dobot.set_joint_ptp(*place_goal)
        
        dobot.set_joint_ptp(*(inverse_kinematics(place_pose[0],place_pose[1] , home_pose[2], place_pose[3])))
        dobot.set_joint_ptp(0,0,0,0)
       
        

# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = MyClassName()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
