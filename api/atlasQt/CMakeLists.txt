################################################################################
##
##  YOUR QUILL
##
################################################################################

project(yq_atlasQt)

find_package(Qt6 COMPONENTS Core Gui Widgets)
set(CMAKE_AUTOMOC ON)

add_library(${PROJECT_NAME} SHARED
    atlasQt.cpp
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        yq_atlas
        yq_gluon
)

LinkTest(${PROJECT_NAME})
