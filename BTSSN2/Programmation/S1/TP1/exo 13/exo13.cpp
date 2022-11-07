#include <iostream>
#include <cstring>

using namespace std ;

int main()
{
    char MotMystere[20];
    char Phrase[100];
    char result;
    
    cout << "Taper le phrase : \n" ; 
    cin.getline(Phrase, 100);
    cout << "Le mot a trouver est : "<< Phrase << endl ; 

    cout << "Taper le mot a trouver : \n" ; 
    cin.getline(MotMystere, 20);
    cout << "Le mot a trouver est : "<< MotMystere << endl ; 

    if(strcmp(Phrase, MotMystere) != 1 )
    {
        cout << "Vous avez gagner !!\n" ; 
    }
    else    
        cout << "Perdu !!\n";



    return 0 ;
}