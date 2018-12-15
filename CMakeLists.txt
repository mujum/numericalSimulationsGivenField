cmake_minimum_required(VERSION 3.12)
project(numericalSimulationsGivenField)

SET(CMAKE_CXX_COMPILER /home/ladislaus/workspace/bin/hdf5-1.10.4-linux-centos7-x86_64-gcc485-shared/bin/h5c++)

#set(HDF5_DIR, '/home/ladislaus/workspace/bin/hdf5-1.10.4-linux-centos7-x86_64-gcc485-shared/lib')

include_directories(/home/ladislaus/workspace/bin/hdf5-1.10.4-linux-centos7-x86_64-gcc485-shared/include)
include_directories(/home/ladislaus/workspace/bin/hdf5-1.10.4-linux-centos7-x86_64-gcc485-shared/lib)
#FIND_PACKAGE(HDF5 COMPONENTS C HL NO_MODULE REQUIRED static)
set(CMAKE_CXX_STANDARD 11)

add_executable(numericalSimulationsGivenField main.cpp Simulations.cpp Simulations.h Test.cpp Test.h)
