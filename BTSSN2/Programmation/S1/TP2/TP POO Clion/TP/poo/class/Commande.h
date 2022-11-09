//
// Created by bouhlel_y2 on 11/9/2022.
//

#ifndef POO_COMMANDE_H
#define POO_COMMANDE_H

#include "Ligne.h"
#include "Client.h"

#include <cstring>
#include "iostream"
using namespace std ;

class Commande {
protected :
    string reference ;
    string date ;
public :
    Commande(string ref, string fecha);
    void getCommande(Ligne &ligne, Client &client);
};


#endif //POO_COMMANDE_H
