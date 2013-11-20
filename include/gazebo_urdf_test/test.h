/*
 * Copyright (C) 2012-2013 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __GAZEBO_URDF_TEST_GAZEBO_TEST_HH__
#define __GAZEBO_URDF_TEST_GAZEBO_TEST_HH__

#include <ros/ros.h>
#include <urdf/model.h>

void test()
{
  urdf::Model model;
  if (!model.initParam("robot_description"))
  {
    ROS_ERROR("Failed to parse URDF");
    return;
  }

  ROS_INFO_STREAM(model.getRoot()->name); // should be link0
  ROS_INFO_STREAM(model.getRoot()->child_links.size()); // should be 1

  for (size_t i=0; i<model.getRoot()->child_links.size(); i++)
  {
    ROS_INFO_STREAM(model.getRoot()->child_links[i]->name);
  }
}

#endif
