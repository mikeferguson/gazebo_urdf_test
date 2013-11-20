cmake_minimum_required(VERSION 2.8.3)
project(gazebo_urdf_test)

find_package(catkin REQUIRED gazebo_ros urdf)
find_package(gazebo REQUIRED)

link_directories(
  ${GAZEBO_LIBRARY_DIRS}
)
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${GAZEBO_INCLUDE_DIRS}
)

catkin_package(
  CATKIN_DEPENDS
    urdf
    gazebo_ros
  DEPENDS
    gazebo
#    INCLUDE_DIRS
#    LIBRARIES
)

add_library(gazebo_urdf_test src/plugin.cpp)
add_dependencies(gazebo_urdf_test ${PROJECT_NAME}_gencfg)
target_link_libraries(gazebo_urdf_test
  ${catkin_LIBRARIES}
  ${GAZEBO_LIBRARIES}
)

add_executable(ros_urdf_test src/node.cpp)
target_link_libraries(ros_urdf_test
  ${catkin_LIBRARIES}
  ${GAZEBO_LIBRARIES}
)
