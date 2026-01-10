/*Ce que doit faire votre programme :

Votre programme devra lire deux entiers, la superficie d'un champ des Arignon et la superficie d'un champ des Evaran. 
Si l'un des champs est plus grand d'au moins 10 m² (strictement) que l'autre champ, alors il faudra afficher le texte 
« La famille X a un champ trop grand », « X » devant bien sûr être remplacé par « Arignon » ou « Evaran » selon le cas.


EXAMPLE 1
input:
42
54
output:
La famille Evaran a un champ trop grand
*/

#include <stdio.h>

int main() {

    int Arignon; 
    int Evaran;

    scanf("%d %d", &Arignon, &Evaran);

    if (Arignon > Evaran + 10) 
    {
        printf("La famille Arignon a un champ trop grand\n");
    }
    else if (Evaran > Arignon + 10)
    {
       printf("La famille Evaran a un champ trop grand\n");
    }
    
}
