/*Ce que doit faire votre programme :

Votre programme doit lire la description de plusieurs paires de zones rectangulaires, et pour chacune, déterminer si les deux rectangles s'intersectent.
Vous devez lire un premier entier, le nombre de paires de zones que votre programme devra tester. Ensuite, pour chaque paire possible, deux zones rectangulaires et parallèles aux axes vous sont données l'une après l'autre. Chaque zone est décrite par 4 entiers : son abscisse minimale et maximale puis son ordonnée minimale et maximale.
Sur cet exemple, la zone du bas est donc décrite par les 4 entiers (1, 6, 1, 5) et l'autre par (4, 9, 3, 8) :

Pour chaque paire de zones, votre programme doit écrire "OUI" si les zones s'intersectent et "NON" sinon. Si elles ne font que se toucher sur les bords il doit écrire "NON".
EXAMPLE

input:
1
1
6
1
5
4
9
3
8
output:
OUI
*/

#include <stdio.h>

int main()
{
    int nbrPairesZones;
    scanf("%d", &nbrPairesZones);

    int i = 0;
    while (i < nbrPairesZones)
    {
        int absmin1, absmax1, ordmin1, ordmax1;
        int absmin2, absmax2, ordmin2, ordmax2;

        scanf("%d%d%d%d", &absmin1, &absmax1, &ordmin1, &ordmax1);
        scanf("%d%d%d%d", &absmin2, &absmax2, &ordmin2, &ordmax2);

        if (absmin1 < absmax2 && absmin2 < absmax1 && ordmin1 < ordmax2 && ordmin2 < ordmax1) 
        {
            printf("OUI\n");
        } else 
        {
            printf("NON\n");
        }
        i++;
    }

    return 0;
}

