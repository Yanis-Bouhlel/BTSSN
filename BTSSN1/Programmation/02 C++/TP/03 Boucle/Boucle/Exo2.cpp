#include <iostream>
using namespace std;

int main() {

int i = 0 ;
int n ;


do
{   
    std::cout<<"Quel est votre nombre ? \n";
    std::cin>> n ;

    
    for (i = n ; i > 0 ; i = i - 1)

        {
            cout<< i <<endl;

        }


}

while(1) ;

return 0 ;

}