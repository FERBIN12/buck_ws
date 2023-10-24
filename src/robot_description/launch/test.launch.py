import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

def generate_launch_description():
    package_directory=get_package_share_directory('robot_description')
    world_file=os.path.join(package_directory, 'world','test.world')

    return LaunchDescription( [
        ExecuteProcess(
            cmd=['gazebo', '--verbose',world_file,'-s','libgazebo_ros_factory.so'],
            output='screen'),

    ]
    )