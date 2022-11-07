#include <iostream>

using namespace std;

struct adresse
{
    int num;
    string rue;
    int CDPostal;
    string Ville;
};

struct competence
{
    int vitesse;
    int frappe;
    string sport;
};

struct Sportif
{
    int numClient;
    string nom;
    adresse Tadresse;
    competence Tcompetence;
};

int main()
{
    string nom;
    string Status;

    Sportif mbappe,Ronaldo;
    adresse Madresse,Tadresse;
    competence Mcompetence,Tcompetence;

    mbappe.nom = "mbappe";
    mbappe.numClient="1";
    mbappe.Madresse.num=56;
    mbappe.Madresse.rue="Albert";
    mbappe.Madresse.CDPostal="93650";
    mbappe.Madresse.Ville="Bondy";
    mbappe.Mcompetence.vitesse=100;
    mbappe.Mcompetence.frappe=90;
    mbappe.Mcompetence.sport="Foot";

    mbappe.nom = "Ronaldo";
    mbappe.numClient="2";
    mbappe.Tadresse.num=65;
    mbappe.Tadresse.rue="Pepito";
    mbappe.Tadresse.CDPostal="5040";
    mbappe.Tadresse.Ville="Porto";
    mbappe.Tcompetence.vitesse=60;
    mbappe.Tcompetence.frappe=100;
    mbappe.Tcompetence.sport="Foot";

    cout<<"Voulez vous faire une recherche par 'nom' ou 'vitesse'"<<endl;
    cin>>Status;
    if(Status=='nom'){
        recherche(nom);
    }else if(Status=='vitesse'){

    }


    return 0;
}
