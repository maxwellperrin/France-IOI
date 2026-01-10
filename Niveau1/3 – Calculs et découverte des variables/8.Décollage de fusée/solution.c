/*Ce que doit faire votre programme :

Votre programme devra lancer le décompte en partant de 100 puis annoncer le décollage, c'est-à-dire afficher une séquence d'annonces de la forme :
↳
100
99
...
2
1
0
Décollage ! 
en remplaçant les « … » par toutes les valeurs intermédiaires.
Important : votre programme ne doit pas faire plus d'une quinzaine de lignes.
*/

#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int x;
   x = 100;
   
   repeat(101)
   {
      printf("%d\n",x);
      x--;
   }
   printf("Décollage !\n");
}
