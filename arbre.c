#include "arbre.h"


ARBRE INIT_ARBRE()
{
	return NULL;
}



void AFFICHE_ARBRE(ARBRE a)
{
    if(!ARBRE_VIDE(a))
    {
    AFFICHE_ARBRE(a->ptr_gauche);
    printf("%d\n",a->element);
    AFFICHE_ARBRE(a->ptr_droite);
    }

}


int ARBRE_VIDE(ARBRE a)
{
	if(a==NULL)
		return 1;
	else
		return 0;
}

ARBRE AJOUT_DS_Arbre(ARBRE arbre, int e)//si arbre vide creer cellule et rajoute celulle sinon j'appelle a gauche ou a droite
{
    if(ARBRE_VIDE(arbre))
    {
        ARBRE c = malloc(sizeof(CELLULE));
	    if (!ARBRE_VIDE(c))
        {
            c->element=e;
            c->ptr_droite=NULL;
            c->ptr_gauche=NULL;
            return(c);
        }
	}
    else
    {
        if(arbre->element>e)
            arbre->ptr_gauche=AJOUT_DS_Arbre(arbre->ptr_gauche,e);
        else
            arbre->ptr_droite=AJOUT_DS_Arbre(arbre->ptr_droite,e);
    }
	return(arbre);
}


ARBRE ENLEVER_MIN_DE_ARBRE(ARBRE arbre,int*e)
{

    if(!ARBRE_VIDE(arbre))
    {
        if(!ARBRE_VIDE(arbre->ptr_gauche))
        {
            arbre->ptr_gauche=ENLEVER_MIN_DE_ARBRE(arbre->ptr_gauche,e);
        }
        else
        {
            ARBRE temp=arbre;
            (*e)=temp->element;
            if(!ARBRE_VIDE(arbre->ptr_droite)){
                arbre=arbre->ptr_droite;
            }
            else{
                arbre=NULL;
            }
            free(temp);
        }
    }
    return arbre;
}