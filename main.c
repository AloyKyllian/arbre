#include <stdio.h>
#include <stdint.h>

#include "arbre.h"

void main(){
ARBRE a;
int e;


a=INIT_ARBRE();

a=AJOUT_DS_Arbre(a,10);
a=AJOUT_DS_Arbre(a,1);
a=AJOUT_DS_Arbre(a,0);
a=AJOUT_DS_Arbre(a,2);
a=AJOUT_DS_Arbre(a,15);
a=AJOUT_DS_Arbre(a,90);
a=AJOUT_DS_Arbre(a,9);


AFFICHE_ARBRE(a);


a=ENLEVER_MIN_DE_ARBRE(a,&e);


printf("le chiffre supr c'est %d\r\n",e);

AFFICHE_ARBRE(a);

a=ENLEVER_MIN_DE_ARBRE(a,&e);

printf("le chiffre supr c'est %d\r\n",e);

AFFICHE_ARBRE(a);

a=ENLEVER_MIN_DE_ARBRE(a,&e);

printf("le chiffre supr c'est %d\r\n",e);

//AFFICHE_ARBRE(a);

a=ENLEVER_MIN_DE_ARBRE(a,&e);
printf("le chiffre supr c'est %d\r\n",e);

a=ENLEVER_MIN_DE_ARBRE(a,&e);

printf("le chiffre supr c'est %d\r\n",e);

a=ENLEVER_MIN_DE_ARBRE(a,&e);

printf("le chiffre supr c'est %d\r\n",e);


AFFICHE_ARBRE(a);


}