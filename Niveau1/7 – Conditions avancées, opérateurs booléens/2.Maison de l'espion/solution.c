/*
Ce que doit faire votre programme :

On vous décrit une zone de recherche rectangulaire, parallèle aux axes, puis la position d'un certain nombre de maisons. Écrivez un programme qui détermine combien de maisons sont dans cette zone.
Votre programme devra lire, dans l'ordre : l'abscisse minimale, l'abscisse maximale, l'ordonnée minimale et l'ordonnée maximale du rectangle. Il lira ensuite le nombre total de maisons, puis pour chaque maison, son abscisse et son ordonnée.
Votre programme devra déterminer puis afficher le nombre de maisons qui se trouvent dans la zone de recherche. Si une maison est exactement sur le bord de la zone, elle doit ête comptée.
Sur l'exemple suivant, il y a 12 maisons, dont 5 sont dans la zone de recherche (en bleu) :
Plan explicatif
EXAMPLE

input:
1
4
1
8
12
1
7
1
9
2
3
3
2
3
4
3
6
3
9
5
3
5
8
7
5
8
2
8
8
output:
5
*/
#include <stdio.h>

int   main()
{
   int   absMin, absMax, ordMin, ordMax;
   scanf("%d%d%d%d", &absMin, &absMax, &ordMin, &ordMax);
   
   int   nbrTotalMaisons;
   scanf("%d", &nbrTotalMaisons);
   
   int   maisonTotalZone = 0;
   
   int i = 0;
   while(i < nbrTotalMaisons)
   {
      int   absMaisons, ordMaisons;
      scanf("%d%d", &absMaisons, &ordMaisons);
      if((absMaisons >= absMin)&& (absMaisons <= absMax) && 
            (ordMaisons >= ordMin) && (ordMaisons <= ordMax)){
            
            maisonTotalZone++;
            }
            i++;
   }
   printf("%d\n", maisonTotalZone);
   return 0;
}
