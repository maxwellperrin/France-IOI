/*Ce que doit faire votre programme :

Votre programme doit lire entier : un nombre de personnes à considérer. Ensuite, pour chaque personne, il doit lire son signalement sous la forme de cinq entiers : sa taille en centimètres, son âge en années, son poids en kilogrammes, un entier valant 1 si la personne possède un cheval et 0 sinon, et un entier valant 1 si la personne à les cheveux bruns et 0 sinon.
On veut déterminer pour chaque personne à quel point elle correspond aux 5 critères suivants :
il aurait une taille supérieure ou égale à 178 cm et inférieure ou égale à 182 cm ;
il aurait au moins 34 ans ;
il pèserait strictement moins de 70 kg ;
il n'a pas de cheval ;
il a les cheveux bruns.
Lorsque cela n'est pas précisé explicitement, les inégalités sont au sens large.
Pour chaque personne, vous devez tester tous les critères. S'ils sont vérifiés tous les 5, vous devez afficher « Très probable ». Si seulement 3 ou 4 sont vérifiés, vous devez afficher « Probable ». Si aucun n'est vérifié, vous devez afficher « Impossible », et dans les autres cas, vous devez afficher « Peu probable ».
EXAMPLE

input:
1
180
40
65
0
1
output:
Très probable
*/

#include <stdio.h>

int main() {
    int n;  
    scanf("%d", &n);  // nombre de personnes

    int i = 0;
    while (i < n) {
        int taille, age, poids, cheval, cheveux_bruns;
        int count = 0;

        scanf("%d", &taille);
        scanf("%d", &age);
        scanf("%d", &poids);
        scanf("%d", &cheval);
        scanf("%d", &cheveux_bruns);

        if (taille >= 178 && taille <= 182) count++;
        if (age >= 34) count++;
        if (poids < 70) count++;
        if (cheval == 0) count++;
        if (cheveux_bruns == 1) count++;

        
        if (count == 5) {
            printf("Très probable\n");
        } else if (count >= 3) {
            printf("Probable\n");
        } else if (count == 0) {
            printf("Impossible\n");
        } else {
            printf("Peu probable\n");
        }

        i++;
    }

    return 0;
}


