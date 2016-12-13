#include  <stdio.h> /* gestion des entrées  sorties  */ 
#include  <windows.h>  /* gestion systène  */ 
#include  <stdlib.h> /*  manipulation de chaines  de caractères  et tableaux  */
#include  <string.h>  /*  manipulation de caractères  */ 
#include  <ctype.h> /*  nanipu'lation  caractères  */    
#include  <time.h>  /*  gestion des fonctions aléatoires */ 
#include  <math.h>  /*foncti_ons  et constantes  mathématiques  */
#include  "Fichier_001.h" 

void distri_une_carte(char *couleurl[4],char *carte[13],int f,int coul [4],int valeur[13],int tab[4][13]){
	int i=0;
	int j=0;
	i = rand() % 4;
	j = rand() % 13;
	while((tab[i][j]==1)||(tab[i][j]==2)||(tab[i][j]==3)||(tab[i][j]==4)||(tab[i][j]==5)){
		i = rand() % 4;
		j = rand() % 13;
	}
	tab[i][j] = 1+f;
	coul[i]=coul[i]+1;
	valeur[j]=valeur[j]+1;
	printf("\nCarte %d: %s de %s",f+1,carte[j],couleurl[i]);
}

