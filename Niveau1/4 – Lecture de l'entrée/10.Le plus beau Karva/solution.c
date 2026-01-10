/*
Ce que doit faire votre programme :

Votre programme doit d'abord lire le nombre de Karvas en compétition. Ensuite, pour chaque Karva, il doit :
lire 4 entiers : son poids, son âge, la longueur de ses cornes et la hauteur au garrot ;
afficher sa note, sachant qu'elle s'obtient en multipliant la longueur des cornes par la hauteur au garrot, valeur à laquelle on ajoute le poids.
*/

#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int   nbrKarvas;
   int   poidsKarvas;
   int   ageKarvas;
   int   largeurCornes;
   int   hauteurGarrot;
   int   i;
   int   note;
   
   scanf("%d", &nbrKarvas);
   note = 0;
   i = 0;
   while(i < nbrKarvas)
   {
      scanf("%d", &poidsKarvas);
      scanf("%d", &ageKarvas);
      scanf("%d", &largeurCornes);
      scanf("%d", &hauteurGarrot);
      
      note = largeurCornes * hauteurGarrot + poidsKarvas;
      printf("%d\n", note);
      i++;
   } 
}
