cmake_minimum_required(VERSION 3.16)

project(MorseCannon VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(MorseCannon
	"src/main.cpp"
	"src/sources/Game.cpp"
)

target_link_libraries(MorseCannon PRIVATE Qt6::Widgets)

install(TARGETS MorseCannon RUNTIME DESTINATION bin)
