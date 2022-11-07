#include "etudiant.h"
#include <vector>

using namespace std;

int Etudiant::getMaxNote(vector<int>notes)
{
    int rslt=-1;
    for(int i =0;i<notes.size();i++){

        if(rslt == -1){
            rslt = notes[i];
        }
        else if(rslt<notes[i]){
            rslt = notes[i];
        }
    }
    return rslt;
}
int Etudiant::getMinNote(vector<int>notes)
{
    int rslt=-1;
    for(int i =0;i<notes.size();i++){

        if(rslt == -1){
            rslt = notes[i];
        }
        else if(rslt>notes[i]){
            rslt = notes[i];
        }
    }
    return rslt;
}
float Etudiant::getMoyenneNote(vector<int>notes)
{
    int somme=0;
    float moyenne;
    for(int i =0;i<notes.size();i++){

        somme = somme + notes[i];
    }
    moyenne = somme / notes.size();
    return moyenne;
}
void Etudiant::affiche(vector<int>notes,string nom,string prenom,int cne)
{
    cout<<"Nom : "<<nom<<endl;
    cout<<"Prenom : "<<prenom<<endl;
    cout<<"CNE : "<<cne<<endl;
    cout<<"Note max : "<<getMaxNote(notes)<<endl;
    cout<<"Note min : "<<getMinNote(notes)<<endl;
    cout<<"Moyenne : "<<getMoyenneNote(notes)<<endl;
}
