 #include <iostream>
 #include "Utilisateur.h"

 void Utilisateur::AfficheInfoU(){

    std::cout<<"Nom: "<< _nom <<",prenom: "<<_prenom <<", age: "<< _age<<std::endl;

 }
 Utilisateur::~Utilisateur() {
    
}