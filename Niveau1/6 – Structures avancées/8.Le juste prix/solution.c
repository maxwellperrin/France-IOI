/*Ce que doit faire votre programme :

Votre programme doit lire un entier nbMarchands (non nul) puis les nbMarchands entiers suivants, 
qui indiquent le prix des galettes chez chaque marchand, de la position 1 à la position nbMarchands. 
Votre programme devra ensuite afficher la position du plus petit de ces prix. 
En cas d'égalité entre deux prix, on prendra la position la plus grande. 
Tous les prix et positions sont positifs et ne dépassent pas 1 million.
EXAMPLE

input:
6
12
11
9
11
9
15
output:
5
COMMENTS

Parmi ces 6 marchands, c'est le 5ème qui vend ses galettes le moins cher, à 9 euros la galette. 
Il est à égalité avec le 3e marchand, mais on préfère le 5e qui est le plus près du bout de la rue.
*/

#include <stdio.h>

int   main()
{
   int   nbMarchands;
   scanf("%d", &nbMarchands);
   
   int prixBas = 1000 * 1000;
   int positionMin = 0;
   
   int   i = 1;
   while(i <= nbMarchands)
   {
      int   prixGalettes;
      scanf("%d", &prixGalettes);

      if(prixGalettes <= prixBas)
      {
         prixBas = prixGalettes;
         positionMin = i;
       }
       i++;
   }
   printf("%d\n", positionMin);
   return 0;
}

