/*
CONSTRAINTS

Chaque ligne de texte contient au plus 1000 caractères.

INPUT

Sur la première ligne, la lettre majuscule dont on doit chercher le nombre d’apparition dans le texte.
Sur la seconde ligne, un entier nbLignes le nombre de lignes du texte.
Sur les nbLignes lignes suivantes, le texte, ne contenant aucune lettre minuscule.
OUTPUT

Un seul entier, le nombre d’apparitions de la lettre au sein du texte.
*/


#include <stdio.h>

int main() {
    char lettre;
    int nbLignes;
    int count = 0;
    int i = 0;

 
    scanf("%c", &lettre);
    getchar(); 


    if (lettre >= 'a' && lettre <= 'z') {
        lettre = lettre - ('a' - 'A');
    }


    scanf("%d", &nbLignes);
    getchar(); 

    while (i < nbLignes) {
        char text[1001];
        int j = 0;


        scanf("%[^\n]", text);
        getchar(); 


        while (text[j] != '\0') {
            char c = text[j];


            if (c >= 'a' && c <= 'z') {
                c = c - ('a' - 'A');
            }

            if (c == lettre) {
                count++;
            }
            j++;
        }

        i++;
    }

    printf("%d\n", count);
    return 0;
}

//Solution France IOI 

/*Algorithme

Il suffit de lire les lignes une par une, puis de comparer chacun de leurs caractères à la lettre dont on doit chercher le nombre d’apparitions. 
Dès qu’on trouve cette lettre dans le texte, on augmente de 1 le compteur nbFois dont on affichera la valeur à la fin.
*/

#include <stdio.h>
#include <string.h>
int main()
{
   char lettre;
   int nbLignes, nbFois = 0;
   scanf("%c\n", &lettre);
   scanf("%d\n", &nbLignes);
   for (int idLigne = 0; idLigne < nbLignes; idLigne = idLigne + 1)
   {
      char ligne[1001];
      scanf("%[^\n]\n", ligne);
      int longueurLigne = strlen(ligne);
      for (int idLettre = 0; idLettre < longueurLigne; idLettre = idLettre + 1)
      {
         if (ligne[idLettre] == lettre)
         {
            nbFois = nbFois + 1;
         }
      }
   }
   printf("%d", nbFois);
}
