#include <iostream>
using namespace std;

int main()
{
int i;
    int iteration();
    string reponse;

    do
    {
        iteration();
        std::cout << "valeur de i apres la boucle " << i << endl;
        std::cout << "Voulez vous recommencer a nouveau cette boucle ?";
        std::cin >> reponse;
    }

    while (reponse == "oui");

    return 0;
}
int iteration()
{
    int i ;
    for (i = 0; i < 100; i = i++);

    return i ;
}