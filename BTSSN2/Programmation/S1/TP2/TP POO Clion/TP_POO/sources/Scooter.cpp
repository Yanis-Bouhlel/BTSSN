//
// Created by Yanis on 20/10/2022.
//

#include "../headers/Scooter.h"
#include <iostream>
#include <cstring>

using namespace std;

Scooter::Scooter(string pMarque, string pCouleur, int pVitesse)
{
    this->Marque = pMarque ;
    this->Couleur = pCouleur;
    this->Vitesse = pVitesse ;
}

Scooter::Scooter(Scooter &scooter)
{
    this->Marque = scooter.Marque;
    this->Couleur = scooter.Couleur;
    this->Vitesse = scooter.Vitesse ;
}

void Scooter::getCylindree()
{
    cout << cylindree << endl ;
}

void Scooter::setCylindree(int pCylindree)
{

    cylindree = pCylindree ;

}