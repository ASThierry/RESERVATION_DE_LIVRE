#include <iostream>
#include "Bibliotheque.h"
#include <vector>

void Bibliotheque::ajouterLivre(Livre nouvLivre ){

    _livres.push_back(nouvLivre);
    
}


void Bibliotheque::afficheLivre(){  

    for(size_t i =0; i<_livres.size(); i++){
        std::cout<<"Livre "<< i <<" : " << _livres[i].getTitre() << std::endl;
    }

}


void Bibliotheque::afficheLivreLibre(bool status){
    int nbLibre=0;
    for(size_t i =0; i<_livres.size(); i++){

       if(status== false && _livres[i].getStatus()==1 && _livres[i].getPrix()==0){
          std::cout<<"liste des livre disponible :"<< _livres[i].getTitre();
          nbLibre++;
       }

       if(status== true && _livres[i].getStatus()==1){
          std::cout<<"liste des livre disponible :"<< _livres[i].getTitre()<<" ,";
          nbLibre++;
       }

    }

    std::cout<< " "<<std::endl;
    std::cout<< "Nombre totale de livre disponible est "<< nbLibre<<std::endl;
}