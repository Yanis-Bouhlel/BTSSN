//
// Created by bouhlel_y2 on 11/23/2022.
//

#include "headers/Carre.h"
#include <iostream>
using namespace std ;

Carre::Carre(double cote) {
    longueur = cote ;
    largeur = cote ;
}

double Carre::perimetre() {
    return longueur * 4 ;
;
}

void Carre::affichage() {
    cout << "La longueur est de : " << longueur << "." << endl ;
    cout << "La largeur est de : " <<  largeur << "." << endl ;
    cout << "Le perimetre est de : " << perimetre() << "." << endl ;
    cout << "la surface est de : " << surface() << "." << endl ;
}
