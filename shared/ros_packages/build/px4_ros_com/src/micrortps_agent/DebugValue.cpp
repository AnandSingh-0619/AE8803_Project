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
 * @file DebugValue.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "DebugValue.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

px4_msgs::msg::DebugValue::DebugValue()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@67c33749
    m_timestamp = 0;
    // m_ind com.eprosima.idl.parser.typecode.PrimitiveTypeCode@fba92d3
    m_ind = 0;
    // m_value com.eprosima.idl.parser.typecode.PrimitiveTypeCode@662b4c69
    m_value = 0.0;

}

px4_msgs::msg::DebugValue::~DebugValue()
{



}

px4_msgs::msg::DebugValue::DebugValue(const DebugValue &x)
{
    m_timestamp = x.m_timestamp;
    m_ind = x.m_ind;
    m_value = x.m_value;
}

px4_msgs::msg::DebugValue::DebugValue(DebugValue &&x)
{
    m_timestamp = x.m_timestamp;
    m_ind = x.m_ind;
    m_value = x.m_value;
}

px4_msgs::msg::DebugValue& px4_msgs::msg::DebugValue::operator=(const DebugValue &x)
{

    m_timestamp = x.m_timestamp;
    m_ind = x.m_ind;
    m_value = x.m_value;

    return *this;
}

px4_msgs::msg::DebugValue& px4_msgs::msg::DebugValue::operator=(DebugValue &&x)
{

    m_timestamp = x.m_timestamp;
    m_ind = x.m_ind;
    m_value = x.m_value;

    return *this;
}

size_t px4_msgs::msg::DebugValue::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::DebugValue::getCdrSerializedSize(const px4_msgs::msg::DebugValue& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::DebugValue::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_ind;
    scdr << m_value;
}

void px4_msgs::msg::DebugValue::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_ind;
    dcdr >> m_value;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::DebugValue::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::DebugValue::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::DebugValue::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member ind
 * @param _ind New value for member ind
 */
void px4_msgs::msg::DebugValue::ind(int8_t _ind)
{
m_ind = _ind;
}

/*!
 * @brief This function returns the value of member ind
 * @return Value of member ind
 */
int8_t px4_msgs::msg::DebugValue::ind() const
{
    return m_ind;
}

/*!
 * @brief This function returns a reference to member ind
 * @return Reference to member ind
 */
int8_t& px4_msgs::msg::DebugValue::ind()
{
    return m_ind;
}

/*!
 * @brief This function sets a value in member value
 * @param _value New value for member value
 */
void px4_msgs::msg::DebugValue::value(float _value)
{
m_value = _value;
}

/*!
 * @brief This function returns the value of member value
 * @return Value of member value
 */
float px4_msgs::msg::DebugValue::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
float& px4_msgs::msg::DebugValue::value()
{
    return m_value;
}


size_t px4_msgs::msg::DebugValue::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool px4_msgs::msg::DebugValue::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::DebugValue::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
}


