#include  <stdio.h> /* gestion des entr�es  sorties  */ 
#include  <windows.h>  /* gestion syst�ne  */ 
#include  <stdlib.h> /*  manipulation de chaines  de caract�res  et tableaux  */
#include  <string.h>  /*  manipulation de caract�res  */ 
#include  <ctype.h> /*  nanipu'lation  caract�res  */    
#include  <time.h>  /*  gestion des fonctions al�atoires */ 
#include  <math.h>  /*foncti_ons  et constantes  math�matiques  */
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

