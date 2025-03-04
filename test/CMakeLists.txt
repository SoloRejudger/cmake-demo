cmake_minimum_required(VERSION 3.10)
project(MyApp)

# 自动搜索库文件
find_library(MATH_FUNCTIONS_LIB MathFunctions REQUIRED)  # 自动搜索系统路径
find_path(MATH_FUNCTIONS_INCLUDE MathFunctions.h REQUIRED)  # 自动搜索头文件

add_executable(MyApp main.cpp)
target_include_directories(MyApp PRIVATE ${MATH_FUNCTIONS_INCLUDE})
target_link_libraries(MyApp PRIVATE ${MATH_FUNCTIONS_LIB})