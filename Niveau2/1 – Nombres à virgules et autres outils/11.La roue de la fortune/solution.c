/*Ce que doit faire votre programme :

Votre programme doit commencer par lire un entier nbZones. Sachant que la roue va tourner de nbZones zones, vous devez calculer (puis afficher) sur quelle zone le curseur va arriver.
Ainsi, si la route tourne de +2 zones alors le curseur arrive sur la zone 2, et si la roue tourne de -2 zones, alors le curseur arrive sur la zone 22.
EXAMPLEs

EXAMPLE 1

input:
25
output:
1

EXAMPLE 2

input:
-50
output:
22
*/

#include <stdio.h>

int main() 
{
    int nbZones;
    scanf("%d", &nbZones);
    
    if(nbZones == 0)
    {
      printf("%d", nbZones);
    }
    else if(nbZones > 0)
    {
        int quotient = nbZones / 24;
        int result = quotient * 24;
        int reminder = nbZones - result;
                      
        printf("%d", reminder);
    }
    else if(nbZones < 0)
    {
        int quotient = nbZones / 24;
        int result = quotient * 24;
        int reminder = nbZones - result;
        int curseur  = 24 + reminder;
        
        printf("%d", curseur);
    }
}

#include <stdio.h>
int main()
{
    int nbZones;
    scanf("%d", &nbZones);
    
    int curseurDepart = 0;
    int curseur = ((curseurDepart + nbZones) % 24 + 24) % 24;
    
    printf("%d\n", curseur);
    return 0;
}

int main()
{
    int nbZones;
    scanf("%d", &nbZones);

    int curseur = nbZones;

    while (curseur < 0) {
        curseur += 24;
    }
    while (curseur >= 24) {
        curseur -= 24;
    }

    printf("%d\n", curseur);
    return 0;
}

// Solution France IOI 

#include <stdio.h>
int main()
{
  int nbZones;
  scanf("%d", &nbZones);
  printf("%d", ((nbZones % 24) + 24 ) % 24);
}
