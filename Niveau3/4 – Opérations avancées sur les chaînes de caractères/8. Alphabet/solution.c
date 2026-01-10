/*Écrivez un programme qui affiche tous les caractères de l'alphabet en majuscules, 
avec une espace entre chaque caractère.

On utilisera bien entendu une boucle !
TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 1,000 KB.
EXAMPLE

input:

output:
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/

#include<stdio.h>

int main()
{
   char alphabet = 'A';
   
  
  while(alphabet <= 'Z')
  {
     printf("%c ", alphabet);
     alphabet++;
  }
}

//Solution France IOI 

/*
On itère sur l'ensemble des caractère de 'A' à 'Z' en séparant bien par des espaces.
*/


#include <stdio.h>
int main()
{
   for (char car = 'A'; car <= 'Z'; car = car + 1)
   {
         printf("%c ", car);
   }
}
