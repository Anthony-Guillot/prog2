#ifndef ARBRE_H
#define ARBRE_H
#include <stdio.h>
typedef struct noeud *arbre;
struct noeud{
	char noeud;
	arbre pere;
	arbre filsgauche;
	arbre filsdroit;
}noeud;

int est_vide(arbre a);
arbre creer_arbre_vide();
arbre creer_noeud(char c);
arbre creer_arbre(char c,arbre filsgauche,arbre filsdroit);
arbre inserer_fils_fauche(arbre a,arbre filsgauche);
arbre inserer_fils_droit(arbre a, arbre filsdroit);
void afficher_arbre(arbre a);
void afficher_arbre_graphique(arbre a);
#endif