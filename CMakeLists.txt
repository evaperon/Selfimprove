cmake_minimum_required(VERSION 3.9)
project(selfimprove)

set(CMAKE_CXX_STANDARD 11)

set(Boost_INCLUDE_DIR c:/mingw/include/)
find_package(Boost COMPONENTS system filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_executable(main main.cpp distributions.h distributions.cpp vList.cpp vList.h dTree.cpp dTree.h sampling.cpp sampling.h productDistribution.cpp productDistribution.h)