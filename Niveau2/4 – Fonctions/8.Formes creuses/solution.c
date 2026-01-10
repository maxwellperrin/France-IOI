/*Ce que doit faire votre programme :

Écrivez un programme qui affiche une ligne de « X », un rectangle de « # », et un triangle de « @ ». Les deux formes doivent être creuses (remplies avec des espaces).
L'entrée comporte quatre entiers, un par ligne :
le nombre de « X » de la ligne à afficher ;
le nombre de lignes du rectangle de « # » ;
le nombre de colonnes du rectangle ;
le nombre de lignes du triangle de « @ ».
Vous devez afficher les trois formes successivement, avec une ligne blanche entre chaque forme, comme le montre l'exemple.
Votre objectif doit être d'obtenir le code source le plus simple et clair possible, en le décomposant en fonctions.
EXAMPLE

input:
15
5
12
6
output:
XXXXXXXXXXXXXXX

############
#          #
#          #
#          #
############

@
@@
@ @
@  @
@   @
@@@@@@

*/


void affichageLigne(int colonne, char c)
{
    int i = 0;
    while (i < colonne)
    {
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}

void square(int colonne, int ligne, char c)
{
    int i = 0;
    while (i < ligne)
    {
        int j = 0;
        while (j < colonne)
        {
            if (i == 0 || i == ligne - 1 || j == 0 || j == colonne - 1)
                write(1, &c, 1);
            else
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}

void triangle(int ligne, char c)
{
    int i = 0;
    while (i < ligne)
    {
        int j = 0;
        while (j <= i)
        {
            if (j == 0 || j == i || i == ligne - 1)
                write(1, &c, 1);
            else
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return 0;
}

int main()
{
    int col1, lin1, col2, lin2;

   
    if (scanf("%d %d %d %d", &col1, &lin1, &col2, &lin2) != 4)
        return 1;


    affichageLigne(col1, 'X');
    write(1, "\n", 1);

   
    square(col2, lin1, '#');

    triangle(lin2, '@');

    return 0;
}

//Solution France IOI 

#include <stdio.h>
void ligne(int longueur, char motif)
{
   for (int iCol = 1; iCol <= longueur; iCol = iCol + 1)
   {
      printf("%c", motif);
   }
   printf("\n");
}
void ligneCreuse(int longueur, char motif)
{
   if (longueur > 1)
   {
      printf("%c", motif);
      for (int iCol = 2; iCol < longueur; iCol = iCol + 1)
      {
         printf(" ");
      }
   }
   printf("%c\n", motif);
}
void rectangle(int hauteur, int longueur, char motif)
{
   if (hauteur > 1)
   {
      ligne(longueur, motif);
      for (int iLigne = 2; iLigne < hauteur; iLigne = iLigne + 1)
      {
         ligneCreuse(longueur, motif);
      }
   }
   ligne(longueur, motif);
}
void triangle(int hauteur, char motif)
{
   for (int iLigne = 1; iLigne < hauteur; iLigne = iLigne + 1)
   {
      ligneCreuse(iLigne, motif);
   }
   ligne(hauteur, motif);
}
int main()
{
   int longueurLigne;
   scanf("%d", &longueurLigne);
   ligne(longueurLigne, 'X');
   printf("\n");
   int hauteurRectangle, largeurRectangle;
   scanf("%d%d", &hauteurRectangle, &largeurRectangle);
   rectangle(hauteurRectangle, largeurRectangle, '#');
   printf("\n");
   int hauteurTriangle;
   scanf("%d", &hauteurTriangle);
   triangle(hauteurTriangle, '@');
}
