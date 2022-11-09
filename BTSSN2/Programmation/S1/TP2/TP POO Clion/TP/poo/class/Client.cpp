//
// Created by bouhlel_y2 on 11/9/2022.
//

#include "Client.h"
#include <cstring>
#include "iostream"
using namespace std ;

Client::Client(string name, int num)
{
    this->nom = name ;
    this->numClient = num ;
}

void Client::getFicheClient() {
    cout << "------------------------------------------------------------" << endl ;
    cout << this->nom << " \t\t\t\t " << this->numClient << endl ;
    cout << "------------------------------------------------------------" << endl ;
}