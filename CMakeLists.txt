project(Python_CPP_TEST)
cmake_minimum_required(VERSION 3.24)

# add inlcude path
include_directories("C:/Python310/include")

# add lib path
link_directories("C:/Python310/libs")

# add executable
add_executable(${PROJECT_NAME} main.cpp)

# link lib
TARGET_LINK_LIBRARIES(${PROJECT_NAME} python310.lib)



# use the following command to configure the project
# cmake -S . -B build -G "Visual Studio 17 2022"

# use the following command to build the project
# cmake --build . build --config Release