/*Ce que doit faire votre programme :

On vous décrit les arrivées et départs des participants d'une fête, et votre programme doit afficher le nombre maximum de personnes qui ont été présentes au même moment. Chacun des invités est identifié par un numéro.
Le premier entier à lire est nbPersonnes : le nombre total de personnes qui se sont rendues à la fête. Ensuite, il y a 2 × nbPersonnes entiers à lire, dans l'ordre chronologique des arrivées et départs. Si l'entier est positif, c'est que la personne de numéro correspondant vient d'arriver, s'il est négatif, elle vient de partir. Une fois qu'une personne est partie, elle ne revient pas.
Votre programme doit déterminer puis afficher le nombre maximum de personnes qui étaient là simultanément.
EXAMPLE

input:
5
1
2
-1
3
4
-2
-4
5
-3
-5
output:
3
COMMENTS

Au cours de la fête décrite par l'exemple, on a donc les flux suivants :
l'invité n°1 entre ;
l'invité n°2 entre ;
l'invité n°1 sort ;
l'invité n°3 entre ;
l'invité n°4 entre ;
l'invité n°2 sort…
Le nombre de présents est maximal lors de l'arrivée de la personne n°4 : il y a alors trois invités qui sont arrivés et restés.
*/

#include <stdio.h>

int main()
{  
   int nbPersonnes;
   scanf("%d", &nbPersonnes);
   
   int nbactuel = 0;        
   int maxPersonnes = 0;
   int i = 0;
   
   while (i < nbPersonnes*2)
   {
      int numero;
      scanf("%d", &numero);

      if (numero > 0)
      {
         nbactuel++;
         if (nbactuel > maxPersonnes)
         {
            maxPersonnes = nbactuel;
         }
      }
      else
      {
         nbactuel--;
      }
      i++;
   }
   printf("%d\n", maxPersonnes);
   return 0;
}
