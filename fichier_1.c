#include  <stdio.h>  /* gestion  des entrees sorties */
#include <windows.h>  /*  gestion système  */ 
#include  <stdlib.h> /*  manipulation  de châines de caractères  et tableaux  */ 
#include <string.h> /* naninipulation  de caractères  */
#include  <ctype.h>  /* manipûlation caractères  */                                 
#include <time.h>  /*  gestiôn des fonctions aléatoires */ 
#include  <math.h> /* fonctions et constantes  mathématiqires  */ 
#include  "Fichier_001.h" 
 

void Poker_nouvelle_partie(int nature,int val,char *couleur1[4],char *carte[13],int coul[4],int valeur[13] ,int tab[4][13])
 {
	 
            int n,f,h,l =0;
            printf ("\n\nMise minimum de depart:  5 euros") ; 
            printf("\n\n\nDeposer votre  mise: "); 
            scanf  ("%d",&mise); //nise  du joueur 
            credits=credits-mise;
            printf("\nVotre credit est de %d euros",credits);
			if(mise<5){
				printf("\n\nVotre mise  n'est pas suffisante"); 
				credits=credits+mise;  //  t nntif  
			}
			else{
				printf ("\n\nDistribution des cartes")  ;
				Distribution_carte(couleur1,carte,coul,valeur,tab);
				printf ("\n\t* Menu:             Echange de cartes  *\n"); 
                printf("\n\n touche          1:vous gardez toutes  vos cartes"); 
                printf("\n\n touche          2:vous  changez toutes  vos cartes"); 
                printf("\n\n touche         3:vous  changez  une de vos cartes"); 
                printf("\n\n touche         4:vous changez  deux de vos  cartes"); 
                printf ("\n\n Touche        5:vous  changez trois de vos cartes")  ; 
                printf("\n\n  touche        6:vous changez  quatre  de vos cartes")  ; 
                printf("\n\n touche:  ") ;
                scanf  ("%d",&n); 
                switch  (n) {
					             case   1: //1e   çartes 
                                                Analyse_main(nature,val,coul,valeur,tab); 
                                                for (h=0;h<1-3;h++)  //initialisation  du tableau
												{          valeur [h]=0  ; // ,n,li(['se i, "tt lrit *, .l', ''" lû"'' 
												
												}
                                                 for(l=0;l<4;l++)  //initialisation  du tableau coul eur
												 {           
												 coul[l]=0; 
                                                 }
                                                 printf("\n\nVotre  credits  est de %d euros", credits) ; //affi che  I e    pot du joueur 
                                                 break; 
                                     case   2: //1e  ioueur echanqe toutes ses  cartes 
                                               for (h=0;h<13;h++) //net a zeros valeur[] 
                                                 { 
                                                    valeur[h] =0 ;
                                                 }   
												 for(l=0;l<4;l++)
                                                 { 
                                                     coul[l]=0;
                                                 } 
												 Distribution_carte(couleur1,carte,coul,valeur,tab);
												 Analyse_main(nature,val,coul,valeur,tab); 
												 for (h=0;h<13;h++) //net a zeros valeur[] 
                                                 { 
                                                    valeur[h] =0 ; 

                                                 }   
												 for(l=0;l<4;l++)
                                                 { 
                                                     coul[l]=0; 

                                                 } 
												 printf("\n\nVotre  credits  est de %d euros", credits) ; //affi che  I e    pot du joueur 
                                                 break; 
						
                                    case 3: 

                                                printf("\n\n  taper  la valeur de  la carte(0=\"As\", 1=\"2\",..11=\"Dame\",12=\"Roi\"\n") ;
												scanf("%d",&h);
                                                valeur[h]=0; //initialisation  la valeur carte 
                                                printf("\n\n taper la couleur de la carte (0=\" pique\", 1=\" carreau\",2=\"coeur\",3=\"trefle\" )\n");  
                                                coul [l]=0 ; //initialisation  la couleur  carte 
                                                for  (f=0;f<1;f++) 
                                                { 
													distri_une_carte(couleur1,carte, f,coul,valeur, tab); 
												}
												Analyse_main(nature,val,coul,valeur,tab); 
                                                for  (h=0;h<13;h++)  //lnitialisation du tableau 
                                                { 
                                                            valeur [h] =0; 
                                                } 
                                                for  (l=0; l<4; l++) //int t'ial i sati on du tabl eau 
                                                { 
                                                            coul[l]=0; 
                                                } 
                                                printf("\n\nVotre  credits est de %d euros",credits);//affiche  le pot du joueur 
                                                break; 

                                     case 4: 
                                                printf("\n\n taper la valeur de la carte (0=\"As\" ,1=\" 2\"  , . .  11=\"Dame\" ,  12=\"Roi \")\n")  ; 
                                                scanf("%d",&h); 
                                                valeur[h]=0; //initialisation  la valeur carte 
                                                 printf("\n\n taper la couleur de la carte(0=\"pique\",1-=\"carreau\",2=\"coeur\" , 3=\"trefle\")\n")  ; 
                                                 scanf("%d",&l)  ; 
                                                 coul[l]=0;//initialisation  la couleur carte 
                                                 printf("\n\n taper la valeur de la carte(0=\"As\", 1=\"2\",   .  11=\"Dame\",  12=\"Roi\")\n") ; 
                                                 scanf("%d",&h); 
                                                valeur[h]=0; //initialisation  la valeur carte 
                                                 printf("\n\n taper la couleur de la carte (0=\"pique\" , 1=\" carreau\" , 2=\"coeur\", 3=\"trefle\") \n  ") ; 
                                                 scanf("%d",&l); 
                                                 coul[l]=0;//initialisation  la couleur carte 
                                                 for  (f=0;f<2;f++){
													 distri_une_carte(couleur1,carte, f,coul,valeur, tab); 
												 }
												 Analyse_main(nature,val,coul,valeur,tab);          
                                                 for(h=0;h<13;h++) //-tnitialisation du tableau val eur
													{ 
                                                       valeur [h] =0 ; 
													}
												 for(l=0;l<4;l++) //ini ti al  i sat'i on du tabl eau couleur 
													{ 
                                                        coul[l]=0; 
													}
                                             printf("\n\nVotre credits est de %d  euros",credits);//affiche  1e pot. du joueur 
                                             break; 
                                  case 5:  
                                             printf("\n\n Taper la valeur de la carte(0=\"As\", 1=\'2\",.. 11=\"Dame\",12=\"Roi\")\n ");
											scanf("%d",&h);
                                             valeur[h]=0;  //iiinitialisation  la valeur carte 
                                             printf("\n\n taper la couleur de la carte (0=\"pique\" , 1=\" carreau\" , 2=\"coeur\", 3=\"trefle\") \n  ") ; 
											 scanf("%d",&l);
                                             coul[l]=0;//nitialisation  la couleur  carte 
                                             printf("\n\n taper la valeur de la carte(0=\"As\", 1=\"2\",   .  11=\"Dame\",  12=\"Roi\")\n") ;
											 scanf("%d",&h);
                                             valeur[h]=0;  //initialisation  la valeur carte 
                                             printf("\n\n taper la couleur de la carte (0=\"pique\" , 1=\" carreau\" , 2=\"coeur\", 3=\"trefle\") \n  ") ; 
											 scanf("%d",&l);
                                             coul[l]=0;//initialisation  la couleur carte 
											 printf("\n\n taper la valeur de la carte(0=\"As\", 1=\"2\",   .  11=\"Dame\",  12=\"Roi\")\n") ;
											 scanf("%d",&h);
                                             valeur[h]=0;  //initialisation  la valeur carte 
                                             printf("\n\n taper la couleur de la carte (0=\"pique\" , 1=\" carreau\" , 2=\"coeur\", 3=\"trefle\") \n  ") ; 
											 scanf("%d",&l);
                                             coul[l]=0;//initialisation  la couleur carte 
                                             for  (f=0;f<3;f++) 
                                             { 
												distri_une_carte(couleur1,carte,f,coul,valeur,tab) ; 
											 }
											 Analyse_main(nature,val,coul,valeur,tab); 
												for  (h=0;h<4;h++)
                                              { 
                                                         valeur[h] =0; 
                                              } 

                                              for  (l=0;l<4;l++)  //tnitialisation du tableau 
                                              { 
                                                         coul[l]=0; 
                                              } 
                                              printf("\n\nVotre  credits est de %d euros",credits);//affiche  le pot du joueur 
                                              break; 

                                   case  6: 

                                              printf("\n\n  taper  la valeur de  la carte (O=\"As\"  ,  1=\" 2\"..11=\"Dame\",12=\" Roi \"  )\n") ; 
                                              scanf("%d",&h)  ; 
                                              valeur[h]=0;  //'tnitialisation  la valeur carte 
                                              printf("\n\n taper la couleur de la carte (0=\"pique\",1=\"carreau\", 2=\"coeur\",3=\"t refle\" )\n " );
                                              scanf("%d",&l); 
                                              coul[l]=0;//tnitialisation  la couleur carte 
                                              printf("\n\n taper la valeur de la carte(O=\"As\",1=\'2\",..11=\"Dame\", 12=\"Roi\")\n"); 
                                              scanf("%d",&h); 
                                              valeur[h]=0; //initialisation  la valeur 
											  printf("\n\n taper la couleur de la carte (0=\"pique\",1=\"carreau\", 2=\"coeur\",3=\"t refle\" )\n " );
                                              scanf("%d",&l); 
                                              coul[l]=0;//tnitialisation  la couleur carte 
											printf("\n\n  taper  la valeur de  la carte (O=\"As\"  ,  1=\" 2\"..11=\"Dame\",12=\" Roi \"  )\n") ; 
                                              scanf("%d",&h)  ; 
                                              valeur[h]=0;  //'tnitialisation  la valeur carte 
                                              printf("\n\n taper la couleur de la carte (0=\"pique\",1=\"carreau\", 2=\"coeur\",3=\"t refle\" )\n " );
                                             scanf("%d",&l); 
                                             coul[l]=0;//tnitialisation  la couleur carte 
											printf("\n\n  taper  la valeur de  la carte (O=\"As\"  ,  1=\" 2\"..11=\"Dame\",12=\" Roi \"  )\n") ; 
                                              scanf("%d",&h)  ; 
                                              valeur[h]=0;  //'tnitialisation  la valeur carte 
                                              printf("\n\n taper la couleur de la carte (0=\"pique\",1=\"carreau\", 2=\"coeur\",3=\"t refle\" )\n " );
                                             scanf("%d",&l); 
                                             coul[l]=0;//tnitialisation  la couleur carte 
                                            for  (f=0;f<4;f++) 
                                            { 
												distri_une_carte(couleur1,carte,f,coul,valeur,tab) ; 
											}
											Analyse_main(nature,val,coul,valeur,tab); 
                                            for  (h=0;h<13;h++){
												valeur [h] =0; 
											} //iiniiialiiation  du tabl'efu 
                                            for  (l=0;l<4;l++) //initialisation  du tableau
                                            { 
                                                 coul[l]=0; 
                                            }
                                             printf("\n\nVotre credits est de %d euros",credits);//affiche  le pot du joueur 
                                            break; 
                                 default: 
                                             printf("\nVous avez taper un mauvais numeros\n");  
                                             break; 
				}  

				if(credits<5) 
				{ 

                       printf("\n\nVous n'avez  plus assez  d'argent,votre  partie est finie\n\n");  
                       system("pause") ; 
                       //return 0; 

				}
											  
				
			
			}			
	 
 }                                                                                        







