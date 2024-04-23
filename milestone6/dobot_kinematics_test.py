import math
import numpy as np
np.set_printoptions(precision=2)
class Dobot_Kinematics:
    def __init__(self):
        # Define the robot's geometry
        self.L0 = 0.056
        self.L1 = 0.082
        self.L2 = 0.135
        self.L3 = 0.147
        self.L4 = 0.060
        self.L5 = 0.070 

        
        
        # Define the robot's joint limits
        self.joint_limits = {
            'theta1': (-1.57, 1.57),
            'theta2': (-1.57, 1.57),
            'theta3': (-1.57, 1.57),
            'theta4': (-1.57, 1.57),
        }

    def dh2htm(self, row):
        a = row[0]
        alpha =  np.deg2rad(row[1])
        d = row[2]
        theta =  np.deg2rad(row[3])
        htm =  np.array([[np.cos(theta), -1* np.sin(theta), 0,a],
                            [np.cos(alpha) * np.sin(theta), np.cos(alpha) * np.cos(theta), -1 * np.sin(alpha),np.sin(alpha) * d],
                            [np.sin(alpha) * np.sin(theta), np.sin(alpha) * np.cos(theta), np.cos(alpha),np.cos(alpha) * d],
                            [0, 0, 0, 1]
                            ])
        #print(htm)
        return htm
        
                              
        
    def forward_kinematics(self, th1, th2, th3, th4):

        self.dh = np.array([[0, 0, self.L0 + self.L1 , th1],
                            [0, -90, 0, th2-90],
                            [self.L2, 0, 0, th3+90],
                            [self.L3, 0, 0, -(th2 + th3)],
                            [self.L4, 90,0, th4],
                            ])
    
        F1 = self.dh2htm(self.dh[0])
        F2 = np.matmul(F1,self.dh2htm(self.dh[1]))
        F3 = np.matmul(F2,self.dh2htm(self.dh[2]))
        F4 = np.matmul(F3,self.dh2htm(self.dh[3]))
        F5 = np.matmul(F4,self.dh2htm(self.dh[4]))
        E = np.matmul(F5, np.array([[1,0,0,0],[0,1,0,0],[0,0,1,self.L5 * -1],[0,0,0,1]]))
        print(E)
        x = np.rad2deg(E[0][3])
        y = np.rad2deg(E[1][3])
        z = np.rad2deg(E[2][3])
        r = th1 + th4
        return x, y, z, r

    def forward_kinematics_solution(self, th1, th2, th3, th4):
        r = th1 + th4
        th1 = np.deg2rad(th1)
        th2 = np.deg2rad(th2)
        th3 = np.deg2rad(th3)
        th4 = np.deg2rad(th4)

        x = 3*np.cos(th1) * (49*np.cos(th2 + th3) +45*np.sin(th2) + 20)
        y = 3*np.sin(th1) * (49*np.cos(th2 + th3) +45*np.sin(th2) + 20)
        z = 135*np.cos(th2) - 147*np.sin(th2 + th3) + 68

        
        return x/1000, y/1000, z/1000, r

    def inverse_kinematics(self, x, y, z,r):
        # Calculate the inverse kinematics
        d = np.sqrt(x**2 + y**2) - self.L4
        h = z + self.L5 - self.L0 - self.L1
        c = np.sqrt(d**2 + h**2)
        alpha = math.atan2(d,h)
        numerator = (self.L2**2 - self.L3**2 + c**2)
        denominator = 2 * self.L2 * c
        division = numerator/denominator
        numeraor3 = (self.L2**2 + self.L3**2 - c**2)
        denominator3 = 2 * self.L2 * self.L3
        division3 = numeraor3/denominator3
        if(division > 1 or division < -1 or division3 > 1 or division3 < -1):
            print("The division is out of range")
            return 0,0,0,0
        theta1 = math.degrees(math.atan2(y,x))
        theta2 = math.degrees(alpha - math.acos(numerator/denominator))
        theta3 = math.degrees(math.asin(numeraor3/denominator3))
        theta4 = r - theta1

        return theta1, theta2, theta3, theta4
 
# first = (0, 0, 0, 0)
# second = (-90, 10, 20, 30)
# third = (80, 35, -5, -10)        
# dobot_Kinematics = Dobot_Kinematics()
# first_solution = dobot_Kinematics.forward_kinematics_solution(*first)
# first_reverse = dobot_Kinematics.inverse_kinematics(*first_solution)
# print(f"First: {first}")
# print("First solution:", first_solution)
# print("First reverse:", first_reverse)



# second_solution = dobot_Kinematics.forward_kinematics_solution(*second)
# second_reverse = dobot_Kinematics.inverse_kinematics(*second_solution)
# print("Second: ", second)
# print("First solution:", first_solution)
# print("Second solution:", second_solution)

# third_solution = dobot_Kinematics.forward_kinematics_solution(*third)
# third_reverse = dobot_Kinematics.inverse_kinematics(*third_solution)
# print("Third: ", third)
# print("Third solution:", third_solution)
# print("Third reverse:", third_reverse)




