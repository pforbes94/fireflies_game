set(x11_helpers_SRCS
    include/x11_helpers/colors.h
    include/x11_helpers/x11_context.h include/x11_helpers/x11_context.hpp

    src/x11_context.cpp
)

add_library(x11_helpers SHARED ${x11_helpers_SRCS})
target_link_libraries(x11_helpers ${X11_LIBRARIES} core)
target_include_directories(x11_helpers
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)
