#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    /*Partie Déclarative*/
    int i;
    char Phrase[20];
    char Phrase2[20];
    void Copy(char *ch1, char *ch2);

    /*Partie Opérative*/

    cout << "Veuillez entrer une phrase : \n";
    cin >> Phrase;

    Copy(Phrase, Phrase2);
    cout << Phrase2 <<"\n";
    return 0;
}

void Copy(char *ch1, char *ch2)
{
    strcpy(ch2, ch1);
    cout << "oui1"<< endl;
}
