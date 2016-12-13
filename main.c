#include  <stdio.h>  /* gestion  des entrees sorties */
#include <windows.h>  /*  gestion système  */ 
#include  <stdlib.h> /*  manipulation  de châines de caractères  et tableaux  */ 
#include <string.h> /* naninipulation  de caractères  */
#include  <ctype.h>  /* manipûlation caractères  */                                 
#include <time.h>  /*  gestiôn des fonctions aléatoires */ 
#include  <math.h> /* fonctions et constantes  mathématiqires  */ 
#include  "Fichier_001.h" 

 int main(int argc,  char  *argv[])
 {
	char *couleur1[4] = {"pique","carreau","coeur","trefle"};
	char *carte[13] = {"As","2","3","4","5","6","7","8","9","10","Vallet","Dame","Roi"};  
	int  coul[4]={0};//initialisaiion des tableaux  
    int valeur[13]={0};                                                     
    int tab[4][13]={0}; 
	int choix=0;
	int nature=0;
	int val=0;
    int save=0; //  uarràble clu lûncttbn sdtrwbârJg 
    credits=100; //credits  du joueur  =l00  euros 
    srand (time (NULL))  ;//  initialisation  de  la variable  aleatoire 
    system("color  2f"); //  change  la couleur  de  la console  tdnO(Z=vert) police (f=blanc) 
	printf ("\n\n\t********************************************************************************\n");  
    printf("\t*  \t\t                                       \t\t\t\t *" ); 
    printf("\n\t* \t\t                                        \t\t\t *"); 
    printf("\n\t* \t\t\t Poker  Ferme                     \t\t\t      *"); 
    printf("\n\t* \t\t                                \t\t\t\t       *");
    printf("\n\t* \t\t                                \t\t\t\t      *");
	printf ("\n\n\t********************************************************************************\n"); 
    do 
         { 

                    printf("\n\n\t Test du jeu  Poker:1");  
                    printf ("\n\t Nouvelle partie:2") ; 
                    printf("\n\t Continuer la partie en cours ou chargee: 3"); 
					printf("\n\t Sauvegarder/Charger partie: 4");
                    printf("\n\t Quitter le jeu: 5\n\t "); 
                    scanf("%d",&choix);
                    switch  (choix)  
                         { 
                         case  1: 
                                      Test_poker(couleur1,carte,coul,valeur,tab);
                                      break;
                         case  2: 
                                      credits=100; 
									  Poker_nouvelle_partie(nature,val,couleur1, carte,coul,valeur, tab);
                                      break; 
                         case 3: 
									  Poker_nouvelle_partie(nature,val,couleur1, carte,coul,valeur, tab);
									  break;
                         case 4: 
                                      Sauvegarde_fichier(save);
                                      break;
                         case 5:                         
                                      return 0;
                                      break;
                         default: 
                                      printf("Vous avez tape  un mauvais numeros");
                                      break;
						 }
		 }
         while(choix!=5);  
		 system("PAUSE");
		 return 0;
 }

 