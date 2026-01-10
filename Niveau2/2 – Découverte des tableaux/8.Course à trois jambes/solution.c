/*Ce que doit faire votre programme :

Le premier entier à lire est le nombre de participants (au plus 3 000) qui sera toujours pair. 
Ensuite il faut lire, pour chaque participant, un entier qu'il a choisi librement.
Les équipes sont constituées ainsi : la personne ayant choisi le plus petit entier est avec celle ayant choisi le plus grand, 
celle ayant choisi le deuxième plus petit est avec celle ayant choisi le deuxième plus grand, et ainsi de suite.
Vous devrez afficher la composition de chacune des équipes, dans l'ordre : d'abord celle dont le plus petit numéro fait partie, 
puis celle dont le second plus petit numéro fait partie, et ainsi de suite. Au sein de chaque équipe on affichera d'abord le plus petit numéro puis le plus grand.
On vous garantit que tous les numéros sont différents.

EXAMPLE

input:
10
80
1000
5
154
130
847
450
42
35
789
output:
5 1000
35 847
42 789
80 450
130 154
*/

#include<stdio.h>

int   main()
{
   int   nbPlayers;
   scanf("%d", &nbPlayers);
   
   int   nb[nbPlayers];
     
   int   i = 0;
   while(i < nbPlayers)
   {
      scanf("%d", &nb[i]);
      i++;
   }
   
   int   temp;
   
   i = 0;
   while(i < nbPlayers)
   {
      int   j = 0;
      while(j < nbPlayers - i - 1)
      {
         if(nb[j] > nb[j + 1])
         {
            temp = nb[j];
            nb[j] = nb[j + 1];
            nb[j + 1] = temp;
         }
         j++;
      }
      i++;
  }
  
  int nbDesc[nbPlayers];
  
  i = 0;
  while(i < nbPlayers)
  {
     nbDesc[i] = nb[nbPlayers - 1 - i];
     i++;
  }
  
  int half = nbPlayers / 2;
  
  i = 0;
  while(i < half)
  {
     printf("%d %d\n", nb[i], nbDesc[i]);
     i++;
  }
  return 0;
}

// Solution France IOI 

/*Algorithme

On commence par lire toutes les valeurs, puis on les trie. 
Ensuite, on utilise une variable idPremier qui représente la position dans le tableau de la première personne. 
Cette variable vaut à l'origine 0 et augmente de 1 à chaque couple, jusqu'à valoir nbPersonnes ÷ 2 − 1, c'est-à-dire à être au milieu du tableau. 
À chaque fois, la position de la seconde personne vaut donc nbPersonnes − 1 − idPremier :

0 <--> nbPersonnes - 1 - 0 = nbPersonnes - 1
1 <--> nbPersonnes - 1 - 1 = nbPersonnes - 2
2 <--> nbPersonnes - 1 - 2 = nbPersonnes - 3

*/

#include <stdio.h>
#include <stdlib.h>
 
int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
 
int main()
{
   int nbPersonnes;
   scanf("%d\n",&nbPersonnes);
   int numeros[nbPersonnes];
   for (int idPersonne = 0; idPersonne < nbPersonnes; idPersonne = idPersonne + 1)
   {
      scanf("%d\n",&numeros[idPersonne]);
   }
      
   qsort( numeros, nbPersonnes, sizeof(int), compare );
   for (int idPremier = 0; idPremier  < nbPersonnes / 2; idPremier = idPremier  + 1)
   {
      int idSecond = nbPersonnes - 1 - idPremier;
      printf("%d %d\n", numeros[idPremier], numeros[idSecond]);
   }
}
...
nbPersonnes / 2 - 1 <--> nbPersonnes - 1 - (nbPersonnes / 2 - 1) = nbPersonnes / 2

