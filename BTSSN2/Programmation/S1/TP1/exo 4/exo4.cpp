#include <iostream>
#include <math.h>

using namespace std ;

int main()
{
int a, b , c, x = 0, delta = 0 ;
float res;

cout << "Veuillez taper vos valeur : \n Pour a : " ; 
cin >> a ; 
cout << "\n Pour b : " ;
cin >> b ;
cout << "\n Pour c : " ; 
cin >> c ; 

delta = b * b - (4*a*c) ; 

if (delta < 0)
{
    cout << "l'equation n'admet aucune solution reele" ; 
}
else if (delta > 0)
{
    cout << " l'equation admet 2 solutions : \n - x1 = " << -b - sqrt(delta) << "\n et x2 = " << (-b + sqrt(delta)) / 2*a ;
}


    return 0 ;
}