#include <iostream>
using namespace std;
int main()
{
 int t[10], i;
 double s=0;
 for(i=0; i<10; i++)
 {
 cout << "Tapez la valeur numéro " << i << " : ";
 cin >> t[i];
 s = s + t[i];
 }

 s = s/10;
 cout << "La moyenne est : " << s << endl;
 return 0;
}
