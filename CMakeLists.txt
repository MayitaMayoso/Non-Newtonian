cmake_minimum_required(VERSION 3.14)
project(Non-Newtonian)

# Game project 
add_executable(${PROJECT_NAME})

add_subdirectory(Game)

# raylib dependancy
find_package(raylib QUIET)
if (NOT raylib_FOUND)
	include(FetchContent)
	FetchContent_Declare(
			raylib
			GIT_REPOSITORY https://github.com/raysan5/raylib.git
			GIT_TAG 5.0
			GIT_SHALLOW 1
	)
	FetchContent_MakeAvailable(raylib)
endif ()

target_link_libraries(${PROJECT_NAME} PUBLIC raylib)

# Copy the resources folder into the build directory
set(OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/Resources")

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/Resources
    ${OUTPUT_DIRECTORY}
)