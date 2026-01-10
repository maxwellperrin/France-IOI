/*Ce que doit faire votre programme :

Il y a 10 ingrédients et ils ont tous un prix au kilo différent : 9, 5, 12, 15, 7, 42, 13, 10, 1 et 20.
Votre programme devra lire 10 entiers, le poids (en kilogrammes) qu'il faut acheter pour chaque ingrédient. Il devra calculer le coût total de ces achats.
EXAMPLE

input:
1
1
1
1
1
1
1
1
1
1

output:
134
*/

#include<stdio.h>

int   main()
{
   
   int   price_ingredients[] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
   
   int   length = sizeof(price_ingredients) / sizeof(price_ingredients[0]);

   
   int   i = 0;
   
   int   total_price = 0;
   
   while (i < length)
   {
      int   weight;
      scanf("%d", &weight);
      total_price += weight * price_ingredients[i];
      i++;
   }
   printf("%d", total_price);
   return 0;
}

// Solution France IOI 

#include <stdio.h>
 
int main()
{
   int prix[10] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
   int prixTotal = 0;
   for (int idIngredient = 0; idIngredient < 10; idIngredient = idIngredient + 1)
   {
      int quantite;
      scanf("%d\n",&quantite);
      prixTotal = prixTotal + prix[idIngredient] * quantite;
   }
   printf("%d\n",prixTotal);
}
