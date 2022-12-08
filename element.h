#ifndef ELEMENT_H
#define ELEMENT_H

#include <stdlib.h>
#include <stdio.h>
typedef float ELEMENT;

void affiche_ELEMENT(ELEMENT e);
void saisir_ELEMENT(ELEMENT *ptr);
void affect_ELEMENT(ELEMENT *ptr,float valeur);
int compare_ELEMENT(ELEMENT e1, ELEMENT e2);

#endif
