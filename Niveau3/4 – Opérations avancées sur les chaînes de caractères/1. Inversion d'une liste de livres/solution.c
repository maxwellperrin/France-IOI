/*Afin d’éviter de devoir tout refaire, vous décidez d’écrire un petit
programme pour inverser rapidement cette liste.
TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

Chaque titre de livre contient au plus 100 caractères.
INPUT

La première ligne contient un entier nbLivres, le nombre de livres.
Les nbLivres lignes suivantes contiennent chacune un titre de livre.
Les livres sont classés du moins intéressant au plus intéressant.
OUTPUT

L’ensemble des titres de livres, un titre par ligne, triés du plus intéressant au moins intéressant.
EXAMPLE

input:
7
Germinal
Le petit prince
Le meilleur des mondes
L'ecume des jours
L'Odyssee
Les miserables
Crime et Chatiment
output:
Crime et Chatiment
Les miserables
L'Odyssee
L'ecume des jours
Le meilleur des mondes
Le petit prince
Germinal
*/


#include <stdio.h>

int main()
{
    int nbBooks;
    scanf("%d", &nbBooks);

    char titles[nbBooks][101];

    int i = 0;
    while (i < nbBooks)
    {
        scanf(" %100[^\n]", titles[i]);
        i++;
    }


    i = 0;
    while (i < nbBooks / 2)
    {
        int j = 0;
        while (j < 101)
        {
            char temp = titles[i][j];
            titles[i][j] = titles[nbBooks - 1 - i][j];
            titles[nbBooks - 1 - i][j] = temp;
            j++;
        }
        i++;
    }


    i = 0;
    while (i < nbBooks)
    {
        printf("%s\n", titles[i]);
        i++;
    }

    return 0;
}


// Solution France IOI

/*Algorithme

Après avoir bien déclaré le tableau de chaînes de caractères, on va le remplir en lisant les titres de livres les uns après les autres, puis on les affiche en partant de la fin.
Il faut bien faire attention à l’indice que l’on utilise pour l’affichage. 
Si vous n'êtes pas sûr, donnez une valeur à nbLivres, par exemple 5, et vérifiez que vous utilisez les bons indices à la fois pour le premier livre à afficher et pour le dernier.

Le programme
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   int nbLivres;
   scanf("%d\n", &nbLivres);
   char titres[nbLivres][101];
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      scanf("%[^\n]\n", titres[idLivre]);
   }
   for (int idLivre = nbLivres - 1; idLivre >= 0; idLivre = idLivre - 1)
   {
      printf("%s\n", titres[idLivre]);
   }
}
