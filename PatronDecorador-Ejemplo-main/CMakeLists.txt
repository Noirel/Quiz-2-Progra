cmake_minimum_required(VERSION 4.1)
project(PatronDecorador_Ejemplo_main)

set(CMAKE_CXX_STANDARD 14)

include_directories(PatronDecorador-Ejemplo-main/PatronDecorator)

add_executable(PatronDecorador_Ejemplo_main
        PatronDecorador-Ejemplo-main/PatronDecorator/DecoradorPizza.cpp
        PatronDecorador-Ejemplo-main/PatronDecorator/DecoradorPizza.h
        PatronDecorador-Ejemplo-main/PatronDecorator/main.cpp
        PatronDecorador-Ejemplo-main/PatronDecorator/Peperoni.cpp
        PatronDecorador-Ejemplo-main/PatronDecorator/Peperoni.h
        PatronDecorador-Ejemplo-main/PatronDecorator/Pizza.h
        PatronDecorador-Ejemplo-main/PatronDecorator/Queso.cpp
        PatronDecorador-Ejemplo-main/PatronDecorator/Queso.h
        PatronDecorador-Ejemplo-main/PatronDecorator/Suprema.cpp
        PatronDecorador-Ejemplo-main/PatronDecorator/Suprema.h
        PatronDecorador-Ejemplo-main/PatronDecorator/Calzone.h
        PatronDecorador-Ejemplo-main/PatronDecorator/CalzoneSimple.cpp
        PatronDecorador-Ejemplo-main/PatronDecorator/CalzoneSimple.h
        PatronDecorador-Ejemplo-main/PatronDecorator/SalamiQuesoTomate.cpp
        PatronDecorador-Ejemplo-main/PatronDecorator/SalamiQuesoTomate.h
        PatronDecorador-Ejemplo-main/PatronDecorator/DecoradorCalzone.cpp
        PatronDecorador-Ejemplo-main/PatronDecorator/DecoradorCalzone.h
        PatronDecorador-Ejemplo-main/PatronDecorator/TocinoHongos.cpp
        PatronDecorador-Ejemplo-main/PatronDecorator/TocinoHongos.h)
