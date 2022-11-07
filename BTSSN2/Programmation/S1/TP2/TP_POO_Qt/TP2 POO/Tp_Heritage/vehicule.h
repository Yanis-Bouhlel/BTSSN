#ifndef VEHICULE_H
#define VEHICULE_H


#include <iostream>
#include <cstring>




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

#endif // VEHICULE_H
