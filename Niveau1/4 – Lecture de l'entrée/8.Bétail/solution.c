/*
Ce que doit faire votre programme :

Votre programme doit lire 20 entiers puis afficher la somme de tous ces entiers.
EXAMPLEs

EXAMPLE 1
input:
1
2
3
4
5
6
7
8
9
10
10
9
8
7
6
5
4
3
2
1
output:
110
*/

#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int   nbrFermiers;
   int   nbrKarvas;
   int   karvas;
   
   nbrFermiers = 20;
   karvas = 0;
   
   repeat(nbrFermiers)
   {
      scanf("%d", &nbrKarvas);
      karvas += nbrKarvas;
   }
   printf("%d\n", karvas); 
}
