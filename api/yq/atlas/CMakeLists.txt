################################################################################
##
##  YOUR QUILL
##
################################################################################

project(yq_atlas)

add_library(${PROJECT_NAME} SHARED
    atlas.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
    ${ATLAS_API_DIR}
)

target_link_libraries(${PROJECT_NAME} 
PUBLIC 
    yq_core
)

LinkTest(${PROJECT_NAME})
