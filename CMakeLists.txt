cmake_minimum_required(VERSION 3.12)
project(numericalSimulationsGivenField)

set(CMAKE_CXX_STANDARD 11)

add_executable(numericalSimulationsGivenField main.cpp Simulations.cpp Simulations.h Test.cpp Test.h)