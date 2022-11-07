#include <iostream>
#include <vector>
#include "etudiant.h"

using namespace std;

int main()
{
    Etudiant etudiant[2];

    etudiant[0].nom = "Baron";
    etudiant[0].prenom = "Maxime";
    etudiant[0].notes.push_back(20);
    etudiant[0].notes.push_back(17);
    etudiant[0].notes.push_back(8);
    etudiant[0].notes.push_back(12);
    etudiant[0].cne = 145842;
    etudiant[0].affiche(etudiant[0].notes,etudiant[0].nom,etudiant[0].prenom,etudiant[0].cne);
    cout<<"--------------------------------------"<<endl;
    etudiant[1].nom = "Alger Leonard";
    etudiant[1].prenom = "Kylian";
    etudiant[1].notes.push_back(20);
    etudiant[1].notes.push_back(20);
    etudiant[1].notes.push_back(21);
    etudiant[1].notes.push_back(18);
    etudiant[1].cne = 148842;

    etudiant[1].affiche(etudiant[1].notes,etudiant[1].nom,etudiant[1].prenom,etudiant[1].cne);
}
