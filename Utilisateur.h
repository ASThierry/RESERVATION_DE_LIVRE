#include <iostream>
#include "Livre.h"
#ifndef UTILISATEUR_H
#define UTILISATEUR_H
 class Utilisateur{
 protected:
    std::string _nom;
    std::string _prenom;
    int _age;
 public:
    Utilisateur(std::string nom,std::string prenom, int age):_nom(nom),_prenom(prenom),_age(age){};
    ~Utilisateur(){};
    void AfficheInfoU();
    bool peutacceterLivre(Livre &livre);
 };


#endif