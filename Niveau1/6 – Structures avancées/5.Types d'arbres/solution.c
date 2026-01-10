/*Ce que doit faire votre programme :

Il existe 4 types d'arbres :
le "Tinuviel" fait moins de 5 mètres de haut et ses feuilles sont composées de plus de 8 folioles
le "Calaelen" fait plus de 10 mètres de haut et ses feuilles sont composées de plus 10 folioles
le "Falarion" fait moins de 8 mètres de haut et ses feuilles sont composées de moins de 5 folioles
le "Dorthonion" fait plus de 12 mètres de haut et ses feuilles sont composées de moins de 7 folioles
Votre programme lira deux entiers, la hauteur et le nombre de folioles de l'arbre, et affichera le nom de l'arbre correspondant.
Toutes les inégalités sont à prendre au sens large, c'est-à-dire que "moins" signifie "moins ou égal" ou et "plus" signifie "plus ou égal".
EXAMPLEs

EXAMPLE 1
input:
12
12
output:
Calaelen
EXAMPLE 2
input:
4
9
output:
Tinuviel
*/

#include <stdio.h>

int   main()
{
   int   tailleArbre;
   int   tailleFeuilles;
   
   scanf("%d", &tailleArbre);
   scanf("%d", &tailleFeuilles);
   
   if(tailleArbre <= 5 && tailleFeuilles >= 8)
   {
      printf("Tinuviel");
   }
   else if(tailleArbre >= 10 && tailleFeuilles >= 10)
   {
      printf("Calaelen");
   }
   else if(tailleArbre <= 8 && tailleFeuilles <= 5)
   {
      printf("Falarion");
   }
   else if(tailleArbre >= 12 && tailleFeuilles <= 7)
   {
      printf("Dorthonion");
   }
}
