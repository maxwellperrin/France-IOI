/*Ce que doit faire votre programme :

Votre programme doit lire un entier, le nombre de lignes souhaité, et écrira autant de fois que demandé la phrase « Je dois suivre en cours ».
EXAMPLE

input:
3
output:
Je dois suivre en cours
Je dois suivre en cours
Je dois suivre en cours
*/

#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbrLignes;

   scanf("%d", &nbrLignes);
   
   repeat(nbrLignes)
   {
      printf("Je dois suivre en cours\n");
   }
}
