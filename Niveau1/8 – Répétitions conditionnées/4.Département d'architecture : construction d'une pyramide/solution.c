/* Ce que doit faire votre programme :

Votre programme doit d'abord lire un entier : le nombre maximum de pierres dont pourra être composée la pyramide. Il devra ensuite calculer et afficher un entier : la hauteur de la plus grande pyramide qui pourra être construite, ainsi que le nombre de pierres qui sera nécessaire.
EXAMPLEs

EXAMPLE 1
input:
20
output:
3
14
EXAMPLE 2
input:
26042
output:
42
25585
*/

#include <stdio.h>

int main()
{
    int stone_max;
    scanf("%d", &stone_max);

    int height = 0;
    int stones_used = 0;

    while (1)
    {
        height++;
        stones_used += height * height;

        if (stones_used > stone_max)
        {
            stones_used -= height * height;
            height--;
            break;
        }
    }

    printf("%d\n", height);
    printf("%d\n", stones_used);

    return 0;
}
