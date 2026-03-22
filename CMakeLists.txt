cmake_minimum_required(VERSION 3.15)
project(transight)

find_package(SQLite3 REQUIRED)
find_package(fmt REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} SQLite3::SQLite3 fmt::fmt)