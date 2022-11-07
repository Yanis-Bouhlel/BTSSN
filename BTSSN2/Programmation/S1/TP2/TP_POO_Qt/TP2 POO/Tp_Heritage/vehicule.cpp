#include "vehicule.h"
#include <iostream>
#include <cstring>

using namespace std ;

Vehicule::Vehicule()
{
    this->Vitesse = 0;
    this->Couleur = "null" ;
    this->Marque = "null" ;
}

Vehicule::Vehicule(string pMarque, string pCouleur, int pVitesse)
{
    this->Vitesse = pVitesse ;
    this->Couleur = pCouleur ;
    this->Marque = pMarque ;
}

Vehicule::Vehicule(const Vehicule &Vehicule)
{
    this->Vitesse = Vehicule.Vitesse ;
    this->Couleur = Vehicule.Couleur ;
    this->Marque = Vehicule.Marque ;
}

Vehicule::~Vehicule()
{

}

void Vehicule::setMarque(string pMarque)
{
    Marque = pMarque ;
}

string Vehicule::getMarque()
{
    return Marque ;
}

void Vehicule::setVitesse(int pVitesse)
{
    Vitesse = pVitesse ;
}

int Vehicule::getVitesse()
{
    return Vitesse ;
}

void Vehicule::setCouleur(string pCouleur)
{
    Couleur = pCouleur ;
}

string Vehicule::getCouleur()
{
    return Couleur ;
}

void Vehicule::seDeplacer()
{

}
