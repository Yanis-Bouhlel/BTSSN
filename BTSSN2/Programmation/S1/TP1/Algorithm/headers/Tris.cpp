//
// Created by bouhlel_y2 on 11/23/2022.
//

#include "Tris.h"

int Tri::Size(int &tab){
    return sizeof(tab) ;
}

Tri::Tri() {
    this->min = 0 ;
    this->save = 0 ;
    this->size = 0 ;
}


int Tri::TriSelect(int *tab) {
    //this->size = Size(tab);
    for(int i = 0 ; i < (size - 2) ; i++)
    {
        this->min = i ;
        for (int j = i+1; j < this->size-1 ; ++j) {
            if(tab[j] < tab[min])
            {
                min = j ;
            }
        }
        if (min != i)
        {
            this->save = tab[i];
            tab[i] = tab[min];
            tab[min] = this->save ;
        }
    }
    return *tab ;
}
