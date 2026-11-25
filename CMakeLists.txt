# CMakeList.txt : CMake project for FuvarManager, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (FuvarManager	"src/FuvarManager.cpp" "src/services/dispatcher.cpp" "src/models/Driver.cpp" "src/models/Vehicle.cpp" "src/models/FreightOrder.cpp"
								"include/services/dispatcher.h" "include/FuvarManager.h" "include/models/Vehicle.h" "include/models/Driver.h" "include/models/FreightOrder.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET FuvarManager PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
