//
// Created by bouhlel_y2 on 11/23/2022.
//

#ifndef DEV_CARRE_H
#define DEV_CARRE_H
#include "Rectangle.h"

class Carre : public Rectangle{
    public:
        Carre(double cote);
        double perimetre();
        void affichage();
};

#endif //DEV_CARRE_H
