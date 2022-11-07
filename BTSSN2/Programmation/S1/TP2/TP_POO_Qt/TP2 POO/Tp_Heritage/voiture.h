#ifndef VOITURE_H
#define VOITURE_H

#include "vehicule.h"
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


#endif // VOITURE_H
