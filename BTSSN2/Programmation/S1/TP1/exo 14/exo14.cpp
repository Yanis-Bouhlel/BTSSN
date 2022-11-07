#include <iostream>

using namespace std;

int main()
{
    const char* mois[12] = {"Janvier", "Fevrier","Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Decembre"};
    int Nmois=0;
    cout << "Quel est le mois que vous recherchez ?\n";
    cin >> Nmois ; 

    cout << mois[Nmois-1]<< endl ; 

    return 0;
}