# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.19)
project(Gtesting)

set(CMAKE_CXX_STANDARD 20)
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

include_directories(OlympicTraining)
include_directories(ForTeacher)
include_directories(ForTeacher/Marks)


# Add tasks subprojects

#
##add_executable(LabTraining PartI/C++/Lesson_13/hw_lettter_frequncy.cpp)
##add_executable(ForTeacher  ForTeacher/struct_print.cpp)
##add_executable(Composition ForTeacher/Composition.cpp)
##add_executable(Marks ForTeacher/Marks/marks.cpp)
#add_executable(Elevator   PartI/C++/Lesson_15/Elevator.cpp)
##add_executable(LabTraining    PartI/C++/Lesson_15/Dispatcher.cpp)
#add_executable(Tests   ForTeacher/O_Task3.cpp)
#
##add_executable(Olympic ForTeacher/Task2.cpp)

set(SOURCE_FILES PartI/C++/Lesson_15/Elevator.cpp)

add_executable(Gtesting ${SOURCE_FILES})
target_link_libraries(Gtesting gtest gtest_main)
