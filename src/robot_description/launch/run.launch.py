import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import LogInfo
from launch.conditions import IfCondition
from launch.conditions import UnlessCondition
from launch.substitutions import LaunchConfiguration, TextSubstitution
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'world',
            default_value=[''],
            description='/model_py/world/test.world'
        ),
        DeclareLaunchArgument(
            'urdf',
            default_value=[''],
            description='/robot_description/urdf/run.urdf.xacro'
        ),
        Node(
            package='gazebo_ros',
            executable='gazebo',
            namespace='gazebo',
            name='gazebo',
            output='screen',
            arguments=[
                '--verbose',
                LaunchConfiguration('world')
            ],
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            namespace='',
            output='screen',
            parameters=[{'robot_description': LaunchConfiguration('urdf')}],
        )
    ])
