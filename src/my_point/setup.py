from setuptools import find_packages, setup

package_name = 'my_point'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kanja-koduki',
    maintainer_email='fjferbin@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'point_node = my_point.point_pub:main',
            'base_link_publisher=my_point.base_link:main',
            'lidar_publisher=my_point.pointthree_pub:main',
            'camera_pub=my_point.cam_pub:main',
            'camera_sub=my_point.cam_sub:main'
            
        ],
    },
)
