int credits;//variables globales
int mise;//variables globales

//prototypes
void Test_poker(char *couleurl[4],char *carte[13] ,int coul[4] ,int valeur[13] ,int tab[4][13]); 
void Poker_nouvelle_partie(int nature, int val, char *couleur1[4], char *carte[13] ,int coul[4] ,int valeur[13] ,int tab[4][13]);
void Analyse_main (int nature,int val,int coul[4],int valeur[13],int tab[4][13]); 
void Distribution_carte (char *couleur1[4],char *carte[13],int coul[4],int valeur[13], int tab[4][13]) ; 
void distri_une_carte(char *couleurl[4],char *carte[13],int f,int coul [4],int valeur[13],int tab[4][13]); 
void Sauvegarde_fichier(int save);

