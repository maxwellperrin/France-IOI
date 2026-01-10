/*
Ce que doit faire votre programme :

Votre programme doit lire le nombre de lignes et de colonnes de la feuille, puis le motif à afficher sous la forme d'un caractère. 
Il doit alors afficher le motif de sorte qu'il remplisse chaque cellule de la feuille.
*/
#include <stdio.h>
#include <unistd.h>


void square(int line, int column, char letter)
{
   int   i = 0;
   while(i < line)
   {   
      int j = 0;
      while(j < column)
      {
         write(1, &letter, 1);
         j++;
      }
      i++;
      write(1, "\n", 1);
   } 
   write(1, "\n", 1);     
}

int   main()
{
   int   line;
   scanf("%d", &line);
   
   int   column;
   scanf("%d", &column);
   
   char   letter;
   scanf(" %c", &letter);
   
   square(line, column, letter); 
}

//Solution France IOI

/*Algorithme

Nous faisons une fonction pour dessiner le rectangle : cette fonction prend trois paramètres, 
le nombre de lignes et de colonnes ainsi que le caractère à afficher, 
et elle dessine le rectangle dans deux boucles imbriquées comme nous avons déjà pu le faire précédemment.
*/

#include <stdio.h>
void dessinerRectangle(int nbLignes, int nbColonnes, char motif)
{
   for (int iLigne = 0; iLigne < nbLignes; iLigne = iLigne + 1)
   {
      for (int iCol = 0; iCol < nbColonnes; iCol = iCol + 1)
      {
         printf("%c", motif);
      }
      printf("\n");
   }
}
int main()
{
   int nbLignes, nbColonnes;
   char motif;
   scanf("%d%d %c", &nbLignes, &nbColonnes, &motif);
   dessinerRectangle(nbLignes, nbColonnes, motif);
}
