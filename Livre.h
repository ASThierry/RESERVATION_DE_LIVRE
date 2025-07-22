#include <iostream>
#ifndef LIVRE_H
#define LIVRE_H
/**
 * Cette class permet de cree des livres.
 *
 */
 class Livre
 {
 protected:
    std::string _titre;
    std::string _auteur;
    int _annee_edition;
    float _prix;
    bool _status;
 public:
    Livre(std::string titre, std::string auteur,int annee_edition,float prix,bool status):_titre(titre),_auteur(auteur),_annee_edition(annee_edition),_prix(prix),_status(status){}
    ~Livre(){}
    void infoLivre();
 };
 


#endif