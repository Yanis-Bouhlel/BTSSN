#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char chaine[50];
    int i = 0; // on initialise la longueur de la chaine à 0
    cout << "Entrez votre phrase: ";
    gets(chaine);
    i = strlen(chaine);
    cout << "Il y a " << i << " caracteres dans votre phrase.";
    return 0;
}
