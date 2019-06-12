cmake_minimum_required(VERSION 2.8)
project(simple-mqtt-client)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SRC_CXX_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE SRC_HEADERS ${PROJECT_SOURCE_DIR}/src/*.h)

add_executable(${PROJECT_NAME} ${SRC_C_FILES} ${SRC_CXX_FILES} ${SRC_HEADERS})
target_link_libraries(${PROJECT_NAME} mosquittopp)