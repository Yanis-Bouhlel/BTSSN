#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char phraseSimple[51]="",phraseCryptee[51]="";
    int i=0,y=0;

    cout << "Entrez la phrase a inverser : ";
    cin.getline(phraseSimple,51);

    for (i=strlen(phrase1)-1; i>-1; i--){
        phraseCryptee[j] = phraseSimple[i];
        y++;
    }
    cout << "\nVotre phrase est desormais : "<<phraseCryptee<<endl;
}