cmake_minimum_required(VERSION 3.21)
project(TestingGit)

set(CMAKE_CXX_STANDARD 20)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(TestingGit src/main.cpp)


if(${CMAKE_SYSTEM_NAME} MATCHES Darwin)
    target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/lib/libglfw.3.3.dylib)
else()
    target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/lib/glfw3.dll)
endif()