//
// Created by bouhlel_y2 on 11/9/2022.
//

#include "Commande.h"
#include "Ligne.h"
#include "Article.h"
#include "Client.h"

#include <cstring>
#include "iostream"
using namespace std ;

Commande::Commande(std::string ref, std::string fecha) {
    this->date = fecha ;
    this->reference = ref ;
}

void Commande::getCommande(Ligne &ligne, Client &client) {
    client.getFicheClient();
    ligne()
}