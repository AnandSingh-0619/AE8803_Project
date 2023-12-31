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
 * @file OpticalFlow.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "OpticalFlow.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>






px4_msgs::msg::OpticalFlow::OpticalFlow()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@d706f19
    m_timestamp = 0;
    // m_sensor_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@30b7c004
    m_sensor_id = 0;
    // m_pixel_flow_x_integral com.eprosima.idl.parser.typecode.PrimitiveTypeCode@79efed2d
    m_pixel_flow_x_integral = 0.0;
    // m_pixel_flow_y_integral com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2928854b
    m_pixel_flow_y_integral = 0.0;
    // m_gyro_x_rate_integral com.eprosima.idl.parser.typecode.PrimitiveTypeCode@27ae2fd0
    m_gyro_x_rate_integral = 0.0;
    // m_gyro_y_rate_integral com.eprosima.idl.parser.typecode.PrimitiveTypeCode@29176cc1
    m_gyro_y_rate_integral = 0.0;
    // m_gyro_z_rate_integral com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2f177a4b
    m_gyro_z_rate_integral = 0.0;
    // m_ground_distance_m com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4278a03f
    m_ground_distance_m = 0.0;
    // m_integration_timespan com.eprosima.idl.parser.typecode.PrimitiveTypeCode@147ed70f
    m_integration_timespan = 0;
    // m_time_since_last_sonar_update com.eprosima.idl.parser.typecode.PrimitiveTypeCode@61dd025
    m_time_since_last_sonar_update = 0;
    // m_frame_count_since_last_readout com.eprosima.idl.parser.typecode.PrimitiveTypeCode@124c278f
    m_frame_count_since_last_readout = 0;
    // m_gyro_temperature com.eprosima.idl.parser.typecode.PrimitiveTypeCode@15b204a1
    m_gyro_temperature = 0;
    // m_quality com.eprosima.idl.parser.typecode.PrimitiveTypeCode@77167fb7
    m_quality = 0;
    // m_max_flow_rate com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1fe20588
    m_max_flow_rate = 0.0;
    // m_min_ground_distance com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6ce139a4
    m_min_ground_distance = 0.0;
    // m_max_ground_distance com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6973bf95
    m_max_ground_distance = 0.0;
    // m_mode com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2ddc8ecb
    m_mode = 0;

}

px4_msgs::msg::OpticalFlow::~OpticalFlow()
{

















}

px4_msgs::msg::OpticalFlow::OpticalFlow(const OpticalFlow &x)
{
    m_timestamp = x.m_timestamp;
    m_sensor_id = x.m_sensor_id;
    m_pixel_flow_x_integral = x.m_pixel_flow_x_integral;
    m_pixel_flow_y_integral = x.m_pixel_flow_y_integral;
    m_gyro_x_rate_integral = x.m_gyro_x_rate_integral;
    m_gyro_y_rate_integral = x.m_gyro_y_rate_integral;
    m_gyro_z_rate_integral = x.m_gyro_z_rate_integral;
    m_ground_distance_m = x.m_ground_distance_m;
    m_integration_timespan = x.m_integration_timespan;
    m_time_since_last_sonar_update = x.m_time_since_last_sonar_update;
    m_frame_count_since_last_readout = x.m_frame_count_since_last_readout;
    m_gyro_temperature = x.m_gyro_temperature;
    m_quality = x.m_quality;
    m_max_flow_rate = x.m_max_flow_rate;
    m_min_ground_distance = x.m_min_ground_distance;
    m_max_ground_distance = x.m_max_ground_distance;
    m_mode = x.m_mode;
}

px4_msgs::msg::OpticalFlow::OpticalFlow(OpticalFlow &&x)
{
    m_timestamp = x.m_timestamp;
    m_sensor_id = x.m_sensor_id;
    m_pixel_flow_x_integral = x.m_pixel_flow_x_integral;
    m_pixel_flow_y_integral = x.m_pixel_flow_y_integral;
    m_gyro_x_rate_integral = x.m_gyro_x_rate_integral;
    m_gyro_y_rate_integral = x.m_gyro_y_rate_integral;
    m_gyro_z_rate_integral = x.m_gyro_z_rate_integral;
    m_ground_distance_m = x.m_ground_distance_m;
    m_integration_timespan = x.m_integration_timespan;
    m_time_since_last_sonar_update = x.m_time_since_last_sonar_update;
    m_frame_count_since_last_readout = x.m_frame_count_since_last_readout;
    m_gyro_temperature = x.m_gyro_temperature;
    m_quality = x.m_quality;
    m_max_flow_rate = x.m_max_flow_rate;
    m_min_ground_distance = x.m_min_ground_distance;
    m_max_ground_distance = x.m_max_ground_distance;
    m_mode = x.m_mode;
}

px4_msgs::msg::OpticalFlow& px4_msgs::msg::OpticalFlow::operator=(const OpticalFlow &x)
{

    m_timestamp = x.m_timestamp;
    m_sensor_id = x.m_sensor_id;
    m_pixel_flow_x_integral = x.m_pixel_flow_x_integral;
    m_pixel_flow_y_integral = x.m_pixel_flow_y_integral;
    m_gyro_x_rate_integral = x.m_gyro_x_rate_integral;
    m_gyro_y_rate_integral = x.m_gyro_y_rate_integral;
    m_gyro_z_rate_integral = x.m_gyro_z_rate_integral;
    m_ground_distance_m = x.m_ground_distance_m;
    m_integration_timespan = x.m_integration_timespan;
    m_time_since_last_sonar_update = x.m_time_since_last_sonar_update;
    m_frame_count_since_last_readout = x.m_frame_count_since_last_readout;
    m_gyro_temperature = x.m_gyro_temperature;
    m_quality = x.m_quality;
    m_max_flow_rate = x.m_max_flow_rate;
    m_min_ground_distance = x.m_min_ground_distance;
    m_max_ground_distance = x.m_max_ground_distance;
    m_mode = x.m_mode;

    return *this;
}

px4_msgs::msg::OpticalFlow& px4_msgs::msg::OpticalFlow::operator=(OpticalFlow &&x)
{

    m_timestamp = x.m_timestamp;
    m_sensor_id = x.m_sensor_id;
    m_pixel_flow_x_integral = x.m_pixel_flow_x_integral;
    m_pixel_flow_y_integral = x.m_pixel_flow_y_integral;
    m_gyro_x_rate_integral = x.m_gyro_x_rate_integral;
    m_gyro_y_rate_integral = x.m_gyro_y_rate_integral;
    m_gyro_z_rate_integral = x.m_gyro_z_rate_integral;
    m_ground_distance_m = x.m_ground_distance_m;
    m_integration_timespan = x.m_integration_timespan;
    m_time_since_last_sonar_update = x.m_time_since_last_sonar_update;
    m_frame_count_since_last_readout = x.m_frame_count_since_last_readout;
    m_gyro_temperature = x.m_gyro_temperature;
    m_quality = x.m_quality;
    m_max_flow_rate = x.m_max_flow_rate;
    m_min_ground_distance = x.m_min_ground_distance;
    m_max_ground_distance = x.m_max_ground_distance;
    m_mode = x.m_mode;

    return *this;
}

size_t px4_msgs::msg::OpticalFlow::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::OpticalFlow::getCdrSerializedSize(const px4_msgs::msg::OpticalFlow& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::OpticalFlow::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_sensor_id;
    scdr << m_pixel_flow_x_integral;
    scdr << m_pixel_flow_y_integral;
    scdr << m_gyro_x_rate_integral;
    scdr << m_gyro_y_rate_integral;
    scdr << m_gyro_z_rate_integral;
    scdr << m_ground_distance_m;
    scdr << m_integration_timespan;
    scdr << m_time_since_last_sonar_update;
    scdr << m_frame_count_since_last_readout;
    scdr << m_gyro_temperature;
    scdr << m_quality;
    scdr << m_max_flow_rate;
    scdr << m_min_ground_distance;
    scdr << m_max_ground_distance;
    scdr << m_mode;
}

void px4_msgs::msg::OpticalFlow::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_sensor_id;
    dcdr >> m_pixel_flow_x_integral;
    dcdr >> m_pixel_flow_y_integral;
    dcdr >> m_gyro_x_rate_integral;
    dcdr >> m_gyro_y_rate_integral;
    dcdr >> m_gyro_z_rate_integral;
    dcdr >> m_ground_distance_m;
    dcdr >> m_integration_timespan;
    dcdr >> m_time_since_last_sonar_update;
    dcdr >> m_frame_count_since_last_readout;
    dcdr >> m_gyro_temperature;
    dcdr >> m_quality;
    dcdr >> m_max_flow_rate;
    dcdr >> m_min_ground_distance;
    dcdr >> m_max_ground_distance;
    dcdr >> m_mode;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::OpticalFlow::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::OpticalFlow::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::OpticalFlow::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member sensor_id
 * @param _sensor_id New value for member sensor_id
 */
void px4_msgs::msg::OpticalFlow::sensor_id(uint8_t _sensor_id)
{
m_sensor_id = _sensor_id;
}

/*!
 * @brief This function returns the value of member sensor_id
 * @return Value of member sensor_id
 */
uint8_t px4_msgs::msg::OpticalFlow::sensor_id() const
{
    return m_sensor_id;
}

/*!
 * @brief This function returns a reference to member sensor_id
 * @return Reference to member sensor_id
 */
uint8_t& px4_msgs::msg::OpticalFlow::sensor_id()
{
    return m_sensor_id;
}

/*!
 * @brief This function sets a value in member pixel_flow_x_integral
 * @param _pixel_flow_x_integral New value for member pixel_flow_x_integral
 */
void px4_msgs::msg::OpticalFlow::pixel_flow_x_integral(float _pixel_flow_x_integral)
{
m_pixel_flow_x_integral = _pixel_flow_x_integral;
}

/*!
 * @brief This function returns the value of member pixel_flow_x_integral
 * @return Value of member pixel_flow_x_integral
 */
float px4_msgs::msg::OpticalFlow::pixel_flow_x_integral() const
{
    return m_pixel_flow_x_integral;
}

/*!
 * @brief This function returns a reference to member pixel_flow_x_integral
 * @return Reference to member pixel_flow_x_integral
 */
float& px4_msgs::msg::OpticalFlow::pixel_flow_x_integral()
{
    return m_pixel_flow_x_integral;
}

/*!
 * @brief This function sets a value in member pixel_flow_y_integral
 * @param _pixel_flow_y_integral New value for member pixel_flow_y_integral
 */
void px4_msgs::msg::OpticalFlow::pixel_flow_y_integral(float _pixel_flow_y_integral)
{
m_pixel_flow_y_integral = _pixel_flow_y_integral;
}

/*!
 * @brief This function returns the value of member pixel_flow_y_integral
 * @return Value of member pixel_flow_y_integral
 */
float px4_msgs::msg::OpticalFlow::pixel_flow_y_integral() const
{
    return m_pixel_flow_y_integral;
}

/*!
 * @brief This function returns a reference to member pixel_flow_y_integral
 * @return Reference to member pixel_flow_y_integral
 */
float& px4_msgs::msg::OpticalFlow::pixel_flow_y_integral()
{
    return m_pixel_flow_y_integral;
}

/*!
 * @brief This function sets a value in member gyro_x_rate_integral
 * @param _gyro_x_rate_integral New value for member gyro_x_rate_integral
 */
void px4_msgs::msg::OpticalFlow::gyro_x_rate_integral(float _gyro_x_rate_integral)
{
m_gyro_x_rate_integral = _gyro_x_rate_integral;
}

/*!
 * @brief This function returns the value of member gyro_x_rate_integral
 * @return Value of member gyro_x_rate_integral
 */
float px4_msgs::msg::OpticalFlow::gyro_x_rate_integral() const
{
    return m_gyro_x_rate_integral;
}

/*!
 * @brief This function returns a reference to member gyro_x_rate_integral
 * @return Reference to member gyro_x_rate_integral
 */
float& px4_msgs::msg::OpticalFlow::gyro_x_rate_integral()
{
    return m_gyro_x_rate_integral;
}

/*!
 * @brief This function sets a value in member gyro_y_rate_integral
 * @param _gyro_y_rate_integral New value for member gyro_y_rate_integral
 */
void px4_msgs::msg::OpticalFlow::gyro_y_rate_integral(float _gyro_y_rate_integral)
{
m_gyro_y_rate_integral = _gyro_y_rate_integral;
}

/*!
 * @brief This function returns the value of member gyro_y_rate_integral
 * @return Value of member gyro_y_rate_integral
 */
float px4_msgs::msg::OpticalFlow::gyro_y_rate_integral() const
{
    return m_gyro_y_rate_integral;
}

/*!
 * @brief This function returns a reference to member gyro_y_rate_integral
 * @return Reference to member gyro_y_rate_integral
 */
float& px4_msgs::msg::OpticalFlow::gyro_y_rate_integral()
{
    return m_gyro_y_rate_integral;
}

/*!
 * @brief This function sets a value in member gyro_z_rate_integral
 * @param _gyro_z_rate_integral New value for member gyro_z_rate_integral
 */
void px4_msgs::msg::OpticalFlow::gyro_z_rate_integral(float _gyro_z_rate_integral)
{
m_gyro_z_rate_integral = _gyro_z_rate_integral;
}

/*!
 * @brief This function returns the value of member gyro_z_rate_integral
 * @return Value of member gyro_z_rate_integral
 */
float px4_msgs::msg::OpticalFlow::gyro_z_rate_integral() const
{
    return m_gyro_z_rate_integral;
}

/*!
 * @brief This function returns a reference to member gyro_z_rate_integral
 * @return Reference to member gyro_z_rate_integral
 */
float& px4_msgs::msg::OpticalFlow::gyro_z_rate_integral()
{
    return m_gyro_z_rate_integral;
}

/*!
 * @brief This function sets a value in member ground_distance_m
 * @param _ground_distance_m New value for member ground_distance_m
 */
void px4_msgs::msg::OpticalFlow::ground_distance_m(float _ground_distance_m)
{
m_ground_distance_m = _ground_distance_m;
}

/*!
 * @brief This function returns the value of member ground_distance_m
 * @return Value of member ground_distance_m
 */
float px4_msgs::msg::OpticalFlow::ground_distance_m() const
{
    return m_ground_distance_m;
}

/*!
 * @brief This function returns a reference to member ground_distance_m
 * @return Reference to member ground_distance_m
 */
float& px4_msgs::msg::OpticalFlow::ground_distance_m()
{
    return m_ground_distance_m;
}

/*!
 * @brief This function sets a value in member integration_timespan
 * @param _integration_timespan New value for member integration_timespan
 */
void px4_msgs::msg::OpticalFlow::integration_timespan(uint32_t _integration_timespan)
{
m_integration_timespan = _integration_timespan;
}

/*!
 * @brief This function returns the value of member integration_timespan
 * @return Value of member integration_timespan
 */
uint32_t px4_msgs::msg::OpticalFlow::integration_timespan() const
{
    return m_integration_timespan;
}

/*!
 * @brief This function returns a reference to member integration_timespan
 * @return Reference to member integration_timespan
 */
uint32_t& px4_msgs::msg::OpticalFlow::integration_timespan()
{
    return m_integration_timespan;
}

/*!
 * @brief This function sets a value in member time_since_last_sonar_update
 * @param _time_since_last_sonar_update New value for member time_since_last_sonar_update
 */
void px4_msgs::msg::OpticalFlow::time_since_last_sonar_update(uint32_t _time_since_last_sonar_update)
{
m_time_since_last_sonar_update = _time_since_last_sonar_update;
}

/*!
 * @brief This function returns the value of member time_since_last_sonar_update
 * @return Value of member time_since_last_sonar_update
 */
uint32_t px4_msgs::msg::OpticalFlow::time_since_last_sonar_update() const
{
    return m_time_since_last_sonar_update;
}

/*!
 * @brief This function returns a reference to member time_since_last_sonar_update
 * @return Reference to member time_since_last_sonar_update
 */
uint32_t& px4_msgs::msg::OpticalFlow::time_since_last_sonar_update()
{
    return m_time_since_last_sonar_update;
}

/*!
 * @brief This function sets a value in member frame_count_since_last_readout
 * @param _frame_count_since_last_readout New value for member frame_count_since_last_readout
 */
void px4_msgs::msg::OpticalFlow::frame_count_since_last_readout(uint16_t _frame_count_since_last_readout)
{
m_frame_count_since_last_readout = _frame_count_since_last_readout;
}

/*!
 * @brief This function returns the value of member frame_count_since_last_readout
 * @return Value of member frame_count_since_last_readout
 */
uint16_t px4_msgs::msg::OpticalFlow::frame_count_since_last_readout() const
{
    return m_frame_count_since_last_readout;
}

/*!
 * @brief This function returns a reference to member frame_count_since_last_readout
 * @return Reference to member frame_count_since_last_readout
 */
uint16_t& px4_msgs::msg::OpticalFlow::frame_count_since_last_readout()
{
    return m_frame_count_since_last_readout;
}

/*!
 * @brief This function sets a value in member gyro_temperature
 * @param _gyro_temperature New value for member gyro_temperature
 */
void px4_msgs::msg::OpticalFlow::gyro_temperature(int16_t _gyro_temperature)
{
m_gyro_temperature = _gyro_temperature;
}

/*!
 * @brief This function returns the value of member gyro_temperature
 * @return Value of member gyro_temperature
 */
int16_t px4_msgs::msg::OpticalFlow::gyro_temperature() const
{
    return m_gyro_temperature;
}

/*!
 * @brief This function returns a reference to member gyro_temperature
 * @return Reference to member gyro_temperature
 */
int16_t& px4_msgs::msg::OpticalFlow::gyro_temperature()
{
    return m_gyro_temperature;
}

/*!
 * @brief This function sets a value in member quality
 * @param _quality New value for member quality
 */
void px4_msgs::msg::OpticalFlow::quality(uint8_t _quality)
{
m_quality = _quality;
}

/*!
 * @brief This function returns the value of member quality
 * @return Value of member quality
 */
uint8_t px4_msgs::msg::OpticalFlow::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
uint8_t& px4_msgs::msg::OpticalFlow::quality()
{
    return m_quality;
}

/*!
 * @brief This function sets a value in member max_flow_rate
 * @param _max_flow_rate New value for member max_flow_rate
 */
void px4_msgs::msg::OpticalFlow::max_flow_rate(float _max_flow_rate)
{
m_max_flow_rate = _max_flow_rate;
}

/*!
 * @brief This function returns the value of member max_flow_rate
 * @return Value of member max_flow_rate
 */
float px4_msgs::msg::OpticalFlow::max_flow_rate() const
{
    return m_max_flow_rate;
}

/*!
 * @brief This function returns a reference to member max_flow_rate
 * @return Reference to member max_flow_rate
 */
float& px4_msgs::msg::OpticalFlow::max_flow_rate()
{
    return m_max_flow_rate;
}

/*!
 * @brief This function sets a value in member min_ground_distance
 * @param _min_ground_distance New value for member min_ground_distance
 */
void px4_msgs::msg::OpticalFlow::min_ground_distance(float _min_ground_distance)
{
m_min_ground_distance = _min_ground_distance;
}

/*!
 * @brief This function returns the value of member min_ground_distance
 * @return Value of member min_ground_distance
 */
float px4_msgs::msg::OpticalFlow::min_ground_distance() const
{
    return m_min_ground_distance;
}

/*!
 * @brief This function returns a reference to member min_ground_distance
 * @return Reference to member min_ground_distance
 */
float& px4_msgs::msg::OpticalFlow::min_ground_distance()
{
    return m_min_ground_distance;
}

/*!
 * @brief This function sets a value in member max_ground_distance
 * @param _max_ground_distance New value for member max_ground_distance
 */
void px4_msgs::msg::OpticalFlow::max_ground_distance(float _max_ground_distance)
{
m_max_ground_distance = _max_ground_distance;
}

/*!
 * @brief This function returns the value of member max_ground_distance
 * @return Value of member max_ground_distance
 */
float px4_msgs::msg::OpticalFlow::max_ground_distance() const
{
    return m_max_ground_distance;
}

/*!
 * @brief This function returns a reference to member max_ground_distance
 * @return Reference to member max_ground_distance
 */
float& px4_msgs::msg::OpticalFlow::max_ground_distance()
{
    return m_max_ground_distance;
}

/*!
 * @brief This function sets a value in member mode
 * @param _mode New value for member mode
 */
void px4_msgs::msg::OpticalFlow::mode(uint8_t _mode)
{
m_mode = _mode;
}

/*!
 * @brief This function returns the value of member mode
 * @return Value of member mode
 */
uint8_t px4_msgs::msg::OpticalFlow::mode() const
{
    return m_mode;
}

/*!
 * @brief This function returns a reference to member mode
 * @return Reference to member mode
 */
uint8_t& px4_msgs::msg::OpticalFlow::mode()
{
    return m_mode;
}


size_t px4_msgs::msg::OpticalFlow::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;




















    return current_align;
}

bool px4_msgs::msg::OpticalFlow::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::OpticalFlow::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}


