/* Ce que doit faire votre programme :

On vous donne le nombre d'habitants d'un certain nombre de lieux que vous visitez. 
Une ville étant un lieu dont la population est strictement supérieure à 10 000 habitants, déterminez combien de lieux sont des villes.
Votre programme doit lire un entier : le nombre de lieux. 
Il doit ensuite lire, pour chaque lieu, un entier donnant le nombre de gens qui y habitent. Votre programme doit alors afficher le nombre de villes.
EXAMPLE

input:
6
1000
5000
15000
4780
0
23590
output:
2
*/

#include <stdio.h>

int   main()
{
   int   nbrLieux;
   int   i;
   int   ville; 
   
   scanf("%d", &nbrLieux);
   i = 0;
   ville = 0;
   
  while (i < nbrLieux)
  {
     int population;

     scanf("%d", &population);
     if (population > 10000)
     {
        ville++;
     }
     i++;
  }
  printf("%d\n", ville);
  return 0;
}
