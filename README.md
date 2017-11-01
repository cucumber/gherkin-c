[![Build Status](https://travis-ci.org/cucumber/gherkin-c.svg?branch=master)](https://travis-ci.org/cucumber/gherkin-c)

Build instruction:

mkdir build

cd build

cmake ..

cmake --build . --target install

You ca use this library in your project like this

cmake_minimum_required(VERSION 3.0)
project(gherkincsample)
list(APPEND CMAKE_PREFIX_PATH "INSTALLATION_DIRECTORY")
set(CMAKE_CXX_STANDARD 14)
find_package(gherkin REQUIRED)
add_executable(gherkincsample main.cpp)
target_link_libraries(gherkincsample gherkin::gherkin)


[The docs are here](http://docs.cucumber.io/gherkin/).
