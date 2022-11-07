#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char phraseSimple[51]="", phraseCryptee[51]="";
    int i=0, y=0, cleCryptage ;  

    cout << "Entrez la phrase a inverser : ";
    cin.getline(phraseSimple,51);
    cout<<"La phrase a crypter est : " << phraseSimple << endl ;

    for (i=strlen(phraseSimple)-1; i>-1; i--){
        phraseCryptee[y] = phraseSimple[i];
        y++;
    }
    cout << "\n Votre phrase en mode inverser donne desormais : "<< phraseCryptee << endl;

    cout << "\n Inserez une clé de cryptage : "; 
    cin >> cleCryptage ;

        for (y=0; y<strlen(phraseSimple); y++){

        if (phraseCryptee[y] > 96 && phraseCryptee[y] < 123){
            phraseCryptee[y]+=cleCryptage;

        } else if (phraseCryptee[y] > 64 && phraseCryptee[y] < 91 ) {
            phraseCryptee[y]+=cleCryptage;
        }
        if ( (phraseCryptee[y] > 122) || (phraseCryptee[y] > 90 && phraseCryptee[y] < 97) ){ 
            phraseCryptee[y] -= 26 ;
        }      
    }
   
    cout << "\nVotre phrase est desormais : " << phraseCryptee << endl << endl;
}
