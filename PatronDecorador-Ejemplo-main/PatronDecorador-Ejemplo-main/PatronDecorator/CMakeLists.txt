cmake_minimum_required(VERSION 4.1)
project(PatronDecorator)

set(CMAKE_CXX_STANDARD 20)

add_executable(PatronDecorator main.cpp
        Pizza.h
        Queso.cpp
        Queso.h
        Suprema.cpp
        Suprema.h
        DecoradorPizza.cpp
        DecoradorPizza.h
        Peperoni.cpp
        Peperoni.h
        Calzone.h
        CalzoneSimple.cpp
        CalzoneSimple.h
        DecoradorCalzone.cpp
        DecoradorCalzone.h
        TocinoHongos.cpp
        TocinoHongos.h
        SalamiQuesoTomate.cpp
        SalamiQuesoTomate.h)
