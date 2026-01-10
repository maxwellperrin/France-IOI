/*Ce que doit faire votre programme :

Votre programme doit être une version corrigée du programme ci-dessous, sachant qu'il vous faut changer le moins de choses possible.
#include <stdio.h>
int main()
{
   int ageCadet;
   int ageAine;
   scanf("%d", ageCadet);
   scanf(&ageAine);  
   int difference = ageAine - ageDuCadet;
   printf("%d\n", difference);
*/

#include <stdio.h>
int main()
{
   int ageCadet;
   int ageAine;
   int difference;
   
   scanf("%d", &ageCadet);
   scanf("%d", &ageAine);  
   
   difference = ageAine - ageCadet;
   printf("%d\n", difference);
}
