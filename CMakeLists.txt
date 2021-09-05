cmake_minimum_required(VERSION 3.18)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

project(
  SpaceSurvivor
  VERSION
  1.0
  DESCRIPTION
  "Awesome 2D VideoGame"
  LANGUAGES
  CXX
)

find_package(SFML 2 REQUIRED network audio graphics window system)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(spacesurvivor ${SRC_FILES})
target_include_directories(spacesurvivor PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${SFML_INCLUDE_DIR})
target_link_libraries(spacesurvivor PUBLIC ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
