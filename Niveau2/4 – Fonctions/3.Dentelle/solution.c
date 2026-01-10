/*
Ce que doit faire votre programme :

Votre programme doit lire la longueur de la dentelle, puis l'afficher sous la forme de trois 
lignes remplies respectivement de « X », de « # » et de « i ».
*/

#include <unistd.h>
#include <stdio.h>

void ligneCaracteres(char caracter, int longueur)
{
    int i = 0;
    while (i < longueur)
    {
        write(1, &caracter, 1);
        i++;
    }
    write(1, "\n", 1);
}

int main()
{
    int longueur;

    scanf("%d", &longueur);

    ligneCaracteres('X', longueur);
    ligneCaracteres('#', longueur);
    ligneCaracteres('i', longueur);

    return 0;
}

//Solution 

/*Algorithme

On écrit une fonction ligneDentelle qui prend deux paramètres : la longueur de la ligne et le motif de la dentelle, 
dans laquelle on affiche le motif avec une boucle. On appelle la fonction trois fois avec les trois motifs dans le programme.
*/

#include <stdio.h>

void ligneDentelle(int longueur, char motif)
{
   for (int iCol = 1; iCol <= longueur; iCol = iCol + 1)
   {
      printf("%c", motif);
   }
   printf("\n");
}

int main()
{
   int longueur;
   scanf("%d", &longueur);
   ligneDentelle(longueur, 'X');
   ligneDentelle(longueur, '#');
   ligneDentelle(longueur, 'i');
}
