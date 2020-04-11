#
#   TODO add description
#
#

# ============== GENERAL PROJECT SETTINGS ==============================================================================
CMAKE_MINIMUM_REQUIRED(VERSION 3.14)
PROJECT(BaseCProject VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED)

# ============== GLOBAL COMPILATION OPTIONS ============================================================================
SET(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)

SET(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/build)
SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/exe)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/lib)

# ============== CMAKE MODULES =========================================================================================
SET(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

#INCLUDE(${CMAKE_MODULE_PATH}/module_clang_tidy.cmake)

# ============== EXTERNAL/VENDOR SOURCES ===============================================================================
# Targets:
#   - gtest, gtest_main           (IF -DBUILD_TESTS=ON)

#ADD_SUBDIRECTORY(vendor)

# ============== PROJECT TARGETS =======================================================================================

# Libraries
ADD_SUBDIRECTORY(libs/SomeLib)                                              # Target: SomeLib

# Executables
ADD_SUBDIRECTORY(exe/MainExe)                                               # Target: MainExe

