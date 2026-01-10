/*Ce que doit faire votre programme :

Votre programme doit lire un entier, qui représente la longueur du côté d'un champ carré en mètres. 
Il doit ensuite afficher la masse que l'on pourra récolter de ce champ si l'on suppose que la production sera de 23 kg par mètre carré.
EXAMPLE

input:
10
output:
2300
COMMENTS

Dans l'exemple, l'entrée contient l'entier 10 : l'utilisateur du programme souhaite donc obtenir la masse produite par un champ de côté 10 m. 
Le champ a une aire de 10 × 10 = 100 m² : la masse totale qu'on peut récolter est donc 100 × 23 = 2 300.
Pour l'entrée 10, la sortie est donc 2300.
À vous d'écrire un programme qui fonctionne quelle que soit la longueur du champ donnée au programme.
*/

#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)


int main()
{
    int nbMetreCarre;
    int productionMetreCarre;
    
    scanf("%d", &nbMetreCarre);
    productionMetreCarre = 23;
    printf("%d\n", nbMetreCarre * nbMetreCarre * productionMetreCarre); 
}


