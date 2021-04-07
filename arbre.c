#include "arbre.h"
#include <stdlib.h>

int est_vide(arbre a){
	if(a==creer_arbre_vide()){
		return 1;	
	}
	else{
		return 0;
	}
}

arbre creer_arbre_vide(){
	return NULL;
}

arbre creer_noeud(char c){
	arbre a;
	a=(arbre)malloc(sizeof(noeud));
	if(a==NULL){
		printf("Erreur allocation \n");
		exit(-1);
	}
	a=creer_arbre_vide();
	a->noeud=c;
	return a;
}

arbre creer_arbre(char c, arbre filsgauche,arbre filsdroit){
	arbre a;
	a=creer_arbre_vide();
	a->noeud=c;
	a->filsgauche=filsgauche;
	a->filsdroit=filsdroit;
	return a;
}

arbre inserer_fils_gauche(arbre a,arbre filsgauche){
	a->filsgauche=filsgauche;
	return a;
}

arbre inserer_fils_droit(arbre a,arbre filsdroit){
	a->filsdroit=filsdroit;
	return a;
}

void afficher_arbre(arbre a){
	if(a->filsgauche!=NULL){
		afficher_arbre(a->filsgauche);
	}
	else if(a->filsgauche==NULL){
		printf("%c\n",a->noeud);	
	}
	if(a->filsdroit!=NULL){
		afficher_arbre(a->filsdroit);
	}
	else if(a->filsdroit==NULL){
		printf("%c\n",a->noeud);	
	}
}

void affiche_arbre_graphique(){
}
int main(){
	arbre a;
}