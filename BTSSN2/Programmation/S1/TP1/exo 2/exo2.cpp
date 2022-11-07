#include <iostream>

using namespace std ;

int main()
{

    // Partie déclarative

    int note =  0 ;
    int nb = 0 ;
    float moy = 0 ;
    int med;

    while (note >= 0)
    {
        nb++ ;
        cout << "Veuillez taper une note \n";
        cin >> note ;
        cout << "Vous avez taper : " << note << endl ;
        moy = moy + (float)note;  
        
    }
    moy = moy / nb; 
    med = nb /2 ;
    cout << "la moyenne est de " << moy << "\n La valeur mediane est la " << med << "eme" ;
    

    return 0 ;
}