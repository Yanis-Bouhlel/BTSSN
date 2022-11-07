#include <iostream>

using namespace std;

int main()
{

    struct Voiture{
        char marque[10];
        char immatricule[8];
        int anneeIm;
        int litre;
    };

    Voiture monAuto;

    cout<<"Entrez la marque de la voiture"<<endl;
    cin>>monAuto.marque;

    cout<<"Entrez l'immatriculation de la voiture"<<endl;
    cin>>monAuto.immatricule;

    cout<<"Entrez l'annee d'immatriculation de la voiture"<<endl;
    cin>>monAuto.anneeIm;

    cout<<"Entrez le nombre de litre de la voiture"<<endl;
    cin>>monAuto.litre;

    cout<<"la voiture est un : "<<endl;
    cout<<monAuto.marque<<endl;
    cout<<monAuto.immatricule<<endl;
    cout<<monAuto.anneeIm<<endl;
    cout<<monAuto.litre<<endl;

    return 0;
}
