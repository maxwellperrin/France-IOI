/*CONSTRAINTS
La longueur de chaque titre de livre et de chaque résumé n'excèdera jamais 1000 caractères.
INPUT

Sur la première ligne, un entier nbLivres, le nombre total de livres.

Sur la deuxième ligne, un entier longueurMinimale, la longueur minimale acceptable pour un résumé de livre.

Les 2 * nbLivres lignes suivantes contiennent, de manière alternée, un titre de livre et le résumé associé.
OUTPUT

Vous devez afficher, à raison d’un par ligne, le titre des livres dont le résumé n'est pas assez long, c'est-à-dire dont la longueur n'est pas au moins égale à longueurMinimale.
*/

#include <stdio.h>
#include <string.h>

int   main()
{
   int   nbBooks;
   scanf("%d", &nbBooks);
   
   int   minimalLenght;
   scanf("%d", &minimalLenght);
   getchar();
   
   int   i;
   i = 0;
   
   while(i < nbBooks)
   {
      char   titleBook[1001];
      scanf("%[^\n]", titleBook);
      getchar();
      
      char   summary[1001];
      scanf("%[^\n]", summary);
      getchar();

      
      int   length_summary = strlen(summary);
      
      
      if(length_summary < minimalLenght)
      {
         printf("%s\n", titleBook);
      }
      i++;
    }
    return 0;
}


//Solution France IOI 

/*Algorithme

On va utiliser une boucle pour lire le titre et le résumé de chacun des livres. On teste alors si la longueur du résumé est suffisante et si ce n'est pas le cas, on affiche le titre du livre.*/

#include <stdio.h>
#include <string.h>
int main()
{
   int nbLivres, longueurMinimale;
   char titre[1001], resume[1001];
   scanf("%d", &nbLivres);
   scanf("%d\n", &longueurMinimale);
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      scanf("%[^\n]\n", titre);
      scanf("%[^\n]\n", resume);
      if (strlen(resume) < longueurMinimale)
      {
         printf("%s\n", titre);
      }
   }
}
