# generated from ament_cmake_export_interfaces/cmake/ament_cmake_export_interfaces-extras.cmake.in

set(_exported_interfaces "export_frame_transforms")

# include all exported interfaces
if(NOT _exported_interfaces STREQUAL "")
  foreach(_interface ${_exported_interfaces})
    include("${px4_ros_com_DIR}/${_interface}Export.cmake")
    list(APPEND px4_ros_com_INTERFACES "px4_ros_com::${_interface}")
  endforeach()
endif()
