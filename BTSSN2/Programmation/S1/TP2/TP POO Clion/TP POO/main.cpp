#include <iostream>
#include "assets/class.h"


using namespace std;


int main()
{
    Voiture car1("Mercedes", "Noir", 350);
    Vehicule car2 = Vehicule(car1) ;
    car1.

    car1.getMarque();
    car1.getCouleur();
    car1.getVitesse();
    cout << endl ;
    car2.setMarque("Citroen");
    car2.getMarque();
    car2.getCouleur();
    car2.setVitesse(160) ;
    car2.getVitesse();
    cout << endl ;

}
