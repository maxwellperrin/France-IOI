/*
Ce que doit faire votre programme :

Votre programme devra lire une suite d'entiers positifs et afficher leur somme. 
On ne sait pas combien il y aura d'entiers, mais la suite se termine toujours par la valeur -1 (qui n'est pas une dépense, 
juste un marqueur de fin).
EXAMPLEs

EXAMPLE 1
input:
1000
2000
500
-1
output:
3500
EXAMPLE 2
input:
-1
output:
0
*/

#include<stdio.h>

int   main()
{
   int   suite;
   scanf("%d", &suite);
   
   int   marqueur_fin = -1;
   int somme = 0;
   
   while(suite != marqueur_fin)
   {
      somme += suite;
      scanf("%d", &suite);   
   }
   printf("%d", somme);
}

