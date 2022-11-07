#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    char phrase[10], maj[10];
    int j, i, ascii[10];

    cout << "Tapez une phrase : ";
    cin.getline(phrase, 10);

    for (i = 0; i < strlen(phrase); i++)
    {
        ascii[i] = phrase[i];
        maj[i] = ascii[i] - 32;
        cout << maj[i];
}

    return 0;
}