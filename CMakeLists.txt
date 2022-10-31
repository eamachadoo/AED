cmake_minimum_required(VERSION 3.23)
project(AED)

set(CMAKE_CXX_STANDARD 14)

include_directories(aed-project-1)

add_executable(AED
        aed-project-1/Class.cpp
        aed-project-1/Class.h
        aed-project-1/main.cpp
        aed-project-1/UC.cpp
        aed-project-1/UC.h
        aed-project-1/Turma.cpp
        aed-project-1/Turma.h
        aed-project-1/Timetable.cpp
        aed-project-1/Timetable.h)
