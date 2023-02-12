cmake_minimum_required(VERSION 3.5)

# Set the project name
project (project_loger)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/loger.cpp
    src/main.cpp
)

# Add an executable with the above sources
add_executable(project_loger ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(project_loger
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)
