//
// Created by Yanis on 23/11/2022.
//
#include "iostream"
#include "Tri.h"
using namespace std ;

Tri::Tri() {
 this->min = 0 ;
 this->size = 0 ;
 this->save = 0 ;
}

int Tri::Size(int size) {
    this->size = size ;
    return this->size ;
}

void Tri::TriSelect(int *tab, int size) {
    Size(size) ;
    for(int i = 0 ; i < (this->size - 1) ; i++)
    {
        this->min = i ;
        for (int j = i+1; j < this->size ; ++j) {
            if(tab[j] < tab[min])
            {
                this->min = j ;
            }
        }
        if (this->min != i)
        {
            this->save = tab[i];
            tab[i] = tab[min];
            tab[min] = this->save ;
        }
    }

}

void Tri::Affichage(int *tab, int size) {
    for (int i = 0; i < size; ++i) {
        cout << tab[i] << "\t" ;
    }
}
