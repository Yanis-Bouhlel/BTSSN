//
// Created by bouhlel_y2 on 11/9/2022.
//

#ifndef POO_CLIENT_H
#define POO_CLIENT_H

#include <cstring>
#include "iostream"
using namespace std ;

class Client {
protected :
    string nom ;
    int numClient ;
public :
    Client(string name,int num);
    void getFicheClient();
};


#endif //POO_CLIENT_H
