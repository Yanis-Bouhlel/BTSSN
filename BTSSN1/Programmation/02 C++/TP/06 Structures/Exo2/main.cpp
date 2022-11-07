#include <iostream>

using namespace std;

int main()
{
    struct SNIR1elv{
        char nom[20];
        char prenom[20];
        char AnneeDnaissance[11];
        int note[2];
        float moyenne;
    };

    float somme;
    float moyenne[2];

    SNIR1elv eleve[2];

    for(int i=0;i<2;i++){

        cout<<"Ecrire le nom de l'eleve"<<endl;
        cin>>eleve[i].nom;

        cout<<"Ecrire le prenom de l'eleve"<<endl;
        cin>>eleve[i].prenom;

        cout<<"Ecrire la date de naissance de l'eleve"<<endl;
        cin>>eleve[i].AnneeDnaissance;
        cout<<"Ecrire 2 note de l'eleve"<<endl;
        for(int u=0;u<2;u++)
        cin>>eleve[i].note[u];
        cout<<"\n";
    }

    for(int y=0;y<2;y++){
        for(int u=0;u<2;u++){

            somme+=eleve[y].note[u];
        }
    moyenne[y]=somme/2;
    somme=0;
    }

    eleve[0].moyenne=moyenne[0];
    eleve[1].moyenne=moyenne[1];

    for(int i=0;i<2;i++){

        cout<<eleve[i].nom<<endl;

        cout<<eleve[i].prenom<<endl;

        cout<<eleve[i].AnneeDnaissance<<endl;

        cout<<eleve[i].moyenne<<endl;

        cout<<"--------------"<<endl;

    }

    return 0;
}
