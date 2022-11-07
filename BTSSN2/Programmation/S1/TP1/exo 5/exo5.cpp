#include <iostream>

using namespace std ;

int main()
{

{
    int nb;
    cout << "Veuillez taper le nombre de lignes : " ; 
    cin >> nb ;
     int star;
     for(int i=1; i<=nb;i++)
     {
        star=i;
           while (star>0)
           {
               cout << "*";
               star--;
           }
        cout << "\n";
      }
}
    return 0 ;
}