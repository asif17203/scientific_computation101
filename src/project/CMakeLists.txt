cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set the path to PETSc
set(PETSc_DIR "/home/asif/petsc/petsc-install/share/cmake/petsc")

# Find PETSc
find_package(PETSc REQUIRED)

# Add your executable
add_executable(my_program src/my_program.cpp)

# Link PETSc libraries
target_link_libraries(my_program ${PETSc_LIBRARIES})

# Include PETSc directories
target_include_directories(my_program PRIVATE ${PETSc_INCLUDE_DIRS})

# Ensure C++11 standard
set_target_properties(my_program PROPERTIES CXX_STANDARD 11)
