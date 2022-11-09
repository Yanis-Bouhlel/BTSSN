cmake_minimum_required(VERSION 3.23)
project(poo)

set(CMAKE_CXX_STANDARD 14)

add_executable(poo main.cpp class/Client.cpp class/Client.h class/Article.cpp class/Article.h class/Commande.cpp class/Commande.h class/Ligne.cpp class/Ligne.h)
