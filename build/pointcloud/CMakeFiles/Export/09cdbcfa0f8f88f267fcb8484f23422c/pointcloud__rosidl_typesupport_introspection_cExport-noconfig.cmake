#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pointcloud::pointcloud__rosidl_typesupport_introspection_c" for configuration ""
set_property(TARGET pointcloud::pointcloud__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(pointcloud::pointcloud__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libpointcloud__rosidl_typesupport_introspection_c.so"
  IMPORTED_SONAME_NOCONFIG "libpointcloud__rosidl_typesupport_introspection_c.so"
  )

list(APPEND _cmake_import_check_targets pointcloud::pointcloud__rosidl_typesupport_introspection_c )
list(APPEND _cmake_import_check_files_for_pointcloud::pointcloud__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/libpointcloud__rosidl_typesupport_introspection_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
