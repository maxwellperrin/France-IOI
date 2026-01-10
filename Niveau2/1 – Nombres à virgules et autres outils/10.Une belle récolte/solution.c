/*Ce que doit faire votre programme :

Votre programme doit commencer par lire un entier nbPersonnes puis un entier nbFruits. 
Il doit ensuite afficher "oui" si nbFruits est un multiple de nbPersonnes, et "non" dans le cas contraire.

EXAMPLE

input:
12
156
output:
oui
*/

#include<stdio.h>

int   main()
{
   int   nbPersonnes;
   scanf("%d\n", &nbPersonnes);
   
   int   nbFruits;
   scanf("%d\n", &nbFruits);
   
   if((nbFruits % nbPersonnes) == 0)
   {
      printf("oui");
   }
   else
   {
      printf("non");
   }
}

// Solution France IOI

#include <stdio.h>
int main()
{
   int nbPersonnes;
   int nbFruits;
   scanf("%d%d\n", &nbPersonnes, &nbFruits);
   
   if ((nbFruits % nbPersonnes) == 0)
   {
      printf("oui\n");
   }
   else
   {
      printf("non\n");
   }
   return 0;
}


