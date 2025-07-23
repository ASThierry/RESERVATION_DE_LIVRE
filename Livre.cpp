#include <iostream>
#include "Livre.h"
/*
    Cette fonction permet de donner les informations sur le livre et sa disponibilité.
*/
void Livre::infoLivre(){
    std::cout<<"Titre :"<< _titre << ",auteur :" << _auteur << ",année de publication "<< _annee_edition <<",prix "<<_prix <<"$ status 1 pour libre et 0 pour prêter: "<<_status <<std::endl;
}

std::string Livre::getTitre(){
    return _titre;
}

std::string Livre::getAuteur(){
    return _auteur;
}

bool Livre::getStatus(){
    return _status;
}

float Livre::getPrix(){
    return _prix;
}