import numpy as np

# Dobot Magician parameters
L1 = 138  # Length of link 1 in mm
L2 = 135  # Length of link 2 in mm
L3 = 147  # Length of link 3 in mm
L4 = 60   # Length of link 4 in mm

def forward_kinematics(theta1, theta2, theta3, theta4):
    """
    Calculate the forward kinematics of Dobot Magician.

    Parameters:
        theta1, theta2, theta3, theta4: Joint angles in radians.

    Returns:
        x, y, z, theta: Position (x, y, z) and orientation (theta) of end-effector.
    """
    # Forward kinematics equations
    x = L1 * np.cos(theta1) + L2 * np.cos(theta1 + theta2) + L3 * np.cos(theta1 + theta2 + theta3)
    y = L1 * np.sin(theta1) + L2 * np.sin(theta1 + theta2) + L3 * np.sin(theta1 + theta2 + theta3)
    z = L4 - L1 * np.sin(theta1) - L2 * np.sin(theta1 + theta2) - L3 * np.sin(theta1 + theta2 + theta3)
    theta = theta1 + theta2 + theta3 + theta4

    return x, y, z, theta

def inverse_kinematics(x, y, z, theta):
    """
    Calculate the inverse kinematics of Dobot Magician.

    Parameters:
        x, y, z: Position (x, y, z) of end-effector.
        theta: Orientation of end-effector.

    Returns:
        theta1, theta2, theta3, theta4: Joint angles in radians.
    """
    # Inverse kinematics equations
    r = np.sqrt(x**2 + y**2)
    alpha = np.arctan2(y, x)
    beta = np.arccos((L2**2 + r**2 - L3**2) / (2 * L2 * r))
    gamma = np.arccos((L2**2 + L3**2 - r**2) / (2 * L2 * L3))

    theta1 = np.arctan2(y, x)
    theta2 = np.pi/2 - alpha - beta
    theta3 = np.pi - gamma
    theta4 = theta - theta1 - theta2 - theta3

    return theta1, theta2, theta3, theta4

if __name__ == "__main__":
    # Test forward kinematics
    theta1 = 0
    theta2 = 0
    theta3 = 0
    theta4 = 0
    x, y, z, theta = forward_kinematics(theta1, theta2, theta3, theta4)
    print("Forward Kinematics:")
    print("x:", x)
    print("y:", y)
    print("z:", z)
    print("theta:", theta)

    # Test inverse kinematics
    x_test = 1
    y_test = 1
    z_test = 1
    theta_test = np.pi/2
    theta1, theta2, theta3, theta4 = inverse_kinematics(x_test, y_test, z_test, theta_test)
    print("\nInverse Kinematics:")
    print("theta1:", theta1)
    print("theta2:", theta2)
    print("theta3:", theta3)
    print("theta4:", theta4)