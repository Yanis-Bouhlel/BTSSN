#include <iostream>
#include "class/Ligne.h"
using namespace std ;

int main() {
    Article art1("Le titre de l'article", 19.99);
    Ligne ligne1(art1);
    Article art2(art1);
    Ligne l2(art2);
    return 0;
}
