//
// Created by bouhlel_y2 on 11/9/2022.
//

#ifndef POO_LIGNE_H
#define POO_LIGNE_H
#include "Article.h"
#include <cstring>
#include "iostream"
using namespace std ;

class Ligne {
protected :
    int long quantite ;
public :
    Ligne(Article &article);
};

#endif //POO_LIGNE_H
