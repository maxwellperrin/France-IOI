/*Ecrivez un programme qui affiche dans l'ordre alphabétique toutes les consonnes de l'alphabet en minuscules, en les séparant par des espaces.
On utilisera bien entendu une boucle !
TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 32,000 KB.
*/

#include<stdio.h>

void   ft_consonant(char *str)
{
    
    int i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&  str[i] != 'y')
            {
                printf("%c ", str[i]);
            }
        }
        i++;
    }
}


int main()
{
   char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
   ft_consonant(alphabet);
}

//Solution France IOI

/*Algorithme

On va itérer sur l'ensemble des lettres de l'alphabet et déterminer pour chacun d'entre-elles si il s'agit ou pas d'une consonne. 
On ne souhaite pas afficher d'espace après le 'z' donc on teste ce cas particulier.
Noter qu'il est plus rapide de déterminer si on est pas une consonne que de déterminer qu'on est une consonne : 
comme il y a moins de voyelles, elles sont beaucoup plus rapides à énumérer !*/

//Sans fonction

#include <stdio.h>
int main()
{
   for (char car = 'a'; car <= 'z'; car = car + 1)
   {
      if (car != 'a' && car != 'e' && car != 'i' &&
          car != 'o' && car != 'u' && car != 'y')
      {
         if (car != 'z')
         {
            printf("%c ", car);
         }
         else
         {
            printf("%c\n", car);
         }
      }
   }
   printf("\n");
}

//Avec fonction

#include <stdio.h>
#include <stdbool.h>
bool estVoyelle(char car)
{
   char voyelles[7] = "aeiouy";
   for (int idVoy = 0; idVoy < 7; idVoy = idVoy + 1)
   {
      if (car == voyelles[idVoy])
         return true;
   }
   return false;
}
int main()
{
   for (char car = 'a'; car <= 'z'; car = car + 1)
   {
      if (!estVoyelle(car))
      {
         if (car != 'z')
         {
            printf("%c ", car);
         }
         else
         {
            printf("%c\n", car);
         }
      }
   }
   printf("\n");
   return 0;
}
