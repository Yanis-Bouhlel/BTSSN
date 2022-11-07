#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char phraseSimple[51]="";
    char phraseCryptee[51]="";
    int y=0;

    cout << "\nEntrez la phrase a modifier : ";
    cin.getline(phraseSimple,51);

    for (y=0; y<strlen(phraseSimple); y++){
        if (phraseSimple[y]>96 && phraseSimple[y]<123){ //modifie les minuscules en avançant de 2 lettres
            phraseSimple[y]+=2;
        } else if (phraseSimple[y]>64 && phraseSimple[y]<91 ) { //modifie les majuscules en avançant de 2 lettres
            phraseSimple[y]+=2;
        }
        if ( (phraseSimple[y]>122) || (phraseSimple[y]>90 && phraseSimple[y]<97) ){ //corrige au cas où on dépasse Z sur les minuscules puis les majuscules
            phraseSimple[y]-=26;
        }      
        phraseCryptee[y] = phraseSimple[y] ;        
    }
   
    cout << "\nVotre phrase est desormais : "<<phraseCryptee<<endl<<endl;
}