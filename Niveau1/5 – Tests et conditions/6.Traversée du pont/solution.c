/*Ce que doit faire votre programme :

Votre programme doit lire deux entiers, compris entre 1 et 6, la valeur de chaque dé. 
Si la somme est supérieure ou égale à 10, alors vous devez payer une taxe spéciale (36 pièces). 
Sinon, vous payez deux fois la somme des valeurs des deux dés. 
Votre programme devra afficher selon le cas le texte « Taxe spéciale ! » ou bien « Taxe régulière », puis la somme à payer (sans indiquer l'unité).
EXAMPLEs

EXAMPLE 1

input:
5
6
output:
Taxe spéciale !
36

EXAMPLE 2

input:
4
3
output:
Taxe régulière
14
*/

#include <stdio.h>

int main()
{
   int des1;
   int des2;
   int sum;
   
   
   scanf("%d", &des1);
   scanf("%d", &des2);
   
   sum = des1 + des2;
   
   if(sum >= 10)
   {
      sum = 36;
      printf("Taxe spéciale !\n");
      printf("%d\n", sum);
      
   }
   else
   {
      sum = (des1 + des2) * 2;
      printf("Taxe régulière\n");
      printf("%d\n", sum);
   }
}
