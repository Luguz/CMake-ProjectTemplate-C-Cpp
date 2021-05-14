#
#   TODO add description
#
#

set(TARGET_NAME alib)
project(${TARGET_NAME})

# ============== PROJECT BUILD RESTRICTIONS =======================================================

# Require out-of-source builds
file(TO_CMAKE_PATH "${PROJECT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
if(EXISTS "${LOC_PATH}")
    message(FATAL_ERROR "You cannot build in a source directory!")
endif()

# ====== INCLUDES =================================================================================
set(TARGET_INCLUDES
        include/alib/alib.hpp)

# ====== DEPENDENCIES =============================================================================


# ====== TARGET ===================================================================================

set(TARGET_SOURCES
        src/important/SomeImportantClass.cpp)

add_library(${TARGET_NAME} STATIC
        ${TARGET_INCLUDES} ${TARGET_SOURCES})

target_include_directories(${TARGET_NAME}
        PUBLIC include
        PRIVATE)

# ====== TESTS ====================================================================================

if(BUILD_TESTS)


endif()

