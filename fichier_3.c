#include  <stdio.h>  /* gestion  des entrees sorties */
#include <windows.h>  /*  gestion système  */ 
#include  <stdlib.h> /*  manipulation  de châines de caractères  et tableaux  */ 
#include <string.h> /* naninipulation  de caractères  */
#include  <ctype.h>  /* manipûlation caractères  */                                 
#include <time.h>  /*  gestiôn des fonctions aléatoires */ 
#include  <math.h> /* fonctions et constantes  mathématiqires  */ 
#include  "Fichier_001.h"  
FILE *fichier = NULL;

void Sauvegarde_fichier(int save){
	          printf("\ncas 1:sauvegarde  du pot") ; 
           printf("\ncas 2:chargement  du  pgt sauvegarder\ncas:") ; 
           scanf( "%d",&save);//  choix du loaeur
		   switch(save)
           { 

                      case 1: 
                                            printf("taper  la valeur  de votre  credits"); 
                                           scanf  ("%d" , &credits) ; 
                       fichier= fopen("fichierousauver.txt","w"); //ouverture  du fichier en  npde 
                                           fprintf(fichier,  "%d", credits)  ; 
                                            printf("%d",  credits)  ; 
                                           fclose(fichier) ; 
                                 break; 

                      case 2: 
								fichier =  fopen  ("fichierousauver.txt",  "r") ;//  ouverture en  du fichier  mode  lecture 
                                 fscanf(fichier, "%d", &credits)  ; 
                                 printf("%d" , credits)  ; 
                                 fclose(fichier) ; 
                                 break; 

                      default: 
                                 printf("choix non valable") ; 
                                 break; 	
		   }	
}

 