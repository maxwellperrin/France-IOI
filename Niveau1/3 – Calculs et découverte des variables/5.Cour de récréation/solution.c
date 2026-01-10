/*Ce que doit faire votre programme :

La cour carrée a été mesurée avec quatre bâtons de longueurs respectives 17 m, 7 m, 5 m et 2 m. 
La longueur du côté de la cour est égale à 5 fois le premier bâton plus 2 fois le second plus 1 fois le troisième plus 2 fois le quatrième.
Votre programme doit afficher deux lignes : la première doit contenir la surface de la cour, et la seconde ligne doit contenir son périmètre. 
Les résultats doivent être exprimés en mètres carrés et en mètres, respectivement, mais vous ne devez pas afficher l'unité après la valeur numérique.
Important : dans votre programme, commencez par calculer la longueur du côté de la cour et l'enregistrer dans une variable.
*/

#include <stdio.h>

int main()
{
  int surface = (5 * 17 + 2 * 7 + 1 * 5 + 2 * 2) * (5 * 17 + 2 * 7 + 1 * 5 + 2 * 2);
  int perimetre = (5 * 17 + 2 * 7 + 1 * 5 + 2 * 2) * 4;
  
  printf("%d\n", surface);
  printf("%d\n", perimetre); 
}
