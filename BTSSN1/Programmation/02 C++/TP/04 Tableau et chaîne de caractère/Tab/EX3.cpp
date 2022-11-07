#include <iostream>
#include <cstring>
using namespace std;
string Binaire(int n)
{
    string r;
    while (n != 0)
    {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    return r;
}
int main()   
{
    int IP;
    char chaine[31];
    char oct1[4], mOct1[4];
    char oct2[4], mOct2[4];
    char oct3[4], mOct3[4];
    char oct4[4], mOct4[4];
    int pos[4], mpos[4], j, i, m, a;
    int octet1, mOctet1;
    int octet2, mOctet2;
    int octet3, mOctet3;
    int octet4, mOctet4;
    int choix, Doct1, Doct2, Doct3, Doct4;
    string CIDR;
    int Octet1[20],l,
        Octet2[20],z,
        Octet3[20],r,
        Octet4[20];
        char masque[31];

    cout << " Entrez une adresse IP : ";
    cin.getline(chaine, 16);
    cout << " Entrez un masque reseaux : ";
    cin.getline(masque, 16);
    cout << chaine << endl
         << masque << endl;

    for (i = 0; i <= 15; i++)
    {
        if (chaine[i] == '.')
        {
            pos[j] = i;
            j++;
        }
    }
    cout << "\n";
    cout << "La position du premier separateur est " << pos[0] << endl;
    cout << "La position du deuxieme separateur est " << pos[1] << endl;
    cout << "La position du dernier separateur est " << pos[2] << endl;

    strncpy(oct1, chaine, pos[0]);
    strncpy(oct2, chaine + pos[0] + 1, pos[1] - pos[0] - 1);
    strncpy(oct3, chaine + pos[1] + 1, pos[2] - pos[1] - 1);
    strncpy(oct4, chaine + pos[2] + 1, strlen(chaine) - pos[2]);

    cout << "\n";
    cout << "Le premier octet est " << oct1 << endl;
    cout << "Le deuxieme octet est " << oct2 << endl;
    cout << "Le troisieme octet est " << oct3 << endl;
    cout << "Le dernier octet est " << oct4 << endl;

    octet1 = atoi(oct1);
    octet2 = atoi(oct2);
    octet3 = atoi(oct3);
    octet4 = atoi(oct4);

    cout << "\n";
    for (a = 0; a <= 15; a++)
    {
        if (chaine[a] == '.')
        {
            mpos[m] = a;
            m++;
        }
    }
    cout << "\n";
    cout << "La position du premier separateur est " << mpos[0] << endl;
    cout << "La position du deuxieme separateur est " << mpos[1] << endl;
    cout << "La position du dernier separateur est " << mpos[2] << endl;

    strncpy(mOct1, chaine, mpos[0]);
    strncpy(mOct2, chaine + mpos[0] + 1, mpos[1] - mpos[0] - 1);
    strncpy(mOct3, chaine + mpos[1] + 1, mpos[2] - mpos[1] - 1);
    strncpy(mOct4, chaine + mpos[2] + 1, strlen(chaine) - mpos[2]);

    cout << "\n";
    cout << "Le premier octet est " << mOct1 << endl;
    cout << "Le deuxieme octet est " << mOct2 << endl;
    cout << "Le troisieme octet est " << mOct3 << endl;
    cout << "Le dernier octet est " << mOct4 << endl;

    mOctet1 = atoi(mOct1);
    mOctet2 = atoi(mOct2);
    mOctet3 = atoi(mOct3);
    mOctet4 = atoi(mOct4);

    cout << "\n";
    cout << "\n";

    if (octet1 < 128)
    {
        cout << "C'est une adresse IP de Classe A \n";
        CIDR = "/8";
    }
    else if (octet1 < 192)
    {
        cout << "C'est une adresse IP de Classe B \n";
        CIDR = "/16";
    }
    else if (octet1 < 256)
    {
        cout << "C'est une adresse IP de Classe C \n";
        CIDR = "/24";
    }

    cout << "\n";

    if (octet1 <= 0 || octet1 >= 255)
    {
        cout << "La valeur de l'octet 1 est incorrect";
    }
    else if (octet2 <= 0 || octet2 >= 255)
    {
        cout << "La valeur de l'octet 2 est incorrect";
    }
    else if (octet3 <= 0 || octet3 >= 255)
    {
        cout << "La valeur de l'octet 3 est incorrect";
    }
    else if (octet4 <= 0 || octet4 >= 255)
    {
        cout << "La valeur de l'octet 4 est incorrect";
    }
    else
    {
        cout << "L'adresse est correcte";
    }
    cout << "\n";

    cout << "Voulez vous voir le masque de l'adresse IP en : \n 1-Binaire    2-CIDR    3-Binaire Augmenter     4-Operation Logique\n";
    cout<< "je choisis le " ; cin >> choix;
    if (choix == 1)
    {
        cout << chaine << "\n"
             << masque << endl;
    }
    else if (choix == 2)
    {
        cout << chaine << CIDR << endl;
    }
    else if (choix == 3)
    {
        cout << chaine << "\n"
             << Binaire(octet1) << " " << Binaire(octet2) << " " << Binaire(octet3) << " " << Binaire(octet4) << endl;
    }
    else if (choix == 4)
    {
        Octet1[z] = octet1 ;
        Octet2[z] = octet2 ;
        Octet3[z] = octet3 ;
        Octet4[z] = octet4 ;
 /*      Binaire(Doct1) = Binaire(Octet1[z]) && Binaire(mOctet1);
        Binaire(Doct2) = Binaire(Octet2[z]) && mOctet2;
        Binaire(Doct3) = Binaire(Octet3[z]) && mOctet3;
        Binaire(Doct4) = Binaire(Octet4[z]) && mOctet4;
        cout << Binaire(Doct1) << " " << Binaire(Doct2) << " " << Binaire(Doct3) << " " << Binaire(Doct4) << endl;
   */ }

    return 0;
}
