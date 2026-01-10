/*À chaque ligne du registre correspond une journée, les entiers présents sur cette ligne représentant la fréquentation à chaque heure. 
Cela permet de faire des statistiques détaillées mais on aimerait savoir combien de personnes au total sont venues.
TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
INPUT

Un nombre inconnu de lignes, chacune contenant un nombre inconnu d’entiers, ce nombre variant selon les lignes.
Les entiers sont séparés entre eux par un seul espace et il n’y a pas d’espace en fin de ligne.
OUTPUT

Vous devez indiquer la somme de tous les entiers.
EXAMPLE

input:
5
2 2
4 4 4
6 6
3 3
output:
39*/

#include <stdio.h>

int   main()
{
   int   sum;
   sum = 0;
   int entier;
   while (scanf("%d", &entier) == 1)
   {
      sum += entier;
   }
   printf("%d", sum);
   return 0;
}

//Solution France IOI 

/*Algorithme

Il faut tout simplement lire les entiers, tant que cela est possible, et calculer leur somme. La difficulté était bien sur au niveau de la syntaxe, pour savoir quand il fallait s'arrêter.
*/

#include <stdio.h>
int main()
{
   int nbTotal = 0, nbGens;
   while (scanf("%d", &nbGens) == 1)
   {
      nbTotal = nbTotal + nbGens;
   }
   printf("%d", nbTotal);
}
