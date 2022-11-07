/*TP Fonction 1 YANIS*/
#include <iostream>
#include <cstring>
using namespace std;
int nombre = 0;



int main()
{
    /*Partie Déclarative*/
    int Resultat = 0;
    int carre(int n);
    void look();
    /*Partie Opérative*/
    cout << "Ecrivez un nombre : ";
    cin >> nombre;
    Resultat = carre(nombre);
    look();
    return 0;
}
int carre(int n)
{
    /*Partie Déclarative*/
    int resultat = 0;
    /*Partie Opérative*/
    resultat = n * n;
    return resultat;
}
void look()
{
    cout << "Le carre de " << nombre << " est " << carre(nombre);
}