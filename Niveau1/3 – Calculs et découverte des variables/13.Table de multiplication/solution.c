/*Ce que doit faire votre programme :

Voici à quoi ressemble la table de multiplication allant jusqu'à 5 fois 5.
↳
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
Écrivez un programme qui affiche une table de multiplication allant jusqu'à 20 fois 20.
*/

#include <stdio.h>

#define repeat(nb) for (int _loop = 1; _loop <= (nb); _loop++)

int main() 
{
    int number;
    int multiple;

    repeat(20) 
    { 
       number = _loop; 
       repeat(20) 
       { 
          multiple = number * _loop; 
          printf("%d\t", multiple); 
       }
       printf("\n");
    }
}
