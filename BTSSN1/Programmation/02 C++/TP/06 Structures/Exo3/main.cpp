#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    struct Operation
    {
        string villeD;
        string villeA;
        string villeDv;
        string villeAv;
        bool VilleDb = false;
        bool VilleAb = false;
        int distance1 = 0;
        int distance2 = 0;
        int distanceFinal = 0;
    };

    struct mqt
    {
        string VilleD;
        string VilleA;
        int distance;
    };
    int i, y, f;

    mqt trajet[10];
    Operation op;

    trajet[0].VilleD = "Liege";
    trajet[0].VilleA = "Luxembourg";
    trajet[0].distance = 155;

    trajet[1].VilleD = "Luxembourg";
    trajet[1].VilleA = "Nancy";
    trajet[1].distance = 121;

    trajet[2].VilleD = "Nancy";
    trajet[2].VilleA = "Dijon";
    trajet[2].distance = 201;

    trajet[3].VilleD = "Dijon";
    trajet[3].VilleA = "Beaune";
    trajet[3].distance = 45;

    trajet[4].VilleD = "Beaune";
    trajet[4].VilleA = "Lyon";
    trajet[4].distance = 157;

    trajet[5].VilleD = "Lyon";
    trajet[5].VilleA = "Orange";
    trajet[5].distance = 198;

    trajet[6].VilleD = "Orange";
    trajet[6].VilleA = "Narbonne";
    trajet[6].distance = 185;

    trajet[7].VilleD = "Narbonne";
    trajet[7].VilleA = "Perpignan";
    trajet[7].distance = 64;

    trajet[8].VilleD = "Perpignan";
    trajet[8].VilleA = "Le Boulou";
    trajet[8].distance = 22;

    trajet[9].VilleD = "Le Boulou";
    trajet[9].VilleA = "Barcelone";
    trajet[9].distance = 160;

    cout << endl;
    cout << "entrez la ville de depart : ";
    cin >> op.villeD;
    for (i = 0; i < 10; i++)
    {
        if (op.villeD == trajet[i].VilleD)
        {
            op.villeDv = op.villeD;
            op.VilleDb = true;
        }
    }
    if (op.VilleDb == false)
        {
            op.villeDv = "inexistante ! ";
            op.VilleDb = false;
        } 

    cout << endl;
    cout << "entrez la ville d'arriver : ";
    cin >> op.villeA;
    for (i = 0; i < 10; i++)
    {
        if (op.villeA == trajet[i].VilleA)
        {
            op.villeAv = op.villeA;
            op.VilleAb = true;
        }
    }

    if (op.VilleAb == false)
        {
            op.villeAv = "inexistante ! ";
            op.VilleAb = false;
        } 
    
    
        for (i = 0; i < 10; i++)
        {
            if (op.villeDv == trajet[i].VilleD)
            {

                op.distance1 = trajet[i].distance;
                break;
            }
        }

    for (y = i; y < 10; y++)
    {
        if (op.villeAv == trajet[y].VilleA)
        {
            for (f = y; f > i - 1; f--)
            {
                op.distance2 = op.distance2 + trajet[f].distance;
                op.distanceFinal = op.distance2;
            }
            break;
        }
    }

    cout << "La Ville de depart est " << op.villeDv << endl;
    cout << "La distance pour arriver a : " << op.villeAv << " est " << op.distanceFinal << endl;
    cout << endl;
    return 0;
}
