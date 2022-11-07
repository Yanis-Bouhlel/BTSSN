#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>


using namespace std;

struct crypt
{
    string PhraseOrigine;
    string PhraseCryptee;
    int Code;
};

void phraseInverse (crypt *donnee, int taille); 
void Codage (crypt *donnee, int taille);        

int main()
{
    crypt phrase;

    cout << "Bonjour bienvenue dans le logiciel de cryptage de données : " << endl; // Choix du mode codage ou décodage
    cout << endl;
    
    cout << "Ecrivez une phrase." << endl;
    getline(cin, phrase.PhraseOrigine); // On saisis la phrase à coder

    int taille = phrase.PhraseOrigine.length();

    cout << "Votre message est: " << phrase.PhraseOrigine;
    cout << endl;
    cout << endl;

    phrase.PhraseCryptee = phrase.PhraseOrigine;

    cout << "quel sera le code de decryptage ? (decalage)" << endl;
    cin >> phrase.Code; // Clé de décalage
    cout << endl;

    phraseInverse(&phrase, taille); // Lancement de la fonction Inversion

    Codage(&phrase, taille); // Lancement de la fonction Codage

    cout << "La phrase crypter est : " << phrase.PhraseCryptee << endl;
    cout << "\n";
    cout << "\n";
   
    return 0;
};

void phraseInverse (crypt *donnee, int taille)
{
    int u = 0, i;
    for (i = taille - 1; i >= 0; i--)
    {
         donnee->PhraseCryptee[i] = donnee->PhraseOrigine[u];
        u++;
    }
}
void Codage (crypt *donnee, int taille)
{
    int i, u = 0;
    for (i = 0; i < taille; i++)
    {
       if (donnee->PhraseCryptee[i] == ' ')
        {
            donnee->PhraseCryptee[i] = ' ';
        }

        if ((donnee->PhraseCryptee[i] <= 'Z') && (donnee->PhraseCryptee[i] >= 'A'))
        {
            donnee->PhraseCryptee[i] = (((donnee->PhraseCryptee[i] - 65) + donnee->Code) % 26) + 65;
        }
        else if ((donnee->PhraseCryptee[i] <= 'z') && (donnee->PhraseCryptee[i] >= 'a'))
        {
            donnee->PhraseCryptee[i] = (((donnee->PhraseCryptee[i] - 97) + donnee->Code) % 26) + 97;
        }
    }
}