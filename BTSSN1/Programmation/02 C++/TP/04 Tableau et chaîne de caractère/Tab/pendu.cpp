/*TP TEST 2 YANIS*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <ctime>

using namespace std;
int main()
{
    /*Partie Déclarative*/
    // Mode 1
    char mot[10] = {"cartable"}, lettre = {};
    bool essaie = false;
    int tentative = 10;
    int mdjeu = 0;
    int nbrlettre = strlen(mot);
    string bonMot = mot;
    // Mode 2
    char test[10] = {};
    char test2[10] = {};
    int i, y, h, Y, H;
    char motV2[6][10] = {{"cartable"}, {"ecole"}, {"arbre"}, {"ordi"}, {"table"}, {"yanis"}}, Lettre = {};
    bool essai = false;
    int Tentative = 10;
    srand((unsigned int)time(0)); // pour lancer les mot aleatoirement
    int valeur = rand() % 6;
    int nbrLettre = strlen(motV2[valeur]);
    string BonMotV2 = motV2[valeur];

    /*Partie Opérative*/

    cout << "\n";
    cout << "Bienvenue sur 'Le Pendu' !! \n";
    cout << "Il y a deux mode de jeu \n";
    cout << "Le premier est un mode simple avec un seul mot \n";
    cout << "Le second est un mode un peu plus difficile\ncar le mot change a chaque partie \n";
    cout << "Choisissz votre mode de jeu :\n";      // Défiition des regles
    cout << "1-mode simple \t 2-mode aleatoire \n"; // Différent modes
    cout << "Je choisis le mode de jeu numero ";
    cin >> mdjeu; // choix du mode
    if (mdjeu == 1)
    {
        for (i = 0; i < nbrlettre; i++)
        {
            test[i] = '_'; // nombre de _ egale au nombre de lettre
        }
        cout << test << endl;
        cout << "\n";
        cout << "Entrez une lettre pour devinez le mot\n";

        for (y = 0; y < tentative; y++)
        {
            cin >> lettre; // on tape une lettre

            for (h = 0; h < strlen(test); h++)
            {
                if (lettre == bonMot[h]) // Si la lettre est dans le mot
                {
                    test[h] = lettre; // on remplace _ par la lettre
                    essaie = true;
                }
            }
            if (essaie == false) // si la lettre n'est pas dedans...
            {
                cout << "tu n'as pas trouver de lettre\n";
                cout << test << endl;
                cout << "Il te reste " << tentative - y - 1 << " tentatives\n"; // on perd une "vie"
            }
            if (essaie == true)
            {
                tentative++;
                cout << "tu as trouver la lettre: " << lettre << endl;
                cout << test << endl;
                essaie = false;
            }
            if (test == bonMot)
            {
                cout << "Bien jouer!\n";
            }
            if (y + 1 >= tentative)
            {
                cout << "\n";
                cout << "Dommage";
            }
        }
    }
    else if (mdjeu == 2)
    {
        for (i = 0; i < nbrLettre; i++)
        {
            test2[i] = '_'; // nombre de _ egale au nombre de lettre
        }
        cout << test2 << endl;
        cout << "Entrez une lettre pour devinez le mot \n";

        for (Y = 0; Y < Tentative; Y++)
        {
            cin >> Lettre; // on tape une lettre

            for (H = 0; H < strlen(test2); H++)
            {
                if (Lettre == BonMotV2[H]) // Si la lettre est dans le mot
                {
                    test2[H] = Lettre; // on remplace _ par la lettre
                    essai = true;
                }
            }
            if (essai == false) // si la lettre n'est pas dedans
            {
                cout << "tu n'as pas trouver de lettre \n";
                cout << test2 << endl;
                cout << "Il te reste " << Tentative - Y - 1 << " tentatives \n"; // on perd une vie
            }
            if (essai == true)
            {
                Tentative++;
                cout << "tu as trouver la lettre: \n"
                     << Lettre;
                cout << test2 << endl;
                essai = false;
            }
            if (test2 == BonMotV2)
            {
                cout << "Bien jouer\n";
            }
            if (Y + 1 >= Tentative)
            {
                cout << "Dommage \n";
            }
        }
    }
    return 0;
}