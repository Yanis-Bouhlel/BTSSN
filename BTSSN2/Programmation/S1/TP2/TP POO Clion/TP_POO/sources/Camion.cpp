//
// Created by Yanis on 20/10/2022.
//

#include "../headers/Camion.h"
#include <iostream>
#include <cstring>

using namespace std;

Camion::Camion(string pMarque, string pCouleur, int pVitesse)
{
    this->Marque = pMarque ;
    this->Couleur = pCouleur;
    this->Vitesse = pVitesse ;
}
Camion::Camion(const Camion &camion)
{
    this-> Marque = camion.Marque;
    this->Couleur = camion.Couleur;
    this->Vitesse = camion.Vitesse;
}

void Camion::getPoidsCharge()
{
    cout << poidCharge ;
}

void Camion::setPoidsCharge()
{
    int wPoidsCharge ;
    cout << "Quel poid fais le vehicule \n" ;
    cin >> wPoidsCharge ;
    poidCharge = wPoidsCharge ;
}
