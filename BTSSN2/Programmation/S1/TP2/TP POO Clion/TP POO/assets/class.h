//
// Created by Yanis on 12/10/2022.
//

#ifndef TP_POO_CLASS_H
#define TP_POO_CLASS_H

#include <iostream>
#include "cstring"
using namespace std ;


class Vehicule
{
    protected :
                string Marque;
                string Couleur;
                int Vitesse;
    public :
                Vehicule();
                Vehicule(string pMarque,string pCouleur, int pVitesse );
                Vehicule(const Vehicule &vehicule);
                ~Vehicule();
                void seDeplacer() ;
                void setMarque(string pMarque);
                void setCouleur(string pCouleur);
                void setVitesse(int pVitesse);
                void getMarque() ;
                void getCouleur();
                void getVitesse();
};

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

#endif //TP_POO_CLASS_H
