/*Ce que doit faire votre programme :

Votre programme lira un entier, l'heure d'arrivée, qui sera compris entre 0 et 12 inclus. 0 correspond à midi, 1 à 1h de l'après-midi, etc. et 12 à minuit.
Le prix de la chambre est de 10 pièces à midi, et augmente de 5 pièces chaque heure après midi. Il est donc de 15 pièces à 13h, etc. Il ne peut cependant pas dépasser 53 pièces.
Votre programme devra afficher le prix à payer correspondant à l'heure d'arrivée donnée.
EXAMPLEs

EXAMPLE 1
input:
7
output:
45
*/
#include <stdio.h>

int main() 
{
    int heuredarrivee;
    int prixchambre;
   
    scanf("%d", &heuredarrivee);


    if (heuredarrivee < 0 || heuredarrivee > 12) 
    {
        printf("Erreur : l'heure doit être entre 0 et 12.\n");
        return 1; 
    }

    prixchambre = 10 + (heuredarrivee * 5);

    if (prixchambre > 53) 
    {
        prixchambre = 53;
    }
    
    printf("%d\n", prixchambre);
}
