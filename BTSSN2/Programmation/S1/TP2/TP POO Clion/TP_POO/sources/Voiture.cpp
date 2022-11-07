//
// Created by Yanis on 20/10/2022.
//

#include "../headers/Voiture.h"
#include <iostream>
#include <cstring>

using namespace std ;

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
    if (pclim == "oui")
    {
        alaClim = true ;
    }
    else if (pclim == "non")
    {
        alaClim = false ;
    }
    else
    {
        setAlaClim() ;
    }
}