/*CONSTRAINTS

Le titre et le nom de l’auteur font chacun moins de 100 caractères.
Ils ne contiennent que des lettres majuscules et des espaces.

INPUT

Sur la première ligne, le titre du livre.
Sur la seconde ligne, le nom de l’auteur.

OUTPUT

Sur la première ligne, le titre du livre, sans aucune voyelle, ni espace.
Sur la seconde ligne, le nom de l’auteur, sans aucune voyelle, ni espace.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char title[101];
    scanf("%[^\n]", title);
    getchar(); 
    
    char author[101];
    scanf("%[^\n]", author);

    int i = 0;

    
    while (title[i] != '\0')
    {
        if (title[i] != 'A' && title[i] != 'E' && title[i] != 'I' &&
            title[i] != 'O' && title[i] != 'U' && title[i] != 'Y' && title[i] != ' ')
        {
            printf("%c", title[i]);
        }
        i++;
    }
    printf("\n");

    
    i = 0;
    while (author[i] != '\0')
    {
        if (author[i] != 'A' && author[i] != 'E' && author[i] != 'I' &&
            author[i] != 'O' && author[i] != 'U' && author[i] != 'Y' && author[i] != ' ')
        {
            printf("%c", author[i]);
        }
        i++;
    }
    printf("\n");

    return 0;
}

//Solution France IOI 

/*Algorithme

On a donc deux lignes de texte (le titre du livre et le nom de l’auteur) sur lesquelles il faut appliquer exactement le même traitement : 
on va donc répéter deux fois la même chose.
Répéter 2 fois
   Lire la ligne
   Traiter la ligne
Pour traiter la ligne, on va regarder ses caractères un par un et ne les afficher que s’il ne s’agit pas d’une espace et pas d’une voyelle.
*/

#include <stdio.h>
#include <string.h>
int main()
{
   for (int idLigne = 0; idLigne < 2; idLigne = idLigne + 1)
   {
      char ligne[101];
      scanf("%[^\n]\n", ligne);
      int longueurLigne = strlen(ligne);
      for (int idLettre = 0; idLettre < longueurLigne; idLettre = idLettre + 1)
      {
         char car = ligne[idLettre];
         if (car != ' ' && car != 'A' && car != 'E' && car != 'I' &&
             car != 'O' && car != 'U' && car != 'Y')
         {
            printf("%c", car);
         }
      }
      printf("\n");
   }
}

############################################################################################

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool estVoyelle(char car)
{
   char voyelles[7] = "AEIOUY";
   for (int idVoy = 0; idVoy < 7; idVoy = idVoy + 1)
   {
      if (car == voyelles[idVoy])
         return true;
   }
   return false;
}
int main()
{
   for (int idLigne = 0; idLigne < 2; idLigne = idLigne + 1)
   {
      char ligne[101];
      scanf("%[^\n]\n", ligne);
      int longueurLigne = strlen(ligne);
      for (int idLettre = 0; idLettre < longueurLigne; idLettre = idLettre + 1)
      {
         char car = ligne[idLettre];
         if (car != ' ' && !estVoyelle(car))
         {
            printf("%c", car);
         }
      }
      printf("\n");
   }
   return 0;
}
