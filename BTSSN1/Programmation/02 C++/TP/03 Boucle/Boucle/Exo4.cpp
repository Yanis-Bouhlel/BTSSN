#include <iostream>
using namespace std;


int main() {
    int secret = 16;
    int reponse;
    int Essai;


    cout<<"deviner le nombre\n";
    
    do{
    
         for(Essai = 10; Essai > -1; Essai = Essai - 1)
         {
    cin>>reponse;
           
    if (reponse < secret )

    cout<<"plus grand ! il te reste "<< Essai <<" chance\n";

    else if (reponse > secret)

    cout<<"plus petit ! il te reste "<< Essai <<" chance\n";

    else if (reponse = secret)

    cout<<"bravo tu a gagner !!!!!\n";
    
    else 

    cout<<"saisie invalid\n";
        
        
         }
    }while(Essai == 0);

    cout<<"le programme est fini\n";


return 0 ;

}