# Set the minimum required version for CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(VectorDefense VERSION 0.1.0)

# Set the C++ standard (e.g., C++17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the SFML library
# This looks for the SFMLConfig.cmake file
# You will need to provide the path to the SFML installation
# E.g., -DSFML_DIR="C:/path/to/sfml"
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
set_directory_properties(PROPERTIES
	VS_STARTUP_PROJECT VectorDefense
)

# Add the 'src' directory for our source files
add_subdirectory(src)