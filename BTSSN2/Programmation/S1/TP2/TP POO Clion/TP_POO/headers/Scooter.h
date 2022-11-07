//
// Created by Yanis on 20/10/2022.
//

#ifndef TP_POO_SCOOTER_H
#define TP_POO_SCOOTER_H

#include <iostream>
#include "cstring"
#include "Vehicule.h"

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

#endif //TP_POO_SCOOTER_H
