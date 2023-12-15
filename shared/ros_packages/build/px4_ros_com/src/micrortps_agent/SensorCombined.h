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
 * @file SensorCombined.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _PX4_MSGS_MSG_SENSORCOMBINED_H_
#define _PX4_MSGS_MSG_SENSORCOMBINED_H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(SensorCombined_SOURCE)
#define SensorCombined_DllAPI __declspec( dllexport )
#else
#define SensorCombined_DllAPI __declspec( dllimport )
#endif // SensorCombined_SOURCE
#else
#define SensorCombined_DllAPI
#endif
#else
#define SensorCombined_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}


namespace px4_msgs
{
    namespace msg
    {
        typedef std::array<float, 3> float__3;
        namespace SensorCombined_Constants
        {
            const int32_t RELATIVE_TIMESTAMP_INVALID = 2147483647;
            const uint8_t CLIPPING_X = 1;
            const uint8_t CLIPPING_Y = 2;
            const uint8_t CLIPPING_Z = 4;
        }
        /*!
         * @brief This class represents the structure SensorCombined defined by the user in the IDL file.
         * @ingroup SENSORCOMBINED
         */
        class SensorCombined
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport SensorCombined();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~SensorCombined();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object px4_msgs::msg::SensorCombined that will be copied.
             */
            eProsima_user_DllExport SensorCombined(const SensorCombined &x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object px4_msgs::msg::SensorCombined that will be copied.
             */
            eProsima_user_DllExport SensorCombined(SensorCombined &&x);

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object px4_msgs::msg::SensorCombined that will be copied.
             */
            eProsima_user_DllExport SensorCombined& operator=(const SensorCombined &x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object px4_msgs::msg::SensorCombined that will be copied.
             */
            eProsima_user_DllExport SensorCombined& operator=(SensorCombined &&x);

            /*!
             * @brief This function sets a value in member timestamp
             * @param _timestamp New value for member timestamp
             */
            eProsima_user_DllExport void timestamp(uint64_t _timestamp);

            /*!
             * @brief This function returns the value of member timestamp
             * @return Value of member timestamp
             */
            eProsima_user_DllExport uint64_t timestamp() const;

            /*!
             * @brief This function returns a reference to member timestamp
             * @return Reference to member timestamp
             */
            eProsima_user_DllExport uint64_t& timestamp();

            /*!
             * @brief This function copies the value in member gyro_rad
             * @param _gyro_rad New value to be copied in member gyro_rad
             */
            eProsima_user_DllExport void gyro_rad(const px4_msgs::msg::float__3 &_gyro_rad);

            /*!
             * @brief This function moves the value in member gyro_rad
             * @param _gyro_rad New value to be moved in member gyro_rad
             */
            eProsima_user_DllExport void gyro_rad(px4_msgs::msg::float__3 &&_gyro_rad);

            /*!
             * @brief This function returns a constant reference to member gyro_rad
             * @return Constant reference to member gyro_rad
             */
            eProsima_user_DllExport const px4_msgs::msg::float__3& gyro_rad() const;

            /*!
             * @brief This function returns a reference to member gyro_rad
             * @return Reference to member gyro_rad
             */
            eProsima_user_DllExport px4_msgs::msg::float__3& gyro_rad();
            /*!
             * @brief This function sets a value in member gyro_integral_dt
             * @param _gyro_integral_dt New value for member gyro_integral_dt
             */
            eProsima_user_DllExport void gyro_integral_dt(uint32_t _gyro_integral_dt);

            /*!
             * @brief This function returns the value of member gyro_integral_dt
             * @return Value of member gyro_integral_dt
             */
            eProsima_user_DllExport uint32_t gyro_integral_dt() const;

            /*!
             * @brief This function returns a reference to member gyro_integral_dt
             * @return Reference to member gyro_integral_dt
             */
            eProsima_user_DllExport uint32_t& gyro_integral_dt();

            /*!
             * @brief This function sets a value in member accelerometer_timestamp_relative
             * @param _accelerometer_timestamp_relative New value for member accelerometer_timestamp_relative
             */
            eProsima_user_DllExport void accelerometer_timestamp_relative(int32_t _accelerometer_timestamp_relative);

            /*!
             * @brief This function returns the value of member accelerometer_timestamp_relative
             * @return Value of member accelerometer_timestamp_relative
             */
            eProsima_user_DllExport int32_t accelerometer_timestamp_relative() const;

            /*!
             * @brief This function returns a reference to member accelerometer_timestamp_relative
             * @return Reference to member accelerometer_timestamp_relative
             */
            eProsima_user_DllExport int32_t& accelerometer_timestamp_relative();

            /*!
             * @brief This function copies the value in member accelerometer_m_s2
             * @param _accelerometer_m_s2 New value to be copied in member accelerometer_m_s2
             */
            eProsima_user_DllExport void accelerometer_m_s2(const px4_msgs::msg::float__3 &_accelerometer_m_s2);

            /*!
             * @brief This function moves the value in member accelerometer_m_s2
             * @param _accelerometer_m_s2 New value to be moved in member accelerometer_m_s2
             */
            eProsima_user_DllExport void accelerometer_m_s2(px4_msgs::msg::float__3 &&_accelerometer_m_s2);

            /*!
             * @brief This function returns a constant reference to member accelerometer_m_s2
             * @return Constant reference to member accelerometer_m_s2
             */
            eProsima_user_DllExport const px4_msgs::msg::float__3& accelerometer_m_s2() const;

            /*!
             * @brief This function returns a reference to member accelerometer_m_s2
             * @return Reference to member accelerometer_m_s2
             */
            eProsima_user_DllExport px4_msgs::msg::float__3& accelerometer_m_s2();
            /*!
             * @brief This function sets a value in member accelerometer_integral_dt
             * @param _accelerometer_integral_dt New value for member accelerometer_integral_dt
             */
            eProsima_user_DllExport void accelerometer_integral_dt(uint32_t _accelerometer_integral_dt);

            /*!
             * @brief This function returns the value of member accelerometer_integral_dt
             * @return Value of member accelerometer_integral_dt
             */
            eProsima_user_DllExport uint32_t accelerometer_integral_dt() const;

            /*!
             * @brief This function returns a reference to member accelerometer_integral_dt
             * @return Reference to member accelerometer_integral_dt
             */
            eProsima_user_DllExport uint32_t& accelerometer_integral_dt();

            /*!
             * @brief This function sets a value in member accelerometer_clipping
             * @param _accelerometer_clipping New value for member accelerometer_clipping
             */
            eProsima_user_DllExport void accelerometer_clipping(uint8_t _accelerometer_clipping);

            /*!
             * @brief This function returns the value of member accelerometer_clipping
             * @return Value of member accelerometer_clipping
             */
            eProsima_user_DllExport uint8_t accelerometer_clipping() const;

            /*!
             * @brief This function returns a reference to member accelerometer_clipping
             * @return Reference to member accelerometer_clipping
             */
            eProsima_user_DllExport uint8_t& accelerometer_clipping();


            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(const px4_msgs::msg::SensorCombined& data, size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

        private:
            uint64_t m_timestamp;
            px4_msgs::msg::float__3 m_gyro_rad;
            uint32_t m_gyro_integral_dt;
            int32_t m_accelerometer_timestamp_relative;
            px4_msgs::msg::float__3 m_accelerometer_m_s2;
            uint32_t m_accelerometer_integral_dt;
            uint8_t m_accelerometer_clipping;
        };
    }
}

#endif // _PX4_MSGS_MSG_SENSORCOMBINED_H_