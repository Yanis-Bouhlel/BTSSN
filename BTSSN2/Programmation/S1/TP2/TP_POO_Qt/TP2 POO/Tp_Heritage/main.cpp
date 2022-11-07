#include <iostream>
#include "vehicule.h"
#include "voiture.h"
#include "camion.h"
#include "scooter.h"

using namespace std;

int main()
{

        // CLASS VOITURE

        Voiture car1("Mercedes", "Noir", 350);
        Voiture car2 = Voiture(car1) ;
    cout << "Pour Commencer, \n \t LA CLASSE VOITURE : \n"<< endl;

        cout << "Constructeur 1 avec Parametre \n";
        cout << car1.getMarque() << endl ;
        cout << car1.getCouleur() << endl ;
        cout << car1.getVitesse() << endl;
        cout << endl ;

        cout << "Constructeur 2 de recopie \n\tcreer grace a l'adresse du premier constructeur\n";
        car2.setMarque("Audi");
        cout << car2.getMarque() << endl;
        car2.setCouleur("Vert");
        cout << car2.getCouleur() << endl;
        car2.setVitesse(250)  ;
        cout <<car2.getVitesse() << endl;
        cout << endl ;

        cout << "Valeur du premier constructeur inchanger\n" ;
        cout << car1.getMarque() << endl ;
        cout << car1.getCouleur() << endl ;
        cout << car1.getVitesse() << endl;
        cout << endl ;

        // CLASS CAMION

        Camion cam1("Peugeot", "Blanc", 250);
        Camion cam2 = Camion(cam1) ;
    cout << "Ensuite, \n \t LA CLASSE CAMION : \n" << endl;

        cout << "Constructeur 1 avec Parametre \n";
        cout << cam1.getMarque() << endl ;
        cout << cam1.getCouleur() << endl ;
        cout << cam1.getVitesse() << endl;
        cout << endl ;
        cout << "Constructeur de recopie sans utiliser de fonction \n";
        cout << cam2.getMarque() << endl ;
        cout << cam2.getCouleur() << endl ;
        cout << cam2.getVitesse() << endl;
        cout << endl ;

        cout << "Constructeur 2 de recopie \n\tcreer grace a l'adresse du premier constructeur\n";
        cam2.setMarque("Citroen");
        cout << cam2.getMarque() << endl;
        cam2.setCouleur("Bleu");
        cout << cam2.getCouleur() << endl;
        cam2.setVitesse(160)  ;
        cout <<cam2.getVitesse() << endl;
        cout << endl ;

        cout << "Valeur du premier constructeur inchanger\n" ;
        cout << cam1.getMarque() << endl ;
        cout << cam1.getCouleur() << endl ;
        cout << cam1.getVitesse() << endl;
        cout << endl ;

        // CLASS SCOOTER

        Scooter scot1("Yamaha", "Bleu", 200);
        Scooter scot2 = Scooter(scot1) ;
    cout << "Pour finir, \n \t LA CLASSE SCOOTER : \n"<< endl;

        cout << "Constructeur 1 avec Parametre \n";
        cout << scot1.getMarque() << endl ;
        cout << scot1.getCouleur() << endl ;
        cout << scot1.getVitesse() << endl;
        cout << endl ;
        cout << "Constructeur de recopie sans utiliser de fonction \n";
        cout << scot2.getMarque() << endl ;
        cout << scot2.getCouleur() << endl ;
        cout << scot2.getVitesse() << endl;
        cout << endl ;

        cout << "Constructeur 2 de recopie \n\tcreer grace a l'adresse du premier constructeur\n";
        scot2.setMarque("Xmax");
        cout << scot2.getMarque() << endl;
        scot2.setCouleur("Noir");
        cout << scot2.getCouleur() << endl;
        scot2.setVitesse(150)  ;
        cout <<scot2.getVitesse() << endl;
        cout << endl ;

        cout << "Valeur du premier constructeur inchanger\n" ;
        cout << scot1.getMarque() << endl ;
        cout << scot1.getCouleur() << endl ;
        cout << scot1.getVitesse() << endl;
        cout << endl ;

    return 0;
}
