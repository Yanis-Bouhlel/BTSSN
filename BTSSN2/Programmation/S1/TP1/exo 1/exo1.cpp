#include <iostream>

using namespace std ;

int main()
{

    // Partie déclarative

    const double pi = 3.14 ; 
    double rayon ; 
    float diametre , circonf, surface ; 


    cout << "ce programme calcule les trois variable suivante : \n - Le diametre \n - La surface \n - La circonference \n" ;
    cout << "Veuillez entrez la valeur du rayon \n" ; 

    cin >> rayon ; 

    cout << "le rayon du cercle est " << rayon ; 

    diametre = rayon * 2 ;
    circonf = pi * rayon*rayon;
    surface = (2* pi)* rayon ; 

    cout << " Le diametre est de " << diametre << "\n La circonference est de " << circonf << "\n la surface est de " << surface << "\n"; 

    return 0 ;
}