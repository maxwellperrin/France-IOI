/*Ce que doit faire votre programme :
L'épaisseur d'une feuille de papier est de 110 micromètres c'est à dire 0,110 millimètres. 
Si on la plie 15 fois sur elle-même et que l'épaisseur double à chaque fois, quelle sera l'épaisseur finale si on l'exprime en centimètres ? 
Votre programme devra calculer et afficher cette valeur (qui n'est pas forcément entière).*/

#include <stdio.h>

int main() {
    double paper_thickness = 0.110; 
    int i = 0;

    while (i < 15) {       
        paper_thickness *= 2;
        i++;
    }

    printf("%lf\n", paper_thickness / 10);

    return 0;
}

