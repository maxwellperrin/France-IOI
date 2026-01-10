/*Ce que doit faire votre programme :

Votre programme doit d'abord lire un entier strictement positif, le nombre de jours de marche effectués jusqu'à présent. 
Il doit ensuite lire, pour chaque jour, la distance parcourue ce jour-là. Il doit alors afficher la distance maximale parcourue en une journée.

EXAMPLE

input:
6
36
14
38
28
29
31
output:
38
*/

#include <stdio.h>

int   main()
{

   int   nbrJoursMarche;
   scanf("%d", &nbrJoursMarche);
   
   int   distanceMaximale;
   distanceMaximale = 0;
   
   if(nbrJoursMarche < 0)
   {
      nbrJoursMarche = -nbrJoursMarche;
   }
   
   int   i;
   i = 0;
   
   while(i < nbrJoursMarche)
   {
      int   distanceParcourue;
      scanf("%d", &distanceParcourue);
      if(distanceParcourue > distanceMaximale)
      {
         distanceMaximale = distanceParcourue;
      }
      i++;
   }
   printf("%d\n", distanceMaximale);
}
