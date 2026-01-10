/*Votre programme lira d'abord un entier représentant le nombre de montées et descentes que vous avez réalisées. 
Pour chaque montée ou descente, il faut ensuite lire un entier représentant la variation d'altitude, 
cet entier étant strictement positif dans le cas d'une montée et strictement négatif dans le cas d'une descente (il n'y a rien à compter pour les tronçons qui sont bien à plat). 
Votre programme devra afficher l'altitude totale montée puis l'altitude totale descendue (ces deux nombres sont positifs).

EXAMPLE

input:
5
4
7
-6
-3
2
output:
13
9
*/

int main()
{
    int nbrVariations;
    scanf("%d", &nbrVariations);

    int altitudeMontee = 0;
    int altitudeDescendue = 0;

    int i = 0;
    while (i < nbrVariations)
    {
        int variation;
        scanf("%d", &variation);

        if (variation > 0)
        {
            altitudeMontee += variation;
        }
        else if (variation < 0)
        {
            altitudeDescendue += -variation;
        }

        i++;
    }

    printf("%d\n", altitudeMontee);
    printf("%d\n", altitudeDescendue);

    return 0;
}
