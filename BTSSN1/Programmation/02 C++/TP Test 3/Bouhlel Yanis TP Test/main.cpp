#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    /*Partie Déclarative*/

    int ProduitOuSomme(int *pt_tab, char &choix);
    int tab[20];
    int y, resultat;
    char choix;

    /*Partie Opérative*/

    cout << "------------------------------------------------------------------------------------------------ \n";
    cout << "Ce programme sert a faire le produit ou la somme d'un ensemble de nombre que vous aller saisir. \n";
    cout << "------------------------------------------------------------------------------------------------ \n";
    cout << "Veuillez saisir des entiers :\n";
    for (y = 0; y < 20; y++)
    {
        cin >> tab[y];

        if (tab[y] < 0 || tab[y] > 20)
        {
            cout << "error \n";
            y--;
        }
    }
    resultat = ProduitOuSomme(tab, choix);
    cout << "le resultat de l'operation est : " << resultat;
    return 0;
}

int ProduitOuSomme(int *pt_tab, char &choix)
{
    int i, produit = 1, somme = 0, resultat;
    cout << "Choisissez-vous de les multiplier (*) ? Ou de les additionner (+) ? \n";
    cin >> choix;
    if (choix == '*')
    {
        for (i = 0; i < 20; i++)
        {
            produit = produit * *(pt_tab + i);
        }
        resultat = produit;
    }
    if (choix == '+')
    {
        for (i = 0; i < 20; i++)
        {
            somme = somme + pt_tab[i];
        }
        resultat = somme;
    }

    return resultat;
}