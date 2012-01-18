
###########################################################
#   Top level CMakeLists.txt file for the IS4S libJAUS 
#   Project. This builds all of the supported services
###########################################################


CMAKE_MINIMUM_REQUIRED(VERSION 2.6 FATAL_ERROR)

# Use clang if available
IF(EXISTS /usr/bin/clang++)
  set(CMAKE_CXX_COMPILER /usr/bin/clang++)
ENDIF(EXISTS /usr/bin/clang++)

PROJECT(libJAUS)

#############################################################
# Set up include directories that are needed by all projects.
#############################################################
INCLUDE_DIRECTORIES(include/jts_common)
#LINK_DIRECTORIES( ${MOOS_LIBRARY_DIRS} )

#############################################################
# BUILD....
#############################################################
SUBDIRS(src)

