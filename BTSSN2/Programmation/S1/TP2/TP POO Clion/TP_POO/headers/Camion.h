//
// Created by Yanis on 20/10/2022.
//

#ifndef TP_POO_CAMION_H
#define TP_POO_CAMION_H

#include <iostream>
#include "cstring"
#include "Vehicule.h"

using namespace std ;

class Camion : public Vehicule
{
private:
    int poidCharge;
public :
    Camion(string pMarque,string pCouleur, int pVitesse) ;
    Camion(const Camion &camion);
    void setPoidsCharge();
    void getPoidsCharge();
};

#endif //TP_POO_CAMION_H
