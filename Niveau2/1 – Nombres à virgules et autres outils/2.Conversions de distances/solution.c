/*Écrivez un programme qui lit un nombre décimal (un nombre à virgule) représentant un nombre de lieues et affiche le nombre de kilomètres correspondant.
 Un kilomètre vaut exactement 0.707 lieues
*/

#include<stdio.h>

int   main()
{
   
   double   lieues;
   scanf("%lf", &lieues);
   
   double km = lieues / 0.707;
   
   printf("%lf", km);
   
   return 0;
}
