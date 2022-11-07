#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

struct Crypt
{
    string phraseOrigine;
    string phraseCryptee;
    int code; // Nombre de décalage (key)
};

void phraseInverse(Crypt *donnee, int taille); // fonction pour changé l'ordre des lettre
void Codage(Crypt *donnee, int taille);        // fonction pour crypté
void Decodage(Crypt *donnee, int taille);      // fonction décryptage
string mode;

int main()
{

    Crypt phrase;
    ofstream Cryptage("../DossCode/Code.txt");
    cout << endl;
    cout << "Mode codage ou decodage ?" << endl; // Choix du mode codage ou décodage
    cin >> mode;

    if (mode == "codage") // Si le Mode est codage
    {
        // Debut lecture ecriture fichier
        ofstream origin("../DossCode/.Origin.txt");    // On ouvre le fichier de la phrase non codé en mode saisie
        ofstream code("../DossCode/.PhraseCodee.txt"); // On ouvre le fichier de la phrase codé en mode saisie
        Cryptage << "Bienvenue, " << endl;
        Cryptage << "Vous verrez dans ce fichier : " << endl;
        cout << endl;
        cout << "Ecrivez une phrase" << endl;
        cin.ignore(1, '\n');                // Ligne pour supprimé le cache de l'ancien CIN
        getline(cin, phrase.phraseOrigine); // La phrase à crypté

        origin << phrase.phraseOrigine; //écris la phrase de base dans le fichier
        origin.close();                 // Fermeture du fichier
        Cryptage << "   La phrase a crypter est : " << phrase.phraseOrigine << endl;
        phrase.phraseCryptee = phrase.phraseOrigine; // Met la phrase non codée dans la variable
        cout << endl;
        cout << "Votre message est: " << phrase.phraseOrigine << endl;

        int taille = phrase.phraseOrigine.length(); // Taille de la phrase
        cout << endl;
        cout << "De combien voulez vous decalez" << endl;
        cin >> phrase.code; // Clé de décalage

        phraseInverse(&phrase, taille); // Lancement de la fonction Inversion

        Codage(&phrase, taille); // Lancement de la fonction Codage

        code << phrase.phraseCryptee;
        code.close();
        cout << endl;
        cout << "La phrase codee est : " << phrase.phraseCryptee << endl;
        Cryptage << "   La phrase crypter est : " << phrase.phraseCryptee << endl;
    }
    else if (mode == "decodage")
    {
        ifstream code("../DossCode/.PhraseCodee.txt");

        Cryptage << "Bienvenue, " << endl;
        Cryptage << "Vous verrez dans ce fichier : " << endl;
        while (getline(code, phrase.phraseCryptee))
        {
            cout << endl;
            cout << "La phrase a decoder est : " << phrase.phraseCryptee << endl;
            Cryptage << "   La phrase a décoder est : " << phrase.phraseCryptee << endl;
        }

        phrase.phraseOrigine = phrase.phraseCryptee;
        cout << endl;
        cout << "Quel est la cle (code)" << endl;
        cin >> phrase.code;

        int taille = phrase.phraseCryptee.length();

        phraseInverse(&phrase, taille);
        Decodage(&phrase, taille);
        cout << endl;
        cout << "Le resultat est : " << phrase.phraseCryptee << endl;
        Cryptage << "   La phrase décrypter est : " << phrase.phraseCryptee << endl;
    }
    Cryptage.close();
}

void phraseInverse(Crypt *donnee, int taille)
{
    int u = 0, i;
    for (i = taille - 1; i >= 0; i--)
    {
        donnee->phraseCryptee[i] = donnee->phraseOrigine[u];
        u++;
    }
}
void Codage(Crypt *donnee, int taille)
{
    int i, u = 0;
    for (i = 0; i < taille; i++)
    {
        if (donnee->phraseCryptee[i] == ' ')
        {
            donnee->phraseCryptee[i] = ' ';
        }

        if ((donnee->phraseCryptee[i] <= 'Z') && (donnee->phraseCryptee[i] >= 'A'))
        {
            donnee->phraseCryptee[i] = (((donnee->phraseCryptee[i] - 65) + donnee->code) % 26) + 65;
        }
        else if ((donnee->phraseCryptee[i] <= 'z') && (donnee->phraseCryptee[i] >= 'a'))
        {
            donnee->phraseCryptee[i] = (((donnee->phraseCryptee[i] - 97) + donnee->code) % 26) + 97;
        }
    }
}

void Decodage(Crypt *donnee, int taille)
{
    int i, u = 0;
    donnee->code = 26 - donnee->code;
    for (i = 0; i < taille; i++)
    {
        if (donnee->phraseCryptee[i] == ' ')
        {
            donnee->phraseCryptee[i] = ' ';
        }

        if ((donnee->phraseCryptee[i] <= 'Z') && (donnee->phraseCryptee[i] >= 'A'))
        {
            donnee->phraseCryptee[i] = (((donnee->phraseCryptee[i] - 65) + donnee->code) % -26) + 65;
        }
        else if ((donnee->phraseCryptee[i] <= 'z') && (donnee->phraseCryptee[i] >= 'a'))
        {
            donnee->phraseCryptee[i] = (((donnee->phraseCryptee[i] - 97) + donnee->code) % -26) + 97;
        }
    }
}
