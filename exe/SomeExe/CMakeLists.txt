#
#   TODO add description
#
#

set(TARGET_NAME SomeExe)
project(${TARGET_NAME})

# ============== PROJECT BUILD RESTRICTIONS =======================================================

# Require out-of-source builds
file(TO_CMAKE_PATH "${PROJECT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
if(EXISTS "${LOC_PATH}")
    message(FATAL_ERROR "You cannot build in a source directory!")
endif()

# ====== SOURCES ==================================================================================
set(TARGET_SOURCES src/main.cpp)

# ====== DEPENDENCIES =============================================================================


# ====== TARGET ===================================================================================

add_executable(${TARGET_NAME} ${TARGET_SOURCES})
set_target_properties(${TARGET_NAME} PROPERTIES LINKER_LANGUAGE CXX)

# link libs with MainExe
target_link_libraries(${TARGET_NAME}
        PRIVATE
        alib
)

# ====== TESTS ====================================================================================

if(BUILD_TESTS)
    set(TARGET_TEST_NAME "${TARGET_NAME}Tests")
    enable_testing()

    add_executable(${TARGET_TEST_NAME}
            test/main_test.cpp
    )

    target_link_libraries(${TARGET_TEST_NAME}
            PRIVATE
            gtest_main
            gtest
    )
endif(BUILD_TESTS)