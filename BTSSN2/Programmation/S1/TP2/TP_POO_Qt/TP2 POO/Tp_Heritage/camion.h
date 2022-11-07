#ifndef CAMION_H
#define CAMION_H

#include "vehicule.h"
#include <iostream>
#include "cstring"

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

#endif // CAMION_H
