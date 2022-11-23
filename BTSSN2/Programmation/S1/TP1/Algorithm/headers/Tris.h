//
// Created by bouhlel_y2 on 11/23/2022.
//

#ifndef ALGORITHM_TRIS_H
#define ALGORITHM_TRIS_H


class Tri {
private :
    int size;
    int min ;
    int save;

public :
    Tri();
    int Size(int &tab);
    int TriSelect(int *tab);
};


#endif //ALGORITHM_TRIS_H
