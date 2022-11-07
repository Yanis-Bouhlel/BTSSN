#include <iostream>

using namespace std ;

int main()
{

    int cpt = 0 ; 
    char tab[80];

    cout << "Veuillez taper votre phrase : \n" ; 

    for (int i = 0 ; i < 80 ; i++) 
    {
        cin >> tab[i] ; 
        cpt++ ; 
        if (tab[i] == '.')
        {
            break;
        }
    } 
    cout << "La phrase comporte " << cpt << " de caracteres\n" ; 
 
    return 0 ;
}