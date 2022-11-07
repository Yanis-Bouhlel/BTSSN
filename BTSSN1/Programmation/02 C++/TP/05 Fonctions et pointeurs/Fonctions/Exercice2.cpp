/*TP2 Fonctions YANIS*/
#include <iostream>
#include <cstring>
using namespace std;
int Resultat = 0;
char sep ;
int main()
{
    /*Partie Déclarative*/

    int sec, min, h;
    
    int conv(int a, int b, int c);
    void look();
    
        /*Partie Opérative*/
    cout << "Ecrivez un heure : ";
    cin >> h >> sep >> min >> sep >> sec;
    Resultat = conv(h, min, sec);
    look();

    return 0;
}
int conv(int a, int b, int c)
{
    /*Partie Déclarative*/
    int resultat = 0;
    int sec, min, h;
    /*Partie Opérative*/
    resultat = resultat + a * 3600;
    resultat = resultat + b * 60;
    resultat = resultat + c;
    return resultat;
}

void look()
{
    cout << "Cela fais au total " << Resultat << " de seconde au total.";
}