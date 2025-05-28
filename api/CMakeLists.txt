################################################################################
##
##  YOUR QUILL
##
################################################################################

set(ATLAS_API_DIR ${CMAKE_CURRENT_LIST_DIR})

add_subdirectory(atlas)
if(Build_Qt6)
    add_subdirectory(atlasQt)
endif()
if(Build_Vulkan)
    add_subdirectory(atlasVk)
endif()

