cmake_minimum_required(VERSION 3.28.3)

# Définir le nom et la version du projet
project(BiBLIOTHEQUE VERSION 1.0)

# Ajouter l'exécutable
add_executable(Bibliotheque main.cpp
 Livre.cpp Livre.h 
 Bibliotheque.cpp Bibliotheque.h
 Utilisateur.cpp Utilisateur.h
 Upayant.cpp Upayant.h
 Ugratuit.cpp Ugratuit.h
 )