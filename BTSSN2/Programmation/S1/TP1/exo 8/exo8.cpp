#include <iostream>
#include <cstring>
using namespace std ;

int main()
{

    char chaine[10] ; 
    int cpt = 0 ;
    char voy ;

    cout << "Entrez vos dix caracteres ! \n" ; 

    for (int i = 0 ; i < 10 ; i++)
    {
        cin >> chaine[i] ;
        if (chaine[i] == 'a' ||chaine[i] == 'e' || chaine[i] == 'i' ||chaine[i] == 'o' ||chaine[i] == 'u' ||chaine[i] == 'y')
        {
            cpt++ ; 
            cout << "vous avez taper " << cpt << " de voyelles.\n";
        }

    }

    return 0 ;
}