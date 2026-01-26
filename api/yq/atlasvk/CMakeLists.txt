################################################################################
##
##  YOUR QUILL
##
################################################################################

project(yq_atlasvk)

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
yq_vklib(${PROJECT_NAME})
LinkTest(${PROJECT_NAME})
