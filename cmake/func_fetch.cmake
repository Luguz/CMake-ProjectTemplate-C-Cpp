#
#
# TODO
#
#

function(FetchDependency fetch_name git_url git_tag)
    MESSAGE(STATUS ">>> Get ${fetch_name} - ${git_tag} from ${git_url} <<<")

    FetchContent_Declare(
            ${fetch_name}
            GIT_REPOSITORY ${git_url}
            GIT_TAG        ${git_tag}
    )

    FetchContent_GetProperties(${fetch_name})
    if(NOT ${fetch_name}_POPULATED)
        FetchContent_Populate(${fetch_name})
        add_subdirectory(${${fetch_name}_SOURCE_DIR} ${${fetch_name}_BINARY_DIR})
    endif()
endfunction()