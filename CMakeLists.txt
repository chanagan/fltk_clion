cmake_minimum_required(VERSION 3.14)
project(fltk_clion)

set(CMAKE_CXX_STANDARD 14)

set(FLTK_DIR /usr/local/Cellar/fltk/1.3.5k)

find_package(FLTK REQUIRED )

include_directories(/usr/local/Cellar/fltk/1.3.5/include)
link_directories(/usr/local/Cellar/fltk/1.3.5/lib)

add_executable(fltk_clion main.cpp)

target_link_libraries(fltk_clion fltk)