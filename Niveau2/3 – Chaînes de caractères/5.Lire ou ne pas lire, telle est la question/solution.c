/*CONSTRAINTS

Chaque titre de livre contiendra au plus 1000 caractères.

INPUT

Sur la première ligne, un entier nbLivres, le nombre total de livres.
Les nbLivres lignes suivantes contiennent chacune un titre de livre.
OUTPUT

La liste des titres respectant la règle donnée dans l’énoncé.

*/ 

#include <stdio.h>
#include <string.h>

int main()
{
    int nbLivres;
    scanf("%d\n", &nbLivres);
    
    int max_length = 0;
    char title_book[1001];
    
    int i = 0;
    while (i < nbLivres)
    {
        scanf(" %[^\n]", title_book);
        getchar();
        
        int len = strlen(title_book);
        
        if (len > max_length)
        {
            max_length = len;
            printf("%s\n", title_book);
        }
        i++;
    }
    return 0;
}

//Solution France IOI 

/*Algorithme

On ne va donc afficher un titre de livre que s’il est plus long que tous les titres qu’on a affichés précédemment, 
ce qui revient à dire qu’il est plus long que le dernier titre affiché, étant donné que chaque titre est forcément plus long que le précédent.
Il faut donc mémoriser la longueur du plus grand titre affiché et si un nouveau titre est plus long que cette longueur mémorisée, 
alors on affiche le titre et on met à jour cette longueur.
Cela ressemble donc un peu à un calcul de maximum.*/

#include <stdio.h>
#include <string.h>
int main()
{
   int nbLivres, longueurPlusLongTitre = 0;
   scanf("%d\n", &nbLivres);
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      char titreLivre[1001];
      scanf("%[^\n]\n", titreLivre);
      int longueurTitre = strlen(titreLivre);
      if (longueurTitre > longueurPlusLongTitre)
      {
         longueurPlusLongTitre = longueurTitre;
         printf("%s\n", titreLivre);
      }
   }
}
