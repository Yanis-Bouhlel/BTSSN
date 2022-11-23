//
// Created by Yanis on 23/11/2022.
//

#ifndef ALGORITHM_TRI_H
#define ALGORITHM_TRI_H


class Tri {
private :
    int size ;
    int save, min ;
    int x, j ;
    int pivot, inf, sup ;
public :
    Tri() ;
    int Size(int size) ;
    void TriSelect(int tab[], int size);
    void TriInsert(int tab[], int size);
    void Affichage(int tab[], int size);
};



#endif //ALGORITHM_TRI_H
