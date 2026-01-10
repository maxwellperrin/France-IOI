/*Votre programme doit d'abord lire le nombre de légumes mis en vente.
Ensuite, pour chacun, il doit lire 3 nombres décimaux : son poids, son âge (en nombre de jours depuis la cueillette), 
et son prix de vente. Votre programme doit ensuite afficher pour chaque légume son prix au kg (au fur et à mesure que les légumes sont présentés).

Example 

input;
2
7.0
5.0
14.0
9.5
2.3
7.6

output:
2.0
0.8

*/

#include<stdio.h>

int   main()
{
   int   veg_num;
   scanf("%d", &veg_num);
   
   int   i = 0;
   
   while(i < veg_num)
   {
      double   weight_veg;
      scanf("%lf", &weight_veg);
      
      double   age_veg;
      scanf("%lf", &age_veg);
      
      double   price;
      scanf("%lf", &price);
      
      double vegPricePerKg;
      vegPricePerKg = price / weight_veg;
      
      printf("%lf\n", vegPricePerKg);
      
      i++;
   }
   return 0;
}
      
