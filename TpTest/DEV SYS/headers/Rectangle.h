//
// Created by bouhlel_y2 on 11/23/2022.
//

#ifndef DEV_RECTANGLE_H
#define DEV_RECTANGLE_H


class Rectangle {
protected:
    double largeur;
    double longueur;
public:
    Rectangle();
    Rectangle(double larg, double lng);
    void setLongueur(double lng);
    void setLargeur(double larg);
    double getLongueur();
    double getLargeur();
    virtual double perimetre();
    double surface();
    virtual void affichage();
};


#endif //DEV_RECTANGLE_H
