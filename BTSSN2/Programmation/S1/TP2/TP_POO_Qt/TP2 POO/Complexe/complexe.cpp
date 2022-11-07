#include <iostream>
#include "complexe.h"


using namespace std ;

Complexe::Complexe(float x, float y) // constructeur avec parametres
{
    re = x;
    im = y;
}
Complexe::Complexe() // constructeur sans parametre
{
    re = 0.0;
    im = 0.0;
}
void Complexe::Lis() // lecture d’un complexe
{
    cout << "Partie réelle : ";
    cin >> re;
    cout << "Partie imaginaire : ";
    cin >> im;
}
void Complexe::Affiche() // affichage d’un complexe
{
    cout << re << " + i " << im << endl;
}

float Complexe::getRe()
{
    return re;
}

float Complexe::getIm()
{
    return im;
}

Complexe operator+(Complexe  z1, Complexe z2)
{
      return Complexe ( z1.getRe() + z2.getRe(), z1.getIm() + z2.getIm() );

}

