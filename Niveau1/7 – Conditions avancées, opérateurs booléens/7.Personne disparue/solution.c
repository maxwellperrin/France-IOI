/*
Ce que doit faire votre programme :

On vous donne un entier, le numéro d'une personne recherchée, puis un entier tailleListe, et enfin tailleListe entiers parmi lesquels vous devez chercher le numéro de la personne. 
Si le numéro est présent dans la liste (il peut l'être plusieurs fois) vous devez afficher le texte "Sorti de la ville" sinon "Encore dans la ville".
EXAMPLE

input:
42
5
1
7
172
2
41
output:
Encore dans la ville
*/

#include <stdio.h>

int main()
{
    int   personneRecherchee;
    scanf("%d", &personneRecherchee);

    int   tailleListe;
    scanf("%d", &tailleListe);

    int   trouvee = 0;
    int   i = 0;

    while(i < tailleListe)
    {
        int   numero;
        scanf("%d", &numero);
        
        if(numero == personneRecherchee)
        {
            trouvee = 1;
        }
        i++;
    }

    if(trouvee)
    {
        printf("Sorti de la ville\n");
    }
    else
    {
        printf("Encore dans la ville\n");
    }
    return 0;
}
