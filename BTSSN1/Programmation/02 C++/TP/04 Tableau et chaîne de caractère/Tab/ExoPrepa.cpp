#include <iostream>
#include <cstring>
using namespace std;
int main()   
{
    char chaine[30];
    char mot1[16];
    char mot2[16];
    char mot3[16];
    char mot4[16];
    int esp[6], j, i;

    cout << " Entrez une phrase : ";
    cin.getline(chaine, 29);
    cout << chaine << endl; 


    for (i = 0; i <= 15; i++)
    {
        if (chaine[i] == 32)
        {
            esp[j] = i;
            j++;
        }
    }
    cout << "\n";
    cout << "La espition du premier separateur est " << esp[0] << endl;
    cout << "La espition du deuxieme separateur est " << esp[1] << endl;
    cout << "La espition du dernier separateur est " << esp[2] << endl;

    strncpy(mot1, chaine, esp[0]);
    strncpy(mot2, chaine + esp[0] + 1, esp[1] - esp[0] - 1);
    strncpy(mot3, chaine + esp[1] + 1, esp[2] - esp[1] - 1);
    strncpy(mot4, chaine + esp[2] + 1, strlen(chaine) - esp[2]);

    cout << "\n";
    cout << "Le premier mot est " << mot1 << endl;
    cout << "Le deuxieme mot est " << mot2 << endl;
    cout << "Le troisieme mot est " << mot3 << endl;
    cout << "Le dernier mot est " << mot4 << endl;

    return 0 ;
}
