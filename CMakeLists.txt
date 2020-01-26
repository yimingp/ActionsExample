
# For each of the command line argument INPUT files, list them here in the order you
# want them to appear after the name of the executable
# For example, if you would execute   ./proj.exe input01.txt
# then put input01.txt as the value for file01
set (file01 "input01.txt")
set (file02 "")
set (file03 "")


############################################
### Students: Don't modify anything below
############################################
cmake_minimum_required(VERSION 3.10)

# set an environment variable EXE_NAME
set(ENV{EXE_NAME} sampleActionsOutput)
set(ENV{TEST_EXE} testerTester)

# Copy data files to build dir
foreach(file IN LISTS file01 file02 file03)
    configure_file(${file} ${file} COPYONLY)
endforeach()

project(ActionsExample)

set(CMAKE_CXX_STANDARD 17)

add_executable($ENV{EXE_NAME} main.cpp)