#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED

#include <iostream>
#include <vector>

class Etudiant
{
    public:

        std::string nom;
        std::string prenom;
        int cne;
        std::vector<int>notes;
        void affiche(std::vector<int>notes,std::string nom,std::string prenom,int cne);
        int getMaxNote(std::vector<int>notes);
        int getMinNote(std::vector<int>notes);
        float getMoyenneNote(std::vector<int>notes);

    private:

};

#endif // ETUDIANT_H_INCLUDED
