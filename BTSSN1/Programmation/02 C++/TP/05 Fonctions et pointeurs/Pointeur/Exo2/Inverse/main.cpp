#include <iostream>

using namespace std;

void inverse(double* ptr_t){
    double tab[20];
    int u=19,i;
    for (i=0;i<20;i++){
        tab[u]=ptr_t[i];
        u--;
    }
    for (i=0;i<20;i++){
        cout<<tab[i]<<"-";
        cout<<ptr_t[i]<<endl;

    }
}
int main()
{
 double t[20];
 int i;
 for(i=0; i<20; i++)
 {
 cout << "Tapez la valeur numero " << i+1 << " : ";
 cin >> t[i];
 }
 double* ptr_rslt;
 ptr_rslt=&t[0];
 inverse(t);
}
