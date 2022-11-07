#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    /*Partie Déclarative*/
    char *Phrase;
    char x, y;
    void findA(char *phrase, int i);
    int i;

    /*Partie Opérative*/

    cout << "Veuillez entrer le nombre de caracteres que vous voulez taper : \n";
    cin >> i;
    Phrase = new char[i];
    cout << "Veuillez entrer une phrase : \n";
    cin >> Phrase;
    findA(Phrase, i);

    return 0;
}

void findA(char *phrase, int j)
{
   int y = 0;

    for (j = 0; j < strlen(phrase); j++)
    {
        if (phrase[j] == 'A' ||phrase[j] == 'a')
        { 
            
            y++;

        }
    }
    cout << "Il y a " << y << " fois la lettre 'A'. " << endl;
}
