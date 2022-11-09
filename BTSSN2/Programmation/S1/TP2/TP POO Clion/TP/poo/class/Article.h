//
// Created by bouhlel_y2 on 11/9/2022.
//

#ifndef POO_ARTICLE_H
#define POO_ARTICLE_H
#include <cstring>
#include "iostream"
using namespace std ;

class Article{
protected :
    string titre ;
    double prix ;
public :
    Article(string title , double price);
    Article(const Article &) ;
    void setPrix(double price) ;
    void setTitre(string title);
    void getPrix() ;
    void getTitre();
    void getFullArticle();

};


#endif //POO_ARTICLE_H
