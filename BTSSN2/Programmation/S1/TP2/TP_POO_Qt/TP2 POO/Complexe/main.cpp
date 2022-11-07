#include <iostream>
#include "complexe.h"

using namespace std ;


    int main() // traitement principal
    {
        Complexe z1(0.0, 1.0);              // appel implicite du constructeur paramétré
        Complexe z2;                        // appel implicite du constructeur non paramétré
        z1.Affiche();                       // affichage de z1
        cout << "\nEntrer un nombre complexe : ";
        z2.Lis();                           // saisie de z2
        cout << "\nVous avez entré : ";
        z2.Affiche();                       // affichage de z2return 0;
        Complexe z3 = z1 + z2;              // somme de deux complexes grâce à l’opérateur +
        cout << "\n\nLa somme de \n";
        z1.Affiche();
        cout << " et \n";
        z2.Affiche();
        cout << " est : ";
        z3.Affiche();
    }
