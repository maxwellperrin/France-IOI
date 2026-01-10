/*Ce que doit faire votre programme :

Votre programme doit d'abord lire un premier entier, qui décrit le nombre de notes obtenues. 
Ensuite, il doit lire chacune de ces notes, qui sont également des nombres entiers. Enfin, il doit afficher la moyenne de toutes ces notes.

EXAMPLE

input:
3
10
14
15
output:
13.0
*/

#include<stdio.h>

int   main()
{
   int   total_grades;
   scanf("%d", &total_grades);
   
   int   i = 0;
   
   int sum = 0;
   
   while(i < total_grades)
   {
      int   grades;
      scanf("%d", &grades);
      
      sum += grades;
      i++;
   }
   double   average;
   average = (double) sum / total_grades;
   printf("%lf", average);
   return 0;
}
