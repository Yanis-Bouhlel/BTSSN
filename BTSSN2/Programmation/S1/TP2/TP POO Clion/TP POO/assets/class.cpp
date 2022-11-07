//
// Created by Yanis on 12/10/2022.
//

#include "class.h"
#include <iostream>
#include <cstring>

using namespace std;

void Vehicule::getCouleur()
{
    cout << Couleur << endl ;
}

void Vehicule::getMarque()
{
    cout << Marque<< endl ;
}

void Vehicule::getVitesse()
{
    cout << Vitesse << endl ;
}

void Vehicule::seDeplacer()
{


    
}

void Vehicule::setCouleur(string pCouleur)
{
    Couleur = pCouleur ;
}

void Vehicule::setMarque(string pMarque)
{
    Marque = pMarque ;
}

void Vehicule::setVitesse(int pVitesse)
{
    Vitesse = pVitesse ;
}

Vehicule::Vehicule(string pMarque, string pCouleur, int pVitesse)
{
    Marque = pMarque ;
    Couleur = pCouleur ;
    Vitesse = pVitesse ;
}
Vehicule::Vehicule(const Vehicule &Vehicule)
{
    Marque = Vehicule.Marque ;
    Couleur = Vehicule.Couleur;
    Vitesse = Vehicule.Vitesse ;
}

Voiture::Voiture(string pMarque,string pCouleur, int pVitesse)
{
    Marque = pMarque ;
    Couleur = pCouleur;
    Vitesse = pVitesse ;
}

Voiture::Voiture(const Voiture &voit)
{
    Marque = voit.Marque;
    Couleur = voit.Couleur;
    Vitesse = voit.Vitesse;
}

Camion::Camion(string pMarque, string pCouleur, int pVitesse)
{
    Marque = pMarque ;
    Couleur = pCouleur;
    Vitesse = pVitesse ;
}
Camion::Camion(const Camion &camion)
{
    Marque = camion.Marque;
    Couleur = camion.Couleur;
    Vitesse = camion.Vitesse;
}
Scooter::Scooter(string pMarque, string pCouleur, int pVitesse)
{
    Marque = pMarque ;
    Couleur = pCouleur;
    Vitesse = pVitesse ;
}

Scooter::Scooter(Scooter &scooter)
{
    Marque = scooter.Marque;
    Couleur = scooter.Couleur;
    Vitesse = scooter.Vitesse ;
}

Vehicule::~Vehicule()
{
    cout << "Objet detruit ! \n" ;
}

void Voiture::getAlaClim()
{
    if (alaClim == true)
    {
        cout << "Cette voiture possede l'air conditionnee ! \n"  ;
    }
    else
    {
        cout << "Cette voiture ne possede pas l'air conditionnee ! \n" ;
    }

}

void Voiture::setAlaClim()
{
    string pclim ;
    cout << "Cette voiture possede-t-elle l'air conditionnee ? \n" ;
    cin >> pclim ;
    if (pclim == "true")
    {
        alaClim = true ;
    }
    else if (pclim == "false")
    {
        alaClim = false ;
    }
    else
    {
        setAlaClim() ;
    }

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

void Scooter::getCylindree()
{
    cout << cylindree << endl ;
}

void Scooter::setCylindree(int pCylindree)
{

    cylindree = pCylindree ;

}