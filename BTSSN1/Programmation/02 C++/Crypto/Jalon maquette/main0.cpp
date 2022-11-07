#include <iostream>
#include <cstring>
#include <cstdlib>


using namespace std;

struct Crypt
{
    string phraseNonCodee;
    string phraseCodee;
    int code; //Nombre de décalage 
};

void phraseInverse(Crypt *donnee, int taille); //fonction pour changé l'ordre des lettre
void Codage(Crypt *donnee, int taille);        //fonction pour crypté
int fin;                                       //pour que le terminal reste ouvert a la fin

int main()
{

    Crypt phrase;

    cout << "Bonjour bienvenue dans le logiciel de cryptage de données : " << endl; //Choix du mode codage ou décodage
    cout << "Votre code crypter sera quoi qu'il arrive enregistrer dans ce programme." << endl;
    cout << "Commencons, quel mode voulez vous utiliser ? (codage / decodage)" << endl;
    cout << "\n";
    cout << "\n";
    cout << "Ecrivez une phrase." << endl;
    getline(cin, phrase.phraseNonCodee); //La phrase à crypté

    phrase.phraseCodee = phrase.phraseNonCodee; //Met la phrase non codée dans la variable

    cout << "Votre message est: " << phrase.phraseNonCodee << endl;
    cout << "\n";
    cout << "\n";

    int taille = phrase.phraseNonCodee.length(); //On récupère la taille de la phrase

    cout << "quel sera le code de decryptage ? (decalage)" << endl;
    cin >> phrase.code; // Clé de décalage
    cout << "\n";

    phraseInverse(&phrase, taille); //Lancement de la fonction Inversion

    Codage(&phrase, taille); //Lancement de la fonction Codage

    cout << "La phrase crypter est : " << phrase.phraseCodee << endl;
    cout << "\n";
    cout << "\n";

    cout << "Appuyer sur une touche pour continuer\n";
    cin >> fin;
}

//déclaration des foncti on void phraseInverse(Crypt *donnee, int taille){
void phraseInverse(Crypt *donnee, int taille)
{
    int u = 0, i;
    for (i = taille - 1; i >= 0; i--)
    {
        donnee->phraseCodee[i] = donnee->phraseNonCodee[u];
        u++;
    }
}
void Codage(Crypt *donnee, int taille)
{
    int i, u = 0;
    for (i = 0; i < taille; i++)
    {
        if (donnee->phraseCodee[i] == ' ')
        {
            donnee->phraseCodee[i] = ' ';
        }

        if ((donnee->phraseCodee[i] <= 'Z') && (donnee->phraseCodee[i] >= 'A'))
        {
            donnee->phraseCodee[i] = (((donnee->phraseCodee[i] - 65) + donnee->code) % 26) + 65;
        }
        else if ((donnee->phraseCodee[i] <= 'z') && (donnee->phraseCodee[i] >= 'a'))
        {
            donnee->phraseCodee[i] = (((donnee->phraseCodee[i] - 97) + donnee->code) % 26) + 97;
        }
    }
}
