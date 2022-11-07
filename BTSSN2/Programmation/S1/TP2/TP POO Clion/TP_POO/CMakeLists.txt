cmake_minimum_required(VERSION 3.22)
project(TP_POO)

set(CMAKE_CXX_STANDARD 14)

add_executable(TP_POO sources/main.cpp sources/Vehicule.cpp headers/Vehicule.h sources/Voiture.cpp headers/Voiture.h sources/Scooter.cpp headers/Scooter.h sources/Camion.cpp headers/Camion.h)
