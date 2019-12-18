set(core_SRCS
    include/core/color.h
    include/core/hash.h

    src/color.cpp
    src/hash.cpp
)

add_library(core SHARED ${core_SRCS})
target_include_directories(core
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)
