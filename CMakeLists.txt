# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.19)
project(LabTraining)

set(CMAKE_CXX_STANDARD 20)

include_directories(ForTeacher)
include_directories(ForTeacher/Marks)

# Add tasks subprojects


#add_executable(LabTraining PartI/C++/Lesson_13/hw_lettter_frequncy.cpp)
add_executable(ForTeacher  ForTeacher/SplitAddres.cpp)
add_executable(Composition ForTeacher/Composition.cpp)
#add_executable(Marks ForTeacher/Marks/marks.cpp)
add_executable(LabTraining   PartI/C++/Lesson_14/class1.cpp)
