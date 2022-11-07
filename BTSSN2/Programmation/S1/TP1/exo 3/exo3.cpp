#include <iostream>

using namespace std ;

int main()
{

    // Partie déclarative

    int nb[3];
    int min = 0, max = 0 ; 
    int med = 0 ;
    int i = 0 ; 
    for (i = 0 ; i < 3 ; i++)
    {
        cout << "Entrez un nombre : " << endl ; 
        cin >> nb[i]; 
        cout << "Votre " << i + 1 << " eme nombre est " << nb[i] << endl ; 
        
        



    }


for (i = 0 ; i < 3 ; i++)
    {
        if (i > 0)
        {
            if (nb[i] < nb[i-1])
        {
            cout<< nb[i]<< "min\n";
            min = nb[i] ; 
        }
        
         else if (nb[i] > nb[i-1])
        {
            cout<< nb[i]<< "max\n";
            max = nb[i] ; 
        }
        else
        {
            cout<< nb[i]<< "med \n";
            med = nb[i] ; 
        }
        }
         
        


    }
     
      


    cout << "Le minimum est " << min << " \n Le maximum est " << max << "\n La valeur mediane est la " << med << " ." ;



    return 0 ;
}