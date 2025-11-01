################################################################################
##
##  YOUR QUILL
##
################################################################################

project(yq_atlasVk)

add_library(${PROJECT_NAME} SHARED
    atlasVk.cpp
    GeoBody.cpp
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        yq_atlas
        yq_tachyon
)

vulqan_library(${PROJECT_NAME})
LinkTest(${PROJECT_NAME})
