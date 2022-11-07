#include <iostream>
#include <cstring>

using namespace std;

int main()
{

/*Partie Déclarative*/
void MinMax (int val1, int val2, int &min, int &max);
int a, b ;
int x, y ;

/*Partie Opérative*/

cout << "Veuillez entrer une valeur 1 : \n" ; 
cin >> a ;
cout << "Veuillez entrer une valeur 2 : \n" ; 
cin >> b ;

MinMax(a, b, x, y);
cout << "la plus petite valeur est : " << x << endl;
cout << "la plus grande valeur est : " << y << endl;
return 0 ;

}

void MinMax(int val1, int val2, int &min, int &max)
{
    if (val1 > val2)
    {
        max = val1 ;
        min = val2 ;
    }
    else if (val2 > val1)
    {
        max = val2 ;
        min = val1 ;
    }
    else
    {
        cout<<"ERROR"<<endl ; 
    }
}
