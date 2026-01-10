/*Ce que doit faire votre programme :

Vous devez écrire un programme qui détermine si deux soldats ont été de garde en même temps.
Votre programme doit lire quatre entiers : la date du début et la date de fin (incluse) du service du premier soldat puis celles du second soldat.
Si les deux soldats ont, à un moment (même une seule seconde), été de garde en même temps le programme devra écrire "Amis" et sinon "Pas amis".
EXAMPLEs

EXAMPLE 1
input:
2
5
3
6
output:
Amis
EXAMPLE 2
input:
1
5
10
15
output:
Pas amis
*/

#include <stdio.h>

int main()
{
    int debutService1, finService1;
    scanf("%d %d", &debutService1, &finService1);

    int debutService2, finService2;
    scanf("%d %d", &debutService2, &finService2);

    if (debutService1 <= finService2 && debutService2 <= finService1) 
    {
        printf("Amis");
    }
    else
    {
        printf("Pas amis");
    }
}
