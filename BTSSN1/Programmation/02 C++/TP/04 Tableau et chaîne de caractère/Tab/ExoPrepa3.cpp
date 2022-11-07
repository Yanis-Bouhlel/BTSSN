#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main()
{
    string phrase ;
    cout<<"entrez une phrase :" ;
    cin >>phrase;
    string tmp_s = phrase ;
    cout <<tmp_s <<endl ;

    string tmp_s_reversed (tmp_s.rbegin(), tmp_s.rend()) ;
    cout << tmp_s_reversed << endl ;
    

    return 0;
}