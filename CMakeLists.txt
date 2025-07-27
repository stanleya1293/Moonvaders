cmake_minimum_required(VERSION 4.0)

project(Moonvaders)

add_executable(moonvaders src/Moonvaders.cpp src/Window.cpp)

add_subdirectory(./lib/glfw-3.4)
add_subdirectory(./lib/glad)
target_link_libraries(moonvaders PUBLIC glfw)
target_link_libraries(moonvaders PUBLIC glad)
