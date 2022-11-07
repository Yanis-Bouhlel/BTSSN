#include <iostream>
#include <fstream>


using namespace std;

int main()
{

    int num;
    string prenom;
    string nom;
    int poid;
    int numero;
    int val, numval;
    string choix;

    ofstream  france ("../stats/statistiqueF.txt");
    ofstream  angleterre ("../stats/statistiqueA.txt");

    cout << "Choissisez une equipe entre france et angleterre" << endl;
    cin >> choix;


    if(choix == "angleterre")
    {

        for(int i=0; i<2; i++)
        {
            angleterre << i << " ";

            cout << "Entrez le prenom du joueur" << i+1 << endl;
            cin >> prenom;
            angleterre << "Le prenom du joueur "<< i << " est :" << prenom << endl;

            cout << "Entrez le nom du joueur "<< i+1 << endl;
            cin >> nom;
            angleterre << nom << endl;

            cout << "Entre la valeur marchande du joueur " << i+1 << endl;
            cin >> val;
            angleterre << "La valeur du joueur numero : " << i << " est : " << val << endl;

            cout << "Entre le numero du joueur " << i+1 << endl;
            cin >> numero;
            angleterre << numero << endl;

        }
        angleterre.close();
    }
    else if(choix == "france")
    {

        for(int j=0; j<1; j++)
        {
            france << endl << "Joueur " <<  j << " : " << endl;

            cout << "Entrez le prenom du joueur" << j+1 << endl;
            cin >> prenom;
            france << prenom << endl;

            cout << "Entrez le nom du joueur "<< j+1 << endl;
            cin >> nom;
            france << nom << endl;

            cout << "Entre la valeur marchande du joueur " << j+1 << endl;
            cin >> val;
            france << val << endl;

            cout << "Entre le numero du joueur " << j+1 << endl;
            cin >> numero;
            france << numero << endl;

        }

        france.close();
    }
}
