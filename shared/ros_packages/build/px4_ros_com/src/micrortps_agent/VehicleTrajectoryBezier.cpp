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
 * @file VehicleTrajectoryBezier.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "VehicleTrajectoryBezier.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>










px4_msgs::msg::VehicleTrajectoryBezier::VehicleTrajectoryBezier()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2cd76f31
    m_timestamp = 0;
    // m_control_points com.eprosima.idl.parser.typecode.AliasTypeCode@367ffa75

    // m_bezier_order com.eprosima.idl.parser.typecode.PrimitiveTypeCode@49438269
    m_bezier_order = 0;

}

px4_msgs::msg::VehicleTrajectoryBezier::~VehicleTrajectoryBezier()
{



}

px4_msgs::msg::VehicleTrajectoryBezier::VehicleTrajectoryBezier(const VehicleTrajectoryBezier &x)
{
    m_timestamp = x.m_timestamp;
    m_control_points = x.m_control_points;
    m_bezier_order = x.m_bezier_order;
}

px4_msgs::msg::VehicleTrajectoryBezier::VehicleTrajectoryBezier(VehicleTrajectoryBezier &&x)
{
    m_timestamp = x.m_timestamp;
    m_control_points = std::move(x.m_control_points);
    m_bezier_order = x.m_bezier_order;
}

px4_msgs::msg::VehicleTrajectoryBezier& px4_msgs::msg::VehicleTrajectoryBezier::operator=(const VehicleTrajectoryBezier &x)
{

    m_timestamp = x.m_timestamp;
    m_control_points = x.m_control_points;
    m_bezier_order = x.m_bezier_order;

    return *this;
}

px4_msgs::msg::VehicleTrajectoryBezier& px4_msgs::msg::VehicleTrajectoryBezier::operator=(VehicleTrajectoryBezier &&x)
{

    m_timestamp = x.m_timestamp;
    m_control_points = std::move(x.m_control_points);
    m_bezier_order = x.m_bezier_order;

    return *this;
}

size_t px4_msgs::msg::VehicleTrajectoryBezier::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    for(size_t a = 0; a < (5); ++a)
    {
        current_alignment += px4_msgs::msg::px4_msgs__msg__TrajectoryBezier::getMaxCdrSerializedSize(current_alignment);}
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::VehicleTrajectoryBezier::getCdrSerializedSize(const px4_msgs::msg::VehicleTrajectoryBezier& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    for(size_t a = 0; a < data.control_points().size(); ++a)
    {
            current_alignment += px4_msgs::msg::px4_msgs__msg__TrajectoryBezier::getCdrSerializedSize(data.control_points().at(a), current_alignment);
    }
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::VehicleTrajectoryBezier::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_control_points;

    scdr << m_bezier_order;
}

void px4_msgs::msg::VehicleTrajectoryBezier::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_control_points;

    dcdr >> m_bezier_order;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::VehicleTrajectoryBezier::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::VehicleTrajectoryBezier::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::VehicleTrajectoryBezier::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function copies the value in member control_points
 * @param _control_points New value to be copied in member control_points
 */
void px4_msgs::msg::VehicleTrajectoryBezier::control_points(const px4_msgs::msg::px4_msgs__msg__TrajectoryBezier__5 &_control_points)
{
m_control_points = _control_points;
}

/*!
 * @brief This function moves the value in member control_points
 * @param _control_points New value to be moved in member control_points
 */
void px4_msgs::msg::VehicleTrajectoryBezier::control_points(px4_msgs::msg::px4_msgs__msg__TrajectoryBezier__5 &&_control_points)
{
m_control_points = std::move(_control_points);
}

/*!
 * @brief This function returns a constant reference to member control_points
 * @return Constant reference to member control_points
 */
const px4_msgs::msg::px4_msgs__msg__TrajectoryBezier__5& px4_msgs::msg::VehicleTrajectoryBezier::control_points() const
{
    return m_control_points;
}

/*!
 * @brief This function returns a reference to member control_points
 * @return Reference to member control_points
 */
px4_msgs::msg::px4_msgs__msg__TrajectoryBezier__5& px4_msgs::msg::VehicleTrajectoryBezier::control_points()
{
    return m_control_points;
}
/*!
 * @brief This function sets a value in member bezier_order
 * @param _bezier_order New value for member bezier_order
 */
void px4_msgs::msg::VehicleTrajectoryBezier::bezier_order(uint8_t _bezier_order)
{
m_bezier_order = _bezier_order;
}

/*!
 * @brief This function returns the value of member bezier_order
 * @return Value of member bezier_order
 */
uint8_t px4_msgs::msg::VehicleTrajectoryBezier::bezier_order() const
{
    return m_bezier_order;
}

/*!
 * @brief This function returns a reference to member bezier_order
 * @return Reference to member bezier_order
 */
uint8_t& px4_msgs::msg::VehicleTrajectoryBezier::bezier_order()
{
    return m_bezier_order;
}


size_t px4_msgs::msg::VehicleTrajectoryBezier::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool px4_msgs::msg::VehicleTrajectoryBezier::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::VehicleTrajectoryBezier::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
}


