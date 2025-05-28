################################################################################
##
##  YOUR QUILL
##
################################################################################

project(atlasQt)

find_package(Qt6 COMPONENTS Core Gui Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} 
PUBLIC 
    yq_atlas 
    yq_atlasQt
    yq_gluon
)
