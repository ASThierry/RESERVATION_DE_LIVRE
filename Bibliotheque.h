#include <vector>
#include "Livre.h"
#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
 class Bibliotheque
 {
 protected:
 std::vector<Livre>& livres;
 public:
    void ajouterLivre(Livre &nouvLivre);
    void afficheLivre();
    void afficheLivreLibre(bool status);
 };
 
#endif