cmake_minimum_required(VERSION 3.16)
project(fireflies_game LANGUAGES C CXX)

# X11
find_package(X11 REQUIRED)
if (${X11_FOUND})
    include_directories(${X11_INCLUDE_DIR})
    link_libraries(${X11_LIBRARIES})
endif()

# Libraries
add_subdirectory(core)
add_subdirectory(x11_helpers)
