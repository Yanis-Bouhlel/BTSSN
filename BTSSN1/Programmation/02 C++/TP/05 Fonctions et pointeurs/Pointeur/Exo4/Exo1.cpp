#include <iostream>
#include <cstring>

using namespace std;

int main()
{

/*Partie Déclarative*/
void Swap (int val1, int val2, int *sw1, int *sw2);
int a, b ;
int x, y ;

/*Partie Opérative*/

cout << "Veuillez entrer une valeur 1 : \n" ; 
cin >> a ;
cout << "Veuillez entrer une valeur 2 : \n" ; 
cin >> b ;

Swap(a, b, &x, &y);
cout << "la nouvelle valeur de 1 est : " << x << endl;
cout << "la nouvelle valeur de 2 est : " << y << endl;
return 0 ;

}
void Swap (int val1, int val2, int *sw1, int *sw2)
{
    *sw1 = val2 ; 
    *sw2 = val1 ;
}