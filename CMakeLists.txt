cmake_minimum_required(VERSION 3.14)
MACRO(DBG_MSG _MSG)
    MESSAGE(STATUS "${CMAKE_CURRENT_LIST_FILE}(${CMAKE_CURRENT_LIST_LINE}): ${_MSG}")
ENDMACRO(DBG_MSG)
project(fltk_clion)

DBG_MSG("Make system : ${CMAKE_SYSTEM}")
DBG_MSG("is WIN32 : ${WIN32}")
DBG_MSG("is APPLE : ${APPLE}")
DBG_MSG("is UNIX : ${UNIX}")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SRCS main.cpp SimpleWindow.cpp SimpleWindow.h)
#set(SRCS main.cpp )

if (${APPLE})
    set(FLTK_DIR /usr/local/Cellar/fltk/1.3.5)
    include_directories(${FLTK_DIR}/include)
    link_directories(${FLTK_DIR}/lib)
    set(WIN_LIBS )
endif()
if (${WIN32})
    include_directories(C:\\Users\\chris.hanagan\\appDev\\fltk-1.3.4-1-win32\\include)
    link_directories(C:\\Users\\chris.hanagan\\appDev\\fltk\\cmake-build-debug\\lib)
    set(WIN_LIBS comctl32 ws2_32 kernel32 user32 gdi32 winspool shell32 ole32 oleaut32 uuid comdlg32 advapi32)
endif()

    DBG_MSG("found CMAKE_CXX_FLAGS : ${CMAKE_CXX_FLAGS}")

add_executable(fltk_clion ${SRCS} )

target_link_libraries(fltk_clion fltk ${WIN_LIBS})