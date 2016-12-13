#include  <stdio.h>  /* gestion  des entrees sorties */
#include <windows.h>  /*  gestion système  */ 
#include  <stdlib.h> /*  manipulation  de châines de caractères  et tableaux  */ 
#include <string.h> /* naninipulation  de caractères  */
#include  <ctype.h>  /* manipûlation caractères  */                                 
#include <time.h>  /*  gestiôn des fonctions aléatoires */ 
#include  <math.h> /* fonctions et constantes  mathématiqires  */ 
#include  "Fichier_001.h"  

void Distribution_carte(char *couleur1[4],char *carte[13],int coul[4],int valeur[13], int tab[4][13]){//prosramme  distiibution cinq cartes  aleatoires
	int j=0;  //initialisation  des variables 
    int  i=0,f=0;
           for  (f=0;f<5;f++) //        *r  Fe > ('ârIe 
           {         i=rand()  % 4;//tire  au  hasard un chiffre compris entre 0 et 3 
		             j=rand()  %  13;//tjre au  hasard un chiffre  compris entre 0 et 12 
                     while((tab[i][j]==1)||(tab[i][j]==2)||(tab[i][j]==3)||(tab[i][j]==4) )//eviter de tirer  la meme  carte
					 {
						 i=rand() % 4;//ttre  au  hasard un chiffre compris entre et3
					  j=rand()  %  13;//tjre au  hasard un chiffre  compris entre 0 et 12
					 }
					tab[i][j]=	1+f;
					coul[i]=coul[i]+1;
					valeur[j]=valeur[j]+1;
					printf("\n Carte %d: %s de %s ",f+1,carte[j],couleur1[i]);
		   }
}

