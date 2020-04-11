#
#   TODO add description
#
#

MESSAGE(STATUS ">>> Building Target: MainExe <<<")


# add MainExe Executable
FILE(GLOB_RECURSE SOURCES_TARGET_MainExe LIST_DIRECTORIES true src/*.hpp src/*.cpp)
ADD_EXECUTABLE(MainExe ${SOURCES_TARGET_MainExe})

# link libs with MainExe
TARGET_LINK_LIBRARIES(
        MainExe

        PRIVATE
        SomeLib
)

#
#    TODO add description
#
#

IF(0)
IF(BUILD_TESTS)
    ENABLE_TESTING()

    MESSAGE(STATUS ">>> Building Target-Test: MainExeTests <<<")
    FILE(GLOB_RECURSE SOURCES_TARGET_MainExe LIST_DIRECTORIES true test/*.hpp test/*.cpp)

    ADD_EXECUTABLE(
            MainExeTestsExe

            test/main_test.cpp
    )

    TARGET_LINK_LIBRARIES(
            MainExeTestsExe

            PRIVATE
            #gtest_main
            #gtest
    )

    ADD_TEST(NAME MainExeTests COMMAND MainExeTestsExe)
ENDIF(BUILD_TESTS)
ENDIF()