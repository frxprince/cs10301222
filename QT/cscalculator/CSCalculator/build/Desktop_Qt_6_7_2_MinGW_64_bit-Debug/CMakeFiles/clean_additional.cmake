# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CSCalculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CSCalculator_autogen.dir\\ParseCache.txt"
  "CSCalculator_autogen"
  )
endif()
