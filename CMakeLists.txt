cmake_minimum_required(VERSION 3.23)
project(AERSP_424)
set(CMAKE_CXX_STANDARD 20)

add_library(MyLibrary Problem2.cpp Plane.cpp Plane.h)
# ^ library includes the contatiner (from Question 2) and the Plane class (from Question 3) 

add_executable(Q1 Problem1.cpp fuelChange.cpp fuelChange.h)
add_executable(Q4 Problem4.cpp)

target_link_libraries(Q4 PRIVATE MyLibrary) #Allows Problem4.cpp to use the Plane class