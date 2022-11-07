#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{

char *pt_tab;
int val;
cout<<"entrez une valeur"<<endl;
cin>>val;
pt_tab= new char[val];
cin>>pt_tab[0]>>pt_tab[1]>>*(pt_tab+2)>>*(pt_tab+3);
cout<<pt_tab[0]<<pt_tab[1]<<*(pt_tab+2)<<*(pt_tab+3)<<endl;
delete pt_tab;
cout<<pt_tab[0]<<pt_tab[1]<<*(pt_tab+2)<<*(pt_tab+3);
return 0;


}