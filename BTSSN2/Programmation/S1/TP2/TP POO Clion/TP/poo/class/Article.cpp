//
// Created by bouhlel_y2 on 11/9/2022.
//

#include "Article.h"
#include <cstring>
#include "iostream"

using namespace std ;

Article::Article(std::string title, double price)
{
    this->prix = price ;
    this->titre = title ;
}

Article::Article(const Article &article) {
    this->prix = article.prix ;
    this->titre = article.titre ;
}

void Article::setTitre(string title) {
    this->titre = title;
    cout << this->titre ;
}

void Article::setPrix(double price) {
    this->prix = price ;
    cout << this->prix ;
}

void Article::getPrix() {
    cout << this->prix ;
}

void Article::getTitre() {
    cout << this->titre ;
}

void Article::getFullArticle() {
    cout << "------------------------------------------------------------" << endl ;
    cout << this->titre << " | " << this->prix << endl ;
}