/*Ce que doit faire votre programme :

Étant données deux températures entières tempMin et tempMax, 
votre programme doit afficher toutes les températures comprises entre les deux, bornes incluses.
EXAMPLE

input:
9
14
output:
9
10
11
12
13
14
*/

#include <stdio.h>

int   main()
{
   int   min;
   int   max;
   
   scanf("%d", &min);
   scanf("%d", &max);
   
   while(min < max)
   {
      printf("%d\n", min);
      min ++;
   }
   printf("%d\n", max);
 }
