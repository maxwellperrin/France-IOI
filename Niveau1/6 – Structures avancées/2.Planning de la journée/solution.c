/*Ce que doit faire votre programme :

Votre programme doit d'abord lire un entier décrivant votre position actuelle sur la route, sous la forme d'un nombre de kilomètres par rapport au début de la route. 
Ensuite, il doit lire un entier donnant le nombre de villages. 
Pour chaque village, il doit lire un entier décrivant la position de ce village le long de cette même route. 
Votre programme doit alors afficher le nombre de villages qui se trouvent à une distance inférieure ou égale à 50 km de votre position actuelle.

EXAMPLE

input:
120
5
30
113
187
145
129
output:
3
COMMENTS

Vous êtes à la position 120 et il y a donc trois villages à moins de 50 km : ceux aux positions 113, 145 et 129. Les deux autres villages sont trop lointains
*/

#include <stdio.h>

int main()
{
    int positionActuelle;
    scanf("%d", &positionActuelle);

    int nbrVillage;
    scanf("%d", &nbrVillage);

    int destinationOK = 0;

    int i = 0;
    while (i < nbrVillage)
    {
        int positionVillage;
        scanf("%d", &positionVillage);

        int distance = positionActuelle - positionVillage;

        
        if (distance < 0)
        {
            distance = -distance;
        }

        if (distance <= 50)
        {
            destinationOK++;
        }

        i++;
    }

    printf("%d\n", destinationOK);

    return 0;
}.
