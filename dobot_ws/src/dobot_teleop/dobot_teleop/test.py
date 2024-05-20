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
pick_pose = [(center_x + offset[0] * (block_size + gap), center_y + offset[1] * (block_size + gap)) for offset in offsets]

print("pick_pose =", pick_pose)
