**ROS2 Differential Drive Robot with Depth Cameras
**
This GitHub repository contains the code and configuration for a two-wheel differential drive robot implemented using ROS2, with the additional integration of two depth cameras. This project aims to provide a simple yet comprehensive example of a robotic system that can be simulated using ROS2.
Features

Differential Drive: The robot is designed with a two-wheel differential drive system, allowing for easy navigation and control.
    
ROS2 Integration: The project leverages the capabilities of ROS2, providing a modular and scalable architecture for developing robotic applications.

Depth Cameras: Two depth cameras are attached to the robot, enhancing its perception capabilities for tasks such as obstacle detection, mapping, and navigation.

Launch Simulation


Initially, to assess the URDF, use this command:

The model file resides within the directory path: src/model_py/urdf/run.urdf.xacro

    ros2 launch urdf_tutorial display.launch.py model:=/path_to_model (run.urdf.xacro)


To launch the simulation, run the following command:

    ros2 launch model_py launch_sim.launch.py

This command will start the robot simulation along with the necessary nodes and configurations.
