cmake_minimum_required(VERSION 3.11)

project(MyProject)

set(CMAKE_CXX_FLAGS_DUBUG_INIT "-Wall")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#-----------------------------------------------------------------------------------------------------

set(SOURCES main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})