[![Build Status](https://travis-ci.org/cucumber/gherkin-c.svg?branch=master)](https://travis-ci.org/cucumber/gherkin-c)

<h2>Build instruction:</h2>

mkdir build<br>
cd build<br>
cmake ..<br>
cmake --build . --target install<br>

![](https://raw.githubusercontent.com/Pwera/gherkin-c/master/gherkin.gif)

You can use this library in your project like this<br>
cmake_minimum_required(VERSION 3.0) <br>
project(gherkincsample)<br>
list(APPEND CMAKE_PREFIX_PATH "INSTALLATION_DIRECTORY")<br>
set(CMAKE_CXX_STANDARD 14)<br>
find_package(gherkin REQUIRED)<br>
add_executable(gherkincsample main.cpp)<br>
target_link_libraries(gherkincsample gherkin::gherkin)<br>


[The docs are here](https://docs.cucumber.io/).
