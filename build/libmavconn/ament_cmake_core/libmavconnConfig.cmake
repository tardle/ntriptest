# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_libmavconn_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED libmavconn_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(libmavconn_FOUND FALSE)
  elseif(NOT libmavconn_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(libmavconn_FOUND FALSE)
  endif()
  return()
endif()
set(_libmavconn_CONFIG_INCLUDED TRUE)

# output package information
if(NOT libmavconn_FIND_QUIETLY)
  message(STATUS "Found libmavconn: 2.10.1 (${libmavconn_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'libmavconn' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${libmavconn_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(libmavconn_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "libmavconn-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${libmavconn_DIR}/${_extra}")
endforeach()
