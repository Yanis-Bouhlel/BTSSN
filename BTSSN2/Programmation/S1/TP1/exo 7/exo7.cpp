#include <iostream>

using namespace std ;

int main()
{

 int tab ;
 int somme=0;   
    for (int i = 0; i < 10; i++)
    {
        cout << "veuillez taper un nombre \n" ;
        cin >> tab ; 
        somme = somme + tab ; 
        
    }
    cout << somme ; 

    return 0 ;
}