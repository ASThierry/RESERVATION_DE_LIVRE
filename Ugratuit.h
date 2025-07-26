#include "Utilisateur.h"
#include "Livre.h"
#ifndef UGRATUIT_H
#define UGRATUIT_H 

 class Ugratuit:public Utilisateur
 {
   public:
      Ugratuit(std::string nom,std::string prenom, int age):Utilisateur(nom,prenom,age){};
      ~Ugratuit(){};
      bool peutAccederLivre();
 };

#endif