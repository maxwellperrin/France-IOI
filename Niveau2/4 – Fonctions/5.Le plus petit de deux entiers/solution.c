/*
Écrivez une fonction nommée min2, qui prend deux entiers en paramètres et retourne le plus petit. Pour démontrer l'utilisation de cette fonction, vous lirez 10 entiers sur l'entrée, utiliserez votre fonction pour conserver uniquement le plus petit des 10, puis vous l'afficherez à la fin.
*/
#include <stdio.h>



int min2(int min, int max)
{
   if(min > max)
   {
      return max;
   }
   return min;
}

int main()
{

   int n1, n2;
   scanf("%d", &n1); 
   
   int i = 0;
   while(i < 9)
   {
        scanf("%d", &n2);
        n1 = min2(n1, n2); 
        i++;
   }

    printf("%d\n", n1); 

    return 0;
}

//Solution France IOI 

/*Algorithme

On lit le premier des nombres de l'utilisateur, pour le stocker dans une variable qui va contenir la plus petite valeur rencontrée jusqu'à présent. 
À chaque nouvelle valeur, on conserve la plus petite parmi la valeur stockée et la valeur lue, en appelant la fonction min2.
*/

#include <stdio.h>
int min2(int val1, int val2)
{
   if (val1 < val2)
      return val1;
   return val2;
}
int main()
{
   int valMin;
   scanf("%d", &valMin);
   
   for (int iVal = 1; iVal < 10; iVal = iVal + 1)
   {
      int valeur;
      scanf("%d", &valeur);
      valMin = min2(valMin, valeur);
   }
   printf("%d\n", valMin);
}
