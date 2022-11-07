//
// Created by Yanis on 20/10/2022.
//

#ifndef TP_POO_VEHICULE_H
#define TP_POO_VEHICULE_H


#include <iostream>
#include <cstring>
#include "Scooter.h"
#include "Camion.h"
#include "Voiture.h"

using namespace std ;

class Vehicule
{

protected :
    string Marque ;
    string Couleur ;
    int Vitesse ;

public:
    Vehicule();
    Vehicule(string pMarque, string pCouleur, int pVitesse);
    Vehicule(const Vehicule &);
    ~Vehicule();
    void seDeplacer();
    void setVitesse(int pVitesse);
    int getVitesse();
    void setCouleur(string pCouleur);
    string getCouleur();
    void setMarque(string pMarque);
    string getMarque();
};



#endif //TP_POO_VEHICULE_H