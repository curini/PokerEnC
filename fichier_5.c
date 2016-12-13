#include  <stdio.h> /* gestion des entrées  sorties  */ 
#include  <windows.h>  /* gestion systène  */ 
#include  <stdlib.h> /*  manipulation de chaines  de caractères  et tableaux  */
#include  <string.h>  /*  manipulation de caractères  */ 
#include  <ctype.h> /*  nanipu'lation  caractères  */    
#include  <time.h>  /*  gestion des fonctions aléatoires */ 
#include  <math.h>  /*foncti_ons  et constantes  mathématiques  */
#include  "Fichier_001.h" 

void  Test_poker(char *couleurl[4],char *carte[13] ,int coul[4] ,int valeur[13] ,int tab[4][13]) 
{ 
           int f=0, h=0,l=0,nature=0,val=0,a=0, b=0; 
            printf("\n\n mise minimum de depart:5 euros") ; 
           printf("\n\n\n deposer  votre  mise  : ") ; 
           scanf("%d",&mise); //nise du joueur 
           credits=credits-mise;//on  enleve la mise du  pot du joueur 
            printf("\n\nvotre credits est de %d euros",credits);
            if  (mise <5)//si mise inferieur à 5 euros  1e joueur  ne peut pas jouer 
           { 

                        printf("\n\n Votre mise n'est pas suffisante"); 
						credits=credits+mise;
           }
           else 
           { 
                       printf("\n\nDistribution des cartes")  ; 
                      for(f=0; f<5; f++) 
                       {        printf("\n\n\t  Taper la valeur de la carte(0=\"As\",1=\"2\" , .. 11=\"Dame\"  ,12=\"Roi\")\n") ; 
                                scanf("%d",&h); 
                                printf("\n\n\t  Taper la couleur de la carte (0=\"pique\", 1=\" carreau\", 2=\"coeur\"3=\"trefle\" )\n " ) ; 
                                scanf("%d",&l); 
                                tab[l][h]=1+f; 
								coul[l]=coul[l]+1;  
                                valeur [h] =valeur[h] +1; 
                                printf("\ncarte  %d: %s de  %s",f+1,carte[h],couleurl[l]);  
}
                      Analyse_main(nature,val,coul,valeur, tab) ; 
                      for   (a=0;a<13; a++) //iniiiali6ation  du tâ6leau  valeur 
                      { 
                                 valeur[a] =0; 
                      }

                      for  (b=0;b<4;b++)  //initialisation  du tableau couleur 
                      { 
                                  coul[b]=0; 

                      }
						printf("\n\nvotre  credits est de %d euros",credits);//affiche le 
 

			}
}

