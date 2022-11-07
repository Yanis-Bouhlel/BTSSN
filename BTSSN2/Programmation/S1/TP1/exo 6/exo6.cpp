#include <iostream>

using namespace std ;

int main()
{
    int tab[20] ;

    for (int i = 0 ; i< 20; i++)
    {
        cout << "Veuillez entrer le nombre numero " << i + 1 << " : " ;
        tab[i] = i +1 ; 
        cout << tab[i] ; 
    }


    return 0 ;
}