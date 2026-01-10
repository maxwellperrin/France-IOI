/*Ce que doit faire votre programme :

Votre programme devra lire un nombre décimal, la quantité de ciment nécessaire pour les fondations de votre nouvelle maison, en kilos. 
Sachant que le ciment n'est vendu qu'en sacs de 60 kilos et que un sac coûte 45 euros, votre programme devra afficher le coût total du ciment.

EXAMPLE

input:
145.8
output:
135
*/

int   main()
{
   double   foundationCement;
   scanf("%lf", &foundationCement);
   
   int   bagWeight = 60;
   int   priceBag = 45;
   
   int   totalPrice = 0;
   
   while(foundationCement > 0 )
   {
        foundationCement -= bagWeight;
        totalPrice += priceBag;
   }
   printf("%d", totalPrice);
}

// Solution France IOI 

#include <stdio.h>
#include <math.h>
int main()
{
   double quantiteCiment;
   scanf("%lf\n", &quantiteCiment);
   int nbSacs = ceil(quantiteCiment / 60);
   int prix = nbSacs * 45;
   printf("%d\n",prix);
   
   return 0;
}
