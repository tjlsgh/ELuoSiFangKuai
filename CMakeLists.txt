cmake_minimum_required(VERSION 3.10)
project(CALC)
set(CMAKE_CXX_STANDARD 20)

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(app ${SRC_LIST})

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/bin)