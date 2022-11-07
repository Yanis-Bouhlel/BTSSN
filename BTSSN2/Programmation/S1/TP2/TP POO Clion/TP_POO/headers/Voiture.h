//
// Created by Yanis on 20/10/2022.
//

#ifndef TP_POO_VOITURE_H
#define TP_POO_VOITURE_H
#include "Vehicule.h"

#include <iostream>
#include "cstring"

using namespace std ;

class Voiture : public Vehicule
{
private:
    bool alaClim = false;
public :
    Voiture(string pMarque,string pCouleur, int pVitesse) ;
    Voiture(const Voiture &voit);
    void setAlaClim();
    void getAlaClim();
};


#endif //TP_POO_VOITURE_H
