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

#include <ros/ros.h>
#include <gazebo/physics/physics.hh>
#include "gazebo_urdf_test/plugin.h"

using namespace gazebo;

GZ_REGISTER_MODEL_PLUGIN(GazeboUrdfTest)

using namespace gazebo;

/////////////////////////////////////////////////
GazeboUrdfTest::GazeboUrdfTest()
{
}

/////////////////////////////////////////////////
GazeboUrdfTest::~GazeboUrdfTest()
{

}

/////////////////////////////////////////////////
void GazeboUrdfTest::Load(physics::ModelPtr _model,
  sdf::ElementPtr /*_sdf*/)
{
  this->model = _model;

  this->updateConnection = event::Events::ConnectWorldUpdateBegin(
          boost::bind(&GazeboUrdfTest::OnUpdate, this));
}

/////////////////////////////////////////////////
void GazeboUrdfTest::Init()
{
  test();
}

/////////////////////////////////////////////////
void GazeboUrdfTest::OnUpdate()
{

}
