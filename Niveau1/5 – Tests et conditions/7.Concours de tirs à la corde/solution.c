/*Ce que doit faire votre programme :

Votre programme devra lire un premier entier : le nombre de membres nbMembres qui constituent une équipe. 
Ensuite, il devra lire les poids (en kilogrammes), au total nbMembres × 2, sachant que le premier poids est celui d'un joueur de la 1re équipe, 
le deuxième poids celui d'un joueur de la 2e équipe, le troisième la 1re équipe, le quatrième la 2e équipe, etc.
Après avoir calculé le poids total de chaque équipe, vous devrez afficher le texte « L'équipe X a un avantage » 
(en remplaçant X par la valeur 1 ou 2), en considérant qu'une équipe est avantagée si elle a un poids total supérieur à celui de l'autre.
Vous afficherez ensuite le texte « Poids total pour l'équipe 1 : » suivi du poids de l'équipe 1, puis « Poids total pour l'équipe 2 : » suivi du poids de l'équipe 2 (voir l'exemple ci-dessous).
On vous garantit que les deux équipes n'auront pas le même poids total.
EXAMPLE

input:
3
40
80
50
50
60
10

output:

L'équipe 1 a un avantage
Poids total pour l'équipe 1 : 150
Poids total pour l'équipe 2 : 140

COMMENTS

Chaque équipe est composée de trois joueurs. Ceux de la première pèsent 40, 50 et 60 kg, tandis que ceux de la seconde font 80, 50 et 10 kg. Cela fait 150 kg opposés à 140 kg.
*/

#include <stdio.h>

int main()
{
    int nbrMembres;
    int equipe1 = 0;
    int equipe2 = 0;
    int i = 0;

    scanf("%d", &nbrMembres);

    while (i < nbrMembres)
    {
        int poids1, poids2;
        scanf("%d %d", &poids1, &poids2);
        equipe1 += poids1;
        equipe2 += poids2;
        i++;
    }

    if (equipe1 > equipe2)
    {
        printf("L'équipe 1 a un avantage\n");
    }
    else
    {
        printf("L'équipe 2 a un avantage\n");
    }

    printf("Poids total pour l'équipe 1 : %d\n", equipe1);
    printf("Poids total pour l'équipe 2 : %d\n", equipe2);

    return 0;
}
