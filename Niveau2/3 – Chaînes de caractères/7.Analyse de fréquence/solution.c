/*
CONSTRAINTS

Le texte contient un ensemble de mots, séparés par des espaces, sans aucun signe de ponctuation.
Chaque mot contient au plus 100 caractères.

INPUT

La première ligne contient deux entiers : nbLignes et nbMots.
Chacune des nbLignes lignes suivantes contient nbMots mots.

OUTPUT

Pour chaque longueur de mot possible, et uniquement s’il y avait des mots de cette longueur dans 
le texte, vous devez afficher sur une ligne la longueur et le nombre de mots de cette longueur, 
séparés par un deux-points (il faut mettre un espace de chaque côté du deux-points).
*/

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
    int nbLignes, nbMots;
    scanf("%d %d", &nbLignes, &nbMots);

    int compteur[101] = {0}; 

    int i = 0;
    while(i < nbLignes)
    {
        int j = 0;
        while(j < nbMots)
        {
            char word[101];
            scanf("%s", word);

            int length = strlen(word);
            compteur[length]++;

            j++;
        }
        i++;
    }

    int k = 1;
    while(k <= 100)
    {
        if(compteur[k] > 0)
        {
            printf("%d : %d\n", k, compteur[k]);
        }
        k++;
    }

    return 0;
}

//Solution France IOI

/*Algorithme

Il est nécessaire de compter le nombre de mots ayant 1 lettre, 2 lettres… 100 lettres. 
Il faut donc utiliser un tableau, car on ne va pas utiliser 100 variables différentes.
Une fois le tableau initialisé avec uniquement des zéros, il faut lire l’ensemble du texte ligne à ligne et/ou mot à mot, selon le langage utilisé. 
Ensuite, on va calculer la longueur de chaque mot lu, puis mettre à jour la valeur dans l’histogramme.
À la fin, il faut analyser l’histogramme et dès qu’on trouve une valeur différente de zéro 
(c’est-à-dire qu’il y avait au moins un mot de cette longueur dans le texte), alors on affiche la longueur, puis le nombre de mots de cette longueur, selon le format donné dans l’énoncé.*/
       
#include <stdio.h>
#include <string.h>
int main()
{
   int nbLignes, nbMots;
   int histogramme[101] = {0};
   scanf("%d%d\n", &nbLignes, &nbMots);
   for (int idLigne = 0; idLigne < nbLignes; idLigne = idLigne + 1)
   {
      for (int idMot = 0; idMot < nbMots; idMot = idMot + 1)
      {
         char mot[101];
         scanf("%s", mot);
         int longueur = strlen(mot);
         histogramme[longueur] = histogramme[longueur] + 1;
      }
   }
   for (int longueur = 1; longueur <= 100; longueur = longueur + 1)
   {
      if (histogramme[longueur] > 0)
      {
         printf("%d : %d\n", longueur, histogramme[longueur]);
      }
   }
}       
       
       
 
