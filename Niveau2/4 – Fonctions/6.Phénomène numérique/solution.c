/*Dans cette suite, le nombre qui suit un nombre terme est :
si terme est pair, terme ÷ 2 ;
sinon, terme × 3 + 1.

Vos compagnons ont remarqué que, quel que soit le nombre dont on part, en allant d'un terme à l'autre en suivant ces propriétés, 
on finit toujours par tomber sur le nombre 1. 
Ainsi, ils souhaitent que leur écriviez une fonction qui, pour un terme, renvoie le terme suivant dans la suite.

Ce que doit faire votre programme :

Votre programme doit afficher les termes de la suite qui succèdent à celui fourni sur l'entrée, 
séparés par des espaces, jusqu'à ce que le nombre 1 soit atteint.

Important : vous devez utiliser une fonction qui prend un terme en paramètre, et retourne le suivant.

EXAMPLE

input:
7
output:
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1*/

#include<stdio.h>
#include<unistd.h>

int    phenomene_numerque(int a)
{ 
    if(a % 2 == 1)
    {
        return a * 3 + 1;
    }
    return a / 2 ;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    
    
    while(n != 1)
    {
        n = phenomene_numerque(n);
        printf("%d ", n);
    }
    return 0;
}

//Solution France IOI

/*Algorithme

Tant qu'on atteint pas le nombre 1, on calcule le terme suivant avec une fonction ; ce qui donne le programme ci-dessous.
*/

#include <stdio.h>
int termeSuivant(int terme)
{
   if (terme % 2 == 0)
   {
      return terme / 2;       
   }
   else
   {
      return terme * 3 + 1;
   }
}
 
int main()
{
   int terme;
   scanf("%d", &terme);
   while (terme != 1)
   {
      terme = termeSuivant(terme);
      printf("%d ", terme);
   }
   printf("\n");
}
