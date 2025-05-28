################################################################################
##
##  YOUR QUILL
##
################################################################################

project(yq_atlasVk)

add_library(${PROJECT_NAME} SHARED
    atlasVk.cpp
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        yq_atlas
        yq_gluon
)

LinkTest(${PROJECT_NAME})
