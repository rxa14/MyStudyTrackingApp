# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/applemonStudys_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/applemonStudys_autogen.dir/ParseCache.txt"
  "CMakeFiles/streaks_tests_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/streaks_tests_autogen.dir/ParseCache.txt"
  "CMakeFiles/streaksmanager_tests_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/streaksmanager_tests_autogen.dir/ParseCache.txt"
  "applemonStudys_autogen"
  "streaks_tests_autogen"
  "streaksmanager_tests_autogen"
  )
endif()
