# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HelloQT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HelloQT_autogen.dir\\ParseCache.txt"
  "HelloQT_autogen"
  )
endif()
