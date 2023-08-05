cmake_minimum_required(VERSION 3.0)   # Minimum required CMake version

project(BMI_Calculator C)   # Project name

# Add the C code to the project and create an executable
add_executable(BMI_Calculator main.c)

# Set the build type to Release
set(CMAKE_BUILD_TYPE Release)
