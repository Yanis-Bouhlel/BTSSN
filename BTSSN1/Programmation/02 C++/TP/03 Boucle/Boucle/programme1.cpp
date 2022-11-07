#include <iostream>
using namespace std;


int main() {
    int secret = 26;
    int reponse;
    int essai;


    cout<<"deviner le nombre\n";
    
    do{
    
         for(essai = 10; essai > -1; essai = essai - 1)
         {
    cin>>reponse;
           
    if (reponse < secret )

    cout<<"plus grand ! il te reste "<< essai <<" chance\n";

    else if (reponse > secret)

    cout<<"plus petit ! il te reste "<< essai <<" chance\n";

    else if (reponse = secret)

    cout<<"bravo tu a gagner !!!!!\n";
    
    else 

    cout<<"saisie invalide\n";
        
        
         }
    }while(essai == 0);

    cout<<"le programme est fini\n";


return 0 ;

}

int 