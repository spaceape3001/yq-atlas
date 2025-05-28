################################################################################
##
##  YOUR QUILL
##
################################################################################

project(atlas)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} 
PUBLIC 
    yq_atlas 
    yq_atlasVk
    yq_tachyon
)
