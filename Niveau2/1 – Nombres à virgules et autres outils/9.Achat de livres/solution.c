/*Ce que doit faire votre programme :

Votre programme doit commencer par lire la somme d'argent dont vous disposez et lira ensuite le prix d'un livre. 
Il devra ensuite afficher un entier, le plus grand nombre de livres qu'il vous est possible d'acheter avec cette somme d'argent.

EXAMPLE

input:
27
5
output:
5
*/

#include<stdio.h>

int   main()
{
   int   money;
   scanf("%d", &money);
   
   int   priceBook;
   scanf("%d", &priceBook);
   
   int   amountBookbuy = money / priceBook;
   
   printf("%d", amountBookbuy);
}

// Solution

#include <stdio.h>
int main()
{
   int sommeArgent;
   int prixLivre;
   scanf("%d%d\n", &sommeArgent, &prixLivre);
   printf("%d\n", sommeArgent / prixLivre);
   return 0;
}

