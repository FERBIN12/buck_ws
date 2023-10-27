# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pointcloud_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pointcloud_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pointcloud_FOUND FALSE)
  elseif(NOT pointcloud_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pointcloud_FOUND FALSE)
  endif()
  return()
endif()
set(_pointcloud_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pointcloud_FIND_QUIETLY)
  message(STATUS "Found pointcloud: 0.0.0 (${pointcloud_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pointcloud' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${pointcloud_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pointcloud_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pointcloud_DIR}/${_extra}")
endforeach()
