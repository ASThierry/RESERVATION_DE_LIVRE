#include <iostream>
#include "Livre.h"
#include "Bibliotheque.h"

int main(){

    // Création de Livre
    Livre *l1 = new Livre("tortu","Thierry",2025,50,true);
    l1->infoLivre();
    Livre *l2 = new Livre("tortue rue","Timeo",2006,147,true);
    Livre *l3 = new Livre("byper","Best",2006,0,true);
    l2->infoLivre();
    
    // Creation de Bibliotheque
    Bibliotheque * bb= new Bibliotheque();
    bb->ajouterLivre(*l1);
    bb->ajouterLivre(*l2);
    bb->ajouterLivre(*l3);
    bb->afficheLivre();
    bb->afficheLivreLibre(false);

}