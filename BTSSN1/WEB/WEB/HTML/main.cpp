#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{

    struct mqt
    {
        string test ; 
        string text ; 
    };

    mqt Fichier;
    ofstream test("./TEXT.json");
    cout << "entrez un texte ! " << endl ;
    cin >> Fichier.test ;    
    cout << "Votre texte est : " << Fichier.test << endl ; 
    test << "[ " << "{ "<< endl << "\"" "lat" "\"" " : " << "" + Fichier.test + "" << ", " <<  endl ;
    cout << "entrez un texte ! " << endl ;
    cin >> Fichier.text ;
    cout << "Votre texte est : " << Fichier.text << endl ; 
    test << "\"" "lng" "\"" " : " << "" +  Fichier.text + ""  << " }" << endl ;
    test << "]" ; 
    test.close();

    return 0;
}