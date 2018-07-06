cmake_minimum_required(VERSION 3.0)
project(cdff_types VERSION 1.0)

# These glob is annoying but necessary as we don't know in advance how many types are present
file(GLOB_RECURSE type_list_src
    "C/*.c"
)
file(GLOB_RECURSE type_list_headers
    "C/*.h"
)

add_library(${PROJECT_NAME} SHARED
    ${type_list_src}
)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${type_list_headers}")
set(HEADERS_INSTALL_DIR include/${PROJECT_NAME})
set(LIB_INSTALL_DIR lib)

install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    PUBLIC_HEADER DESTINATION ${HEADERS_INSTALL_DIR}
)
