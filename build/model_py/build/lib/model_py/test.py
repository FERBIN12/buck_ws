#!/usr/bin/env python3

import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.animation import FuncAnimation

# Read the points from the file
points = []
with open('point_cloud.txt', 'r') as f:
    for line in f:
        point = list(map(float, line.split()[:3]))
        points.append(point)
points = np.array(points)

# Sort points by descending z, then ascending x and y
sorted_points = points[np.lexsort((-points[:, 2], points[:, 0], points[:, 1]))]

# Separate the points into two faces (assuming equal points for simplicity)
half_len = len(sorted_points) // 2
face1 = sorted_points[:half_len]
face2 = sorted_points[half_len:]

# Customize plot
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Sort face1 points by x, then y, then z
face1 = face1[np.lexsort((-face1[:, 2], face1[:, 1], face1[:, 0]))]
face2 = face2[np.lexsort((-face2[:, 2], face2[:, 1], -face2[:, 0]))]

part1 = face1[:int(half_len*0.75)]

# Sort part2 considering y-coordinate when it's negative
part2 = np.concatenate((face1[int(half_len*0.75):], face2[:int(half_len*0.25)]), axis=0)
part2 = part2[np.lexsort((part2[:, 1], -part2[:, 0] if any(part2[:, 1] < 0) else part2[:, 0], part2[:, 2]))]

part3 = face2[int(half_len*0.25):]
merged_face = np.concatenate((part1, part2, part3), axis=0)

ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')
ax.set_title('Path Animation')

# Set appropriate plot limits
ax.set_xlim(np.min(merged_face[:, 0]), np.max(merged_face[:, 0]))
ax.set_ylim(np.min(merged_face[:, 1]), np.max(merged_face[:, 1]))
ax.set_zlim(np.min(merged_face[:, 2]), np.max(merged_face[:, 2]))

# Create a line object for the animation with the specified colors-
line1, = ax.plot([], [], [], c='b', alpha=1, label='Path (Face 1)')

# Create a scatter plot for the cloud points with increased transparency (alpha)
ax.scatter(merged_face[:, 0], merged_face[:, 1], merged_face[:, 2], c='lightgrey', alpha=0.01, label='Cloud Points')

# Initialization function for animation
def init():
    line1.set_data([], [])
    line1.set_3d_properties([])
    return line1

# Animation function
def animate(i):
    x1 = merged_face[:i, 0]
    y1 = merged_face[:i, 1]
    z1 = merged_face[:i, 2]
    line1.set_data(x1, y1)
    line1.set_3d_properties(z1)

    return line1

# Create the animation
ani = FuncAnimation(fig, animate, init_func=init, frames=len(merged_face), interval=1, repeat=False)

ax.legend()
ax.set_box_aspect([np.ptp(merged_face[:, 0]), np.ptp(merged_face[:, 1]), np.ptp(merged_face[:, 2])])

plt.show()