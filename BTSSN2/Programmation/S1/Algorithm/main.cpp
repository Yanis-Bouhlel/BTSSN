#include <iostream>
#include "headers/Tri.h"
using namespace std ;
int main() {
    const int y = 10 ;
    int tab[y] = {28888,46658,1225,022,155,-456,789,458,99999,555};

    Tri monTri;
    monTri.TriSelect(tab, y);
    monTri.affichage(tab, y);
    cout << endl ;
    monTri.TriInsert(tab, y);
    monTri.affichage(tab, y) ;

    return 0;
}
