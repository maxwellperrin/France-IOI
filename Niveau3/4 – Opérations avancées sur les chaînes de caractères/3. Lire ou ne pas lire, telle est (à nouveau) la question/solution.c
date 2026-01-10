/*Sur une étagère sont alignés tous les livres qui l’intéressent. 
Chaque mois, cette personne prend le premier livre de l’étagère, 
puis le second et ainsi de suite jusqu’à la fin. 
Seulement, elle ne lira un livre que si son titre est situé, selon l’ordre alphabétique, après chacun des livres qu’elle a lus pendant le mois. 
Si ce n’est pas le cas, elle enlève le livre de l’étagère, sans le lire.
Étant donnée la liste de titres de livres possibles pour le mois suivant, 
donnés dans l’ordre où ils apparaissent dans l’étagère, 
vous devez déterminer lesquels elle va lire.

TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

Chaque titre de livre contiendra au plus 100 caractères.
INPUT

Sur la première ligne, un entier nbLivres, le nombre total de livres.
Les nbLivres lignes suivantes contiennent chacune un titre de livre.
Les titres ne contiennent que des lettres majuscules ou des espaces.
OUTPUT

La liste des titres respectant la règle donnée dans l’énoncé.
EXAMPLE

input:
8
ANNA KARENINE
JACQUES LE FATALISTE ET SON MAITRE
DIX PETITS NEGRES
CENT ANS DE SOLITUDE
LA PESTE
LA FERME DES ANIMAUX
SUR LA ROUTE
SA MAJESTE DES MOUCHES
output:
ANNA KARENINE
JACQUES LE FATALISTE ET SON MAITRE
LA PESTE
SUR LA ROUTE*/

#include <stdio.h>

void upperletter(char *character)
{
   int i;
   i = 0;
   
   while(character[i] != '\0')
   {
      if(character[i] >= 'a' && character[i] <= 'z')
      {
         character[i] = character[i] - 'a' + 'A';
      }
      i++;  
   }
}

void   my_strcpy(char *dest, const char *src)
{
   int i; 
   i = 0;
   while(src[i] != '\0')
   {
      dest[i] = src[i];
      i++;
   }
   dest[i] = '\0';
}

int   my_strcmp(char *s1, char *s2)
{
   int i;
   i = 0;
   
   while(s1[i] != '\0' && s2[i] != '\0')
   {
      if(s1[i] < s2[i])
      {
         return -1;
      }
      if(s1[i] > s2[i])
      {
         return 1;
      }
      i++;
   }
   
   if(s1[i] == '\0' && s2[i] != '\0') return -1;
   if(s1[i] != '\0' && s2[i] == '\0') return 1;
   
   return 0;
}

void sort_title(char titleBooks[][101], int n)
{
   char lastDisplayed[101];
  
   int i;
   i = 0;
   while(i < n)
   {
      if(my_strcmp(titleBooks[i], lastDisplayed) > 0)
      {
         printf("%s\n", titleBooks[i]);
         my_strcpy(lastDisplayed, titleBooks[i]); 
      }
      
      
      i++;
   }
}

int main()
{
   int numBooks;
   scanf("%d", &numBooks);
   
   char titleBooks[numBooks][101];
   
   int i;
   i = 0;
   
   while(i < numBooks)
   {
      scanf(" %101[^\n]", titleBooks[i]);
      upperletter(titleBooks[i]);
      i++;
   }
   
   
   sort_title(titleBooks, numBooks);

   return 0;
}

//Solution France IOI 

/* Algorithme

On ne va donc afficher un titre de livre que s’il est situé après, selon l’ordre alphabétique, tous les titres qu’on a affichés précédemment, 
ce qui revient à dire qu’il est situé après le dernier titre affiché, étant donné que chaque titre est forcément situé après le précédent.
Il faut donc mémoriser le dernier titre affiché et si un nouveau titre est situé après (selon l’ordre alphabétique) ce titre mémorisé, 
alors on affiche le titre et on met à jour le titre mémorisé.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int nbLivres;
   scanf("%d\n", &nbLivres);
   char plusGrandTitre[101] = "";
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      char titreLivre[101];
      scanf("%[^\n]\n", titreLivre);
      if (strcmp(titreLivre, plusGrandTitre) > 0)
      {
         strcpy(plusGrandTitre, titreLivre);
         printf("%s\n", titreLivre);
      }
   }
}
