/*
Ce que doit faire votre programme :

Voici un exemple de socle :
Pyramide formée de 3 marches carrées de tailles décroissantes
Un socle est ainsi constitué d'étages, chaque étage ayant une hauteur égale à une unité et une base carrée. Le côté des carrés diminue de une unité à chaque étage.
Votre programme doit lire deux entiers, représentant respectivement la largeur du socle au niveau du sol et la largeur du socle au niveau de la face supérieure du socle. 
Il doit ensuite calculer et afficher le volume du socle.
EXAMPLE

input:
7
3
output:
135

Le volume du premier étage est 7 × 7 = 49, le volume du second est 6 × 6 = 36, etc. et le volume du dernier étage est 3 × 3 = 9. 
Le volume total est donc : 7 × 7 + 6 × 6 + 5 × 5 + 4 × 4 + 3 × 3 = 135.
*/

#include <stdio.h>

int main() {
    int   etage_max; 
    int   etage_min; 
    int   volume = 0;

    
    scanf("%d", &etage_max);
    scanf("%d", &etage_min);

    
    int i = etage_min;

    while (i <= etage_max) {
        volume += i * i;
        i++; 
    }

    printf("%d\n", volume);
}

