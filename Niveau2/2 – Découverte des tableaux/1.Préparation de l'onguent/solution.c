/*Ce que doit faire votre programme :

Il y a 10 ingrédients dans la recette et les quantités nécessaires pour chacun sont (en grammes) : 500, 180, 650, 25, 666, 42, 421, 1, 370 et 211.
Votre programme doit lire un entier, le numéro d'un ingrédient (compris entre 0 et 9) et afficher la quantité associée à cet ingrédient.
EXAMPLE

input:
3
output:
25
*/

#include<stdio.h>

int   main()
{
   int   number;
   scanf("%d", &number);
   if(number < 0)
   {
      number = -number;
   }
   number = number % 10;
   
   int   ingredients[10] = {500, 180, 650, 25, 666, 42, 421, 1, 370, 211};
   
   printf("%d", ingredients[number]);
}

// Solution France IOI


#include <stdio.h>
int main()
{
   int quantite[10] = {500, 180, 650, 25, 666, 42, 421, 1, 370, 211};
   int ingredient;
   scanf("%d\n",&ingredient);
   printf("%d\n",quantite[ingredient]);
   return 0;
}

