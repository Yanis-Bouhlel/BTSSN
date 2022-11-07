#include <iostream>
using namespace std;

int main()
{

    float u0 = 1200.00;
    float u = 0 , somme = 0 ;
    int annee = 2007;
    float q = 1.0048;

    for (u0 = 1200.0; u0 < 1264.9; annee++)
    {
        u0 = u0 * q;
        u = u0 * 12 ;
        somme += u ; 
        cout << somme << endl; 
    }
    cout << somme + 1200 << endl; 
    cout << "New stape" ;
    cout << q << endl << u0 << endl<< annee << endl;

    return 0;
}