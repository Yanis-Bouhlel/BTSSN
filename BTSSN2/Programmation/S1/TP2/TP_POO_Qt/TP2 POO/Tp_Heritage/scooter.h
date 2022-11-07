#ifndef SCOOTER_H
#define SCOOTER_H

#include <iostream>
#include "cstring"
#include "vehicule.h"

using namespace std ;

class Scooter : public Vehicule
{
private :
    int cylindree;
public :
    Scooter(string pMarque,string pCouleur, int pVitesse);
    Scooter(Scooter &scooter);
    void setCylindree(int pCylindree);
    void getCylindree();
};


#endif // SCOOTER_H
