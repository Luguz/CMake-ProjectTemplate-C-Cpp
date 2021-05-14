cmake_minimum_required(VERSION 3.14)

#
#   TODO add description
#
#

# ============== GENERAL PROJECT SETTINGS =========================================================
project(XXX VERSION 0.0.1 LANGUAGES CXX)

#set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED)

# ============== GLOBAL COMPILATION OPTIONS =======================================================
#set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)

# ============== CMAKE MODULES ====================================================================
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

#include(${CMAKE_MODULE_PATH}/module_clang_tidy.cmake)

# ============== EXTERNAL/VENDOR SOURCES ==========================================================
include(${CMAKE_MODULE_PATH}/func_fetch.cmake)    # FetchDependency(name, git_url, git_tag)
include(FetchContent)

FetchDependency(googletest https://github.com/google/googletest.git release-1.10.0)

# ============== PROJECT TARGETS ==================================================================

# Libraries
add_subdirectory(libs/alib)         # Target: alib

# Executables
add_subdirectory(exe/SomeExe)       # Target: SomeExe

