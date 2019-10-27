cmake_minimum_required(VERSION 3.14)
MACRO(DBG_MSG _MSG)
    MESSAGE(STATUS "${CMAKE_CURRENT_LIST_FILE}(${CMAKE_CURRENT_LIST_LINE}): ${_MSG}")
ENDMACRO(DBG_MSG)
project(fltk_clion)

set(CMAKE_CXX_STANDARD 14)

set(FLTK_DIR /usr/local/Cellar/fltk/1.3.5)
set(SRCS main.cpp)
#find_package(FLTK REQUIRED )

include_directories(${FLTK_DIR}/include)
DBG_MSG("found FLTK_DIR : ${FLTK_DIR}")
link_directories(${FLTK_DIR}/lib)

add_executable(fltk_clion ${SRCS})

target_link_libraries(fltk_clion fltk)