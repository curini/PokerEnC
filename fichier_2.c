#include  <stdio.h>  /* gestion  des entrees sorties */
#include <windows.h>  /*  gestion système  */ 
#include  <stdlib.h> /*  manipulation  de châines de caractères  et tableaux  */ 
#include <string.h> /* naninipulation  de caractères  */
#include  <ctype.h>  /* manipûlation caractères  */                                 
#include <time.h>  /*  gestiôn des fonctions aléatoires */ 
#include  <math.h> /* fonctions et constantes  mathématiqires  */ 
#include  "Fichier_001.h" 

void Analyse_main (int nature,int val,int coul[4],int valeur[13],int tab[4][13]){
	
	        int r=0,g=0,h=0,l=0;
			int a=0;
            int  b=0; 
            int gain=0;
			 for(nature=0 ; nature<4 ; nature++) 
              {
				  while(coul[nature]==5) //ie que  I es ci nq cartes  sont de I a sign'if même  couleur  
                   {  
						  a=5;
					}

              }
              for(val=0; val <13 ;val ++) {

				  if((valeur[val]==1)&&(valeur[val]==2))//trois  cartes'identiques 
				  {
					  a=4;
				  }
				 if  (valeur[val]==3)//trois  cartes  identiques 
				 {
					 a=3;
				 }

                 if  (valeur[val]==2) //deux  cartes  identiques 
                 { 
                      b=b+1; 
                  }
                 if  (valeur[val]==4) //quatre  cartes  identiques 
                 {          
					a=2;
				}
			  }

                                if(a==2) {
									 printf("\nVous avez un carre"); 
                                     gain=500; 
								}

                                if(a==3) 
								{
									 printf("\nVous  avez un brelan"); 
                                     gain=10;
								}
                              
                                if(a==4) 
                                { 

                                      printf("\nVous avez une main  pleine"); 
                                      gain=100; 
                                }
                                if(a==5)
                                 { 
                                                printf("\nVous avez  une couleur") ; 
                                                gain=50; 
                                 }

                                 if(b==l) 
                                 { 

                                               printf("Vous avez une paire"); 
                                               gain=2; 
                                 }

                                 if(b>1) 
								 {
                                                printf("\nVous avez une double  paire"); 
                                                gain=5; 
								 }

                                 if ( (g==0)&&(a==0)&&(b==0) ) 
                                 { 
                                                printf("\nVous avez cinq cartes  deparaillees")  ; 
                                                gain=0; 
								 }
                                 printf("\n\nVotre  gain est de %d  euros",gain); 
                                 credits= (mise*gain) +credits ;
}