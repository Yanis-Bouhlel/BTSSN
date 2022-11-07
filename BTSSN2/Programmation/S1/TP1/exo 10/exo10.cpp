#include <iostream>

using namespace std ;

int main()
{

    int Etudiants[10][3];

    for (int i = 0; i < 10; i++)
    {
          for (int j = 0 ; j<3; j++)
            {
                cout << "la note numero " << j + 1 << " de l'etudiant numero " << i + 1 << "est  : " <<endl ; 
                 Etudiants[i][j] = 0  ; 
            }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Etudiant " << i+1 << " : " << endl ; 
          for (int j = 0 ; j<3; j++)
            {
                cout << "note : " << j+1 << " : " << endl ; 
                cout << Etudiants[i][j] << endl ; 
            }
    } 

    return 0 ;
}