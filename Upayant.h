#include "Utilisateur.h"
#include "Livre.h"
#ifndef UPAYANT_H
#define UPAYANT_H

 class Upayant:public Utilisateur
 {
  public:
    Upayant(std::string nom,std::string prenom, int age):Utilisateur(nom,prenom,age){};
    ~Upayant(){};
    bool peutAccederLivre();
 };
 
#endif