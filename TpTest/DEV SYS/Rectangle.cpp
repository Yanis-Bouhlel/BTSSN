//
// Created by bouhlel_y2 on 11/23/2022.
//

#include "headers/Rectangle.h"
#include <iostream>
using namespace std ;

Rectangle::Rectangle() {
    this->largeur = 0;
    this->longueur = 0;
}

double Rectangle::surface() {
    return this->longueur * this->largeur ;
}

double Rectangle::perimetre() {
    return (this->longueur + this->largeur) * 2 ;
}

Rectangle::Rectangle(double larg, double lng) {
    this->largeur = larg ;
    this->longueur = lng ;
}

void Rectangle::affichage() {
    cout << "La longueur est de : " << getLongueur() << "." << endl ;
    cout << "La largeur est de : " << getLargeur() << "." << endl ;
    cout << "Le perimetre est de : " << perimetre() << "." << endl ;
    cout << "la surface est de : " << surface() << "." << endl ;
}

void Rectangle::setLongueur(double lng) {
    this->longueur = lng ;
}

void Rectangle::setLargeur(double larg) {
    this->largeur = larg ;
}

double Rectangle::getLongueur() {
    return this->longueur;
}

double Rectangle::getLargeur() {
    return this->largeur;
}
