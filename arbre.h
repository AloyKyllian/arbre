#ifndef ARBRE_H
#define ARBRE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct SCELLULE
{
    struct SCELLULE *ptr_gauche;
	int element;
	struct SCELLULE *ptr_droite;

}CELLULE;


typedef CELLULE* ARBRE;


ARBRE INIT_ARBRE();
void AFFICHE_ARBRE(ARBRE a);
int ARBRE_VIDE(ARBRE a);
ARBRE AJOUT_DS_Arbre(ARBRE a, int e);
ARBRE ENLEVER_MIN_DE_ARBRE(ARBRE arbre,int*e);



#endif
