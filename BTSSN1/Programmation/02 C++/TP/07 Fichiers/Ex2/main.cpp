#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{

    string choix, ligne, filtre, dchoix;
    string stats;
    ifstream france("../stats/statistiqueF.txt", ios::in);
    ifstream angleterre("../stats/statistiqueA.txt");
    
 cout << "Choissisez l'equipe de france ou l'equipe d'angleterre pour afficher leurs stats ou voulez vous affichez par stats" << endl;
    cin >> choix;

    if (choix == "angleterre")
    {
        if (angleterre)
        {
            while (getline(angleterre, ligne))
            {
                cout << ligne << endl;
            }
        }
        else
        {
            cout << "Le fichier \"angleterre\" est introuvable" << endl;
        }
    }
    else if (choix == "france")
    {
        if (france)
        {
            while (getline(france, ligne))
            {
                cout << ligne << endl;
            }
        }
        else
        {
            cout << "Le fichier \"france\" est introuvable" << endl;
        }
    }
    
    else if (choix == "all")
    {
            int num;
            cout << "Entrer le numero voulu" << endl;
            cin >> num;

            if (france)
            {
                int i = 0;
                while (getline(france, ligne))
                {
                    i++;
                    if (i == num)
                    {

                        cout << ligne << endl;
                        break;
                    }
                }
            }
            else
            {
                cout << "Le fichier \"france\" est introuvable" << endl;
            }

            if (angleterre)
            {
                int i = 0;
                while (getline(angleterre, ligne))
                {
                    i++;
                    if (i == num)
                    {
                        cout << ligne << endl;
                        break;
                    }
                }
            }
            else
            {
                cout << "Le fichier \"angleterre\" est introuvable" << endl;
            }
   }
    else
    {
        cout << "ERROR" << endl;
    }
}