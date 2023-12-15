// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file PositionSetpoint.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "PositionSetpoint.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>











px4_msgs::msg::PositionSetpoint::PositionSetpoint()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7f0eb4b4
    m_timestamp = 0;
    // m_valid com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5c33f1a9
    m_valid = false;
    // m_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1623b78d
    m_type = 0;
    // m_vx com.eprosima.idl.parser.typecode.PrimitiveTypeCode@c8c12ac
    m_vx = 0.0;
    // m_vy com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6adbc9d
    m_vy = 0.0;
    // m_vz com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4550bb58
    m_vz = 0.0;
    // m_velocity_valid com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4ec4f3a0
    m_velocity_valid = false;
    // m_velocity_frame com.eprosima.idl.parser.typecode.PrimitiveTypeCode@223191a6
    m_velocity_frame = 0;
    // m_alt_valid com.eprosima.idl.parser.typecode.PrimitiveTypeCode@49139829
    m_alt_valid = false;
    // m_lat com.eprosima.idl.parser.typecode.PrimitiveTypeCode@9597028
    m_lat = 0.0;
    // m_lon com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6069db50
    m_lon = 0.0;
    // m_alt com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4efbca5a
    m_alt = 0.0;
    // m_yaw com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1b7cc17c
    m_yaw = 0.0;
    // m_yaw_valid com.eprosima.idl.parser.typecode.PrimitiveTypeCode@59662a0b
    m_yaw_valid = false;
    // m_yawspeed com.eprosima.idl.parser.typecode.PrimitiveTypeCode@77fbd92c
    m_yawspeed = 0.0;
    // m_yawspeed_valid com.eprosima.idl.parser.typecode.PrimitiveTypeCode@67c27493
    m_yawspeed_valid = false;
    // m_landing_gear com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1a482e36
    m_landing_gear = 0;
    // m_loiter_radius com.eprosima.idl.parser.typecode.PrimitiveTypeCode@72967906
    m_loiter_radius = 0.0;
    // m_loiter_direction com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5b8dfcc1
    m_loiter_direction = 0;
    // m_acceptance_radius com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2f9f7dcf
    m_acceptance_radius = 0.0;
    // m_cruising_speed com.eprosima.idl.parser.typecode.PrimitiveTypeCode@747ddf94
    m_cruising_speed = 0.0;
    // m_cruising_throttle com.eprosima.idl.parser.typecode.PrimitiveTypeCode@35e2d654
    m_cruising_throttle = 0.0;
    // m_disable_weather_vane com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1bd4fdd
    m_disable_weather_vane = false;

}

px4_msgs::msg::PositionSetpoint::~PositionSetpoint()
{























}

px4_msgs::msg::PositionSetpoint::PositionSetpoint(const PositionSetpoint &x)
{
    m_timestamp = x.m_timestamp;
    m_valid = x.m_valid;
    m_type = x.m_type;
    m_vx = x.m_vx;
    m_vy = x.m_vy;
    m_vz = x.m_vz;
    m_velocity_valid = x.m_velocity_valid;
    m_velocity_frame = x.m_velocity_frame;
    m_alt_valid = x.m_alt_valid;
    m_lat = x.m_lat;
    m_lon = x.m_lon;
    m_alt = x.m_alt;
    m_yaw = x.m_yaw;
    m_yaw_valid = x.m_yaw_valid;
    m_yawspeed = x.m_yawspeed;
    m_yawspeed_valid = x.m_yawspeed_valid;
    m_landing_gear = x.m_landing_gear;
    m_loiter_radius = x.m_loiter_radius;
    m_loiter_direction = x.m_loiter_direction;
    m_acceptance_radius = x.m_acceptance_radius;
    m_cruising_speed = x.m_cruising_speed;
    m_cruising_throttle = x.m_cruising_throttle;
    m_disable_weather_vane = x.m_disable_weather_vane;
}

px4_msgs::msg::PositionSetpoint::PositionSetpoint(PositionSetpoint &&x)
{
    m_timestamp = x.m_timestamp;
    m_valid = x.m_valid;
    m_type = x.m_type;
    m_vx = x.m_vx;
    m_vy = x.m_vy;
    m_vz = x.m_vz;
    m_velocity_valid = x.m_velocity_valid;
    m_velocity_frame = x.m_velocity_frame;
    m_alt_valid = x.m_alt_valid;
    m_lat = x.m_lat;
    m_lon = x.m_lon;
    m_alt = x.m_alt;
    m_yaw = x.m_yaw;
    m_yaw_valid = x.m_yaw_valid;
    m_yawspeed = x.m_yawspeed;
    m_yawspeed_valid = x.m_yawspeed_valid;
    m_landing_gear = x.m_landing_gear;
    m_loiter_radius = x.m_loiter_radius;
    m_loiter_direction = x.m_loiter_direction;
    m_acceptance_radius = x.m_acceptance_radius;
    m_cruising_speed = x.m_cruising_speed;
    m_cruising_throttle = x.m_cruising_throttle;
    m_disable_weather_vane = x.m_disable_weather_vane;
}

px4_msgs::msg::PositionSetpoint& px4_msgs::msg::PositionSetpoint::operator=(const PositionSetpoint &x)
{

    m_timestamp = x.m_timestamp;
    m_valid = x.m_valid;
    m_type = x.m_type;
    m_vx = x.m_vx;
    m_vy = x.m_vy;
    m_vz = x.m_vz;
    m_velocity_valid = x.m_velocity_valid;
    m_velocity_frame = x.m_velocity_frame;
    m_alt_valid = x.m_alt_valid;
    m_lat = x.m_lat;
    m_lon = x.m_lon;
    m_alt = x.m_alt;
    m_yaw = x.m_yaw;
    m_yaw_valid = x.m_yaw_valid;
    m_yawspeed = x.m_yawspeed;
    m_yawspeed_valid = x.m_yawspeed_valid;
    m_landing_gear = x.m_landing_gear;
    m_loiter_radius = x.m_loiter_radius;
    m_loiter_direction = x.m_loiter_direction;
    m_acceptance_radius = x.m_acceptance_radius;
    m_cruising_speed = x.m_cruising_speed;
    m_cruising_throttle = x.m_cruising_throttle;
    m_disable_weather_vane = x.m_disable_weather_vane;

    return *this;
}

px4_msgs::msg::PositionSetpoint& px4_msgs::msg::PositionSetpoint::operator=(PositionSetpoint &&x)
{

    m_timestamp = x.m_timestamp;
    m_valid = x.m_valid;
    m_type = x.m_type;
    m_vx = x.m_vx;
    m_vy = x.m_vy;
    m_vz = x.m_vz;
    m_velocity_valid = x.m_velocity_valid;
    m_velocity_frame = x.m_velocity_frame;
    m_alt_valid = x.m_alt_valid;
    m_lat = x.m_lat;
    m_lon = x.m_lon;
    m_alt = x.m_alt;
    m_yaw = x.m_yaw;
    m_yaw_valid = x.m_yaw_valid;
    m_yawspeed = x.m_yawspeed;
    m_yawspeed_valid = x.m_yawspeed_valid;
    m_landing_gear = x.m_landing_gear;
    m_loiter_radius = x.m_loiter_radius;
    m_loiter_direction = x.m_loiter_direction;
    m_acceptance_radius = x.m_acceptance_radius;
    m_cruising_speed = x.m_cruising_speed;
    m_cruising_throttle = x.m_cruising_throttle;
    m_disable_weather_vane = x.m_disable_weather_vane;

    return *this;
}

size_t px4_msgs::msg::PositionSetpoint::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::PositionSetpoint::getCdrSerializedSize(const px4_msgs::msg::PositionSetpoint& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::PositionSetpoint::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_valid;
    scdr << m_type;
    scdr << m_vx;
    scdr << m_vy;
    scdr << m_vz;
    scdr << m_velocity_valid;
    scdr << m_velocity_frame;
    scdr << m_alt_valid;
    scdr << m_lat;
    scdr << m_lon;
    scdr << m_alt;
    scdr << m_yaw;
    scdr << m_yaw_valid;
    scdr << m_yawspeed;
    scdr << m_yawspeed_valid;
    scdr << m_landing_gear;
    scdr << m_loiter_radius;
    scdr << m_loiter_direction;
    scdr << m_acceptance_radius;
    scdr << m_cruising_speed;
    scdr << m_cruising_throttle;
    scdr << m_disable_weather_vane;
}

void px4_msgs::msg::PositionSetpoint::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_valid;
    dcdr >> m_type;
    dcdr >> m_vx;
    dcdr >> m_vy;
    dcdr >> m_vz;
    dcdr >> m_velocity_valid;
    dcdr >> m_velocity_frame;
    dcdr >> m_alt_valid;
    dcdr >> m_lat;
    dcdr >> m_lon;
    dcdr >> m_alt;
    dcdr >> m_yaw;
    dcdr >> m_yaw_valid;
    dcdr >> m_yawspeed;
    dcdr >> m_yawspeed_valid;
    dcdr >> m_landing_gear;
    dcdr >> m_loiter_radius;
    dcdr >> m_loiter_direction;
    dcdr >> m_acceptance_radius;
    dcdr >> m_cruising_speed;
    dcdr >> m_cruising_throttle;
    dcdr >> m_disable_weather_vane;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::PositionSetpoint::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::PositionSetpoint::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::PositionSetpoint::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member valid
 * @param _valid New value for member valid
 */
void px4_msgs::msg::PositionSetpoint::valid(bool _valid)
{
m_valid = _valid;
}

/*!
 * @brief This function returns the value of member valid
 * @return Value of member valid
 */
bool px4_msgs::msg::PositionSetpoint::valid() const
{
    return m_valid;
}

/*!
 * @brief This function returns a reference to member valid
 * @return Reference to member valid
 */
bool& px4_msgs::msg::PositionSetpoint::valid()
{
    return m_valid;
}

/*!
 * @brief This function sets a value in member type
 * @param _type New value for member type
 */
void px4_msgs::msg::PositionSetpoint::type(uint8_t _type)
{
m_type = _type;
}

/*!
 * @brief This function returns the value of member type
 * @return Value of member type
 */
uint8_t px4_msgs::msg::PositionSetpoint::type() const
{
    return m_type;
}

/*!
 * @brief This function returns a reference to member type
 * @return Reference to member type
 */
uint8_t& px4_msgs::msg::PositionSetpoint::type()
{
    return m_type;
}

/*!
 * @brief This function sets a value in member vx
 * @param _vx New value for member vx
 */
void px4_msgs::msg::PositionSetpoint::vx(float _vx)
{
m_vx = _vx;
}

/*!
 * @brief This function returns the value of member vx
 * @return Value of member vx
 */
float px4_msgs::msg::PositionSetpoint::vx() const
{
    return m_vx;
}

/*!
 * @brief This function returns a reference to member vx
 * @return Reference to member vx
 */
float& px4_msgs::msg::PositionSetpoint::vx()
{
    return m_vx;
}

/*!
 * @brief This function sets a value in member vy
 * @param _vy New value for member vy
 */
void px4_msgs::msg::PositionSetpoint::vy(float _vy)
{
m_vy = _vy;
}

/*!
 * @brief This function returns the value of member vy
 * @return Value of member vy
 */
float px4_msgs::msg::PositionSetpoint::vy() const
{
    return m_vy;
}

/*!
 * @brief This function returns a reference to member vy
 * @return Reference to member vy
 */
float& px4_msgs::msg::PositionSetpoint::vy()
{
    return m_vy;
}

/*!
 * @brief This function sets a value in member vz
 * @param _vz New value for member vz
 */
void px4_msgs::msg::PositionSetpoint::vz(float _vz)
{
m_vz = _vz;
}

/*!
 * @brief This function returns the value of member vz
 * @return Value of member vz
 */
float px4_msgs::msg::PositionSetpoint::vz() const
{
    return m_vz;
}

/*!
 * @brief This function returns a reference to member vz
 * @return Reference to member vz
 */
float& px4_msgs::msg::PositionSetpoint::vz()
{
    return m_vz;
}

/*!
 * @brief This function sets a value in member velocity_valid
 * @param _velocity_valid New value for member velocity_valid
 */
void px4_msgs::msg::PositionSetpoint::velocity_valid(bool _velocity_valid)
{
m_velocity_valid = _velocity_valid;
}

/*!
 * @brief This function returns the value of member velocity_valid
 * @return Value of member velocity_valid
 */
bool px4_msgs::msg::PositionSetpoint::velocity_valid() const
{
    return m_velocity_valid;
}

/*!
 * @brief This function returns a reference to member velocity_valid
 * @return Reference to member velocity_valid
 */
bool& px4_msgs::msg::PositionSetpoint::velocity_valid()
{
    return m_velocity_valid;
}

/*!
 * @brief This function sets a value in member velocity_frame
 * @param _velocity_frame New value for member velocity_frame
 */
void px4_msgs::msg::PositionSetpoint::velocity_frame(uint8_t _velocity_frame)
{
m_velocity_frame = _velocity_frame;
}

/*!
 * @brief This function returns the value of member velocity_frame
 * @return Value of member velocity_frame
 */
uint8_t px4_msgs::msg::PositionSetpoint::velocity_frame() const
{
    return m_velocity_frame;
}

/*!
 * @brief This function returns a reference to member velocity_frame
 * @return Reference to member velocity_frame
 */
uint8_t& px4_msgs::msg::PositionSetpoint::velocity_frame()
{
    return m_velocity_frame;
}

/*!
 * @brief This function sets a value in member alt_valid
 * @param _alt_valid New value for member alt_valid
 */
void px4_msgs::msg::PositionSetpoint::alt_valid(bool _alt_valid)
{
m_alt_valid = _alt_valid;
}

/*!
 * @brief This function returns the value of member alt_valid
 * @return Value of member alt_valid
 */
bool px4_msgs::msg::PositionSetpoint::alt_valid() const
{
    return m_alt_valid;
}

/*!
 * @brief This function returns a reference to member alt_valid
 * @return Reference to member alt_valid
 */
bool& px4_msgs::msg::PositionSetpoint::alt_valid()
{
    return m_alt_valid;
}

/*!
 * @brief This function sets a value in member lat
 * @param _lat New value for member lat
 */
void px4_msgs::msg::PositionSetpoint::lat(double _lat)
{
m_lat = _lat;
}

/*!
 * @brief This function returns the value of member lat
 * @return Value of member lat
 */
double px4_msgs::msg::PositionSetpoint::lat() const
{
    return m_lat;
}

/*!
 * @brief This function returns a reference to member lat
 * @return Reference to member lat
 */
double& px4_msgs::msg::PositionSetpoint::lat()
{
    return m_lat;
}

/*!
 * @brief This function sets a value in member lon
 * @param _lon New value for member lon
 */
void px4_msgs::msg::PositionSetpoint::lon(double _lon)
{
m_lon = _lon;
}

/*!
 * @brief This function returns the value of member lon
 * @return Value of member lon
 */
double px4_msgs::msg::PositionSetpoint::lon() const
{
    return m_lon;
}

/*!
 * @brief This function returns a reference to member lon
 * @return Reference to member lon
 */
double& px4_msgs::msg::PositionSetpoint::lon()
{
    return m_lon;
}

/*!
 * @brief This function sets a value in member alt
 * @param _alt New value for member alt
 */
void px4_msgs::msg::PositionSetpoint::alt(float _alt)
{
m_alt = _alt;
}

/*!
 * @brief This function returns the value of member alt
 * @return Value of member alt
 */
float px4_msgs::msg::PositionSetpoint::alt() const
{
    return m_alt;
}

/*!
 * @brief This function returns a reference to member alt
 * @return Reference to member alt
 */
float& px4_msgs::msg::PositionSetpoint::alt()
{
    return m_alt;
}

/*!
 * @brief This function sets a value in member yaw
 * @param _yaw New value for member yaw
 */
void px4_msgs::msg::PositionSetpoint::yaw(float _yaw)
{
m_yaw = _yaw;
}

/*!
 * @brief This function returns the value of member yaw
 * @return Value of member yaw
 */
float px4_msgs::msg::PositionSetpoint::yaw() const
{
    return m_yaw;
}

/*!
 * @brief This function returns a reference to member yaw
 * @return Reference to member yaw
 */
float& px4_msgs::msg::PositionSetpoint::yaw()
{
    return m_yaw;
}

/*!
 * @brief This function sets a value in member yaw_valid
 * @param _yaw_valid New value for member yaw_valid
 */
void px4_msgs::msg::PositionSetpoint::yaw_valid(bool _yaw_valid)
{
m_yaw_valid = _yaw_valid;
}

/*!
 * @brief This function returns the value of member yaw_valid
 * @return Value of member yaw_valid
 */
bool px4_msgs::msg::PositionSetpoint::yaw_valid() const
{
    return m_yaw_valid;
}

/*!
 * @brief This function returns a reference to member yaw_valid
 * @return Reference to member yaw_valid
 */
bool& px4_msgs::msg::PositionSetpoint::yaw_valid()
{
    return m_yaw_valid;
}

/*!
 * @brief This function sets a value in member yawspeed
 * @param _yawspeed New value for member yawspeed
 */
void px4_msgs::msg::PositionSetpoint::yawspeed(float _yawspeed)
{
m_yawspeed = _yawspeed;
}

/*!
 * @brief This function returns the value of member yawspeed
 * @return Value of member yawspeed
 */
float px4_msgs::msg::PositionSetpoint::yawspeed() const
{
    return m_yawspeed;
}

/*!
 * @brief This function returns a reference to member yawspeed
 * @return Reference to member yawspeed
 */
float& px4_msgs::msg::PositionSetpoint::yawspeed()
{
    return m_yawspeed;
}

/*!
 * @brief This function sets a value in member yawspeed_valid
 * @param _yawspeed_valid New value for member yawspeed_valid
 */
void px4_msgs::msg::PositionSetpoint::yawspeed_valid(bool _yawspeed_valid)
{
m_yawspeed_valid = _yawspeed_valid;
}

/*!
 * @brief This function returns the value of member yawspeed_valid
 * @return Value of member yawspeed_valid
 */
bool px4_msgs::msg::PositionSetpoint::yawspeed_valid() const
{
    return m_yawspeed_valid;
}

/*!
 * @brief This function returns a reference to member yawspeed_valid
 * @return Reference to member yawspeed_valid
 */
bool& px4_msgs::msg::PositionSetpoint::yawspeed_valid()
{
    return m_yawspeed_valid;
}

/*!
 * @brief This function sets a value in member landing_gear
 * @param _landing_gear New value for member landing_gear
 */
void px4_msgs::msg::PositionSetpoint::landing_gear(int8_t _landing_gear)
{
m_landing_gear = _landing_gear;
}

/*!
 * @brief This function returns the value of member landing_gear
 * @return Value of member landing_gear
 */
int8_t px4_msgs::msg::PositionSetpoint::landing_gear() const
{
    return m_landing_gear;
}

/*!
 * @brief This function returns a reference to member landing_gear
 * @return Reference to member landing_gear
 */
int8_t& px4_msgs::msg::PositionSetpoint::landing_gear()
{
    return m_landing_gear;
}

/*!
 * @brief This function sets a value in member loiter_radius
 * @param _loiter_radius New value for member loiter_radius
 */
void px4_msgs::msg::PositionSetpoint::loiter_radius(float _loiter_radius)
{
m_loiter_radius = _loiter_radius;
}

/*!
 * @brief This function returns the value of member loiter_radius
 * @return Value of member loiter_radius
 */
float px4_msgs::msg::PositionSetpoint::loiter_radius() const
{
    return m_loiter_radius;
}

/*!
 * @brief This function returns a reference to member loiter_radius
 * @return Reference to member loiter_radius
 */
float& px4_msgs::msg::PositionSetpoint::loiter_radius()
{
    return m_loiter_radius;
}

/*!
 * @brief This function sets a value in member loiter_direction
 * @param _loiter_direction New value for member loiter_direction
 */
void px4_msgs::msg::PositionSetpoint::loiter_direction(int8_t _loiter_direction)
{
m_loiter_direction = _loiter_direction;
}

/*!
 * @brief This function returns the value of member loiter_direction
 * @return Value of member loiter_direction
 */
int8_t px4_msgs::msg::PositionSetpoint::loiter_direction() const
{
    return m_loiter_direction;
}

/*!
 * @brief This function returns a reference to member loiter_direction
 * @return Reference to member loiter_direction
 */
int8_t& px4_msgs::msg::PositionSetpoint::loiter_direction()
{
    return m_loiter_direction;
}

/*!
 * @brief This function sets a value in member acceptance_radius
 * @param _acceptance_radius New value for member acceptance_radius
 */
void px4_msgs::msg::PositionSetpoint::acceptance_radius(float _acceptance_radius)
{
m_acceptance_radius = _acceptance_radius;
}

/*!
 * @brief This function returns the value of member acceptance_radius
 * @return Value of member acceptance_radius
 */
float px4_msgs::msg::PositionSetpoint::acceptance_radius() const
{
    return m_acceptance_radius;
}

/*!
 * @brief This function returns a reference to member acceptance_radius
 * @return Reference to member acceptance_radius
 */
float& px4_msgs::msg::PositionSetpoint::acceptance_radius()
{
    return m_acceptance_radius;
}

/*!
 * @brief This function sets a value in member cruising_speed
 * @param _cruising_speed New value for member cruising_speed
 */
void px4_msgs::msg::PositionSetpoint::cruising_speed(float _cruising_speed)
{
m_cruising_speed = _cruising_speed;
}

/*!
 * @brief This function returns the value of member cruising_speed
 * @return Value of member cruising_speed
 */
float px4_msgs::msg::PositionSetpoint::cruising_speed() const
{
    return m_cruising_speed;
}

/*!
 * @brief This function returns a reference to member cruising_speed
 * @return Reference to member cruising_speed
 */
float& px4_msgs::msg::PositionSetpoint::cruising_speed()
{
    return m_cruising_speed;
}

/*!
 * @brief This function sets a value in member cruising_throttle
 * @param _cruising_throttle New value for member cruising_throttle
 */
void px4_msgs::msg::PositionSetpoint::cruising_throttle(float _cruising_throttle)
{
m_cruising_throttle = _cruising_throttle;
}

/*!
 * @brief This function returns the value of member cruising_throttle
 * @return Value of member cruising_throttle
 */
float px4_msgs::msg::PositionSetpoint::cruising_throttle() const
{
    return m_cruising_throttle;
}

/*!
 * @brief This function returns a reference to member cruising_throttle
 * @return Reference to member cruising_throttle
 */
float& px4_msgs::msg::PositionSetpoint::cruising_throttle()
{
    return m_cruising_throttle;
}

/*!
 * @brief This function sets a value in member disable_weather_vane
 * @param _disable_weather_vane New value for member disable_weather_vane
 */
void px4_msgs::msg::PositionSetpoint::disable_weather_vane(bool _disable_weather_vane)
{
m_disable_weather_vane = _disable_weather_vane;
}

/*!
 * @brief This function returns the value of member disable_weather_vane
 * @return Value of member disable_weather_vane
 */
bool px4_msgs::msg::PositionSetpoint::disable_weather_vane() const
{
    return m_disable_weather_vane;
}

/*!
 * @brief This function returns a reference to member disable_weather_vane
 * @return Reference to member disable_weather_vane
 */
bool& px4_msgs::msg::PositionSetpoint::disable_weather_vane()
{
    return m_disable_weather_vane;
}


size_t px4_msgs::msg::PositionSetpoint::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;


























    return current_align;
}

bool px4_msgs::msg::PositionSetpoint::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::PositionSetpoint::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}


