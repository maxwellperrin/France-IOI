/*CONSTRAINTS

Il y a toujours 6 titres de livres (et donc 6 noms d’auteurs) sur chaque fiche.
Les titres de livres et les noms d’auteurs font toujours moins de 200 caractères de long.
INPUT

Pour chacun des 6 livres, une ligne contenant le nom de l’auteur, et une ligne contenant le titre du livre.

OUTPUT

Pour chacun des livres, vous devez afficher sur une ligne le titre du livre, puis sur la ligne suivante le nom de l’auteur.
*/

#include<stdio.h>
#include<string.h>

int   main()
{
   int i;
   i = 0;
   while(i < 6)
   {
      char   author[201];
      scanf("%[^\n]", author);
      getchar();
      
      char   title_book[201];
      scanf("%[^\n]", title_book);
      getchar();
      
      printf("%s\n", title_book);
      printf("%s\n", author);
      i++;
   }
   return 0;
}


// Solution France IOI 

/*
L’algorithme à utiliser est simple, car il suffit de faire 6 fois (donc à l’aide d’une boucle) les opérations suivantes :
Lire la ligne contenant le nom de l’auteur
Lire la ligne contenant le titre du livre
Afficher le titre du livre
Afficher le nom de l’auteur
*/

#include <stdio.h>
 
int main()
{
   for (int idLivre = 0; idLivre < 6; idLivre = idLivre + 1)
   {
      char nomAuteur[201];
      char titreLivre[201];
      scanf("%[^\n]\n", nomAuteur);
      scanf("%[^\n]\n", titreLivre);
      printf("%s\n", titreLivre);
      printf("%s\n", nomAuteur);
   }
}

