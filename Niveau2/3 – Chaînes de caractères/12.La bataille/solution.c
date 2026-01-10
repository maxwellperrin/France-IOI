/*
INPUT

L'entrée contient deux lignes, correspondant respectivement aux cartes du joueur 1 et du joueur 2, dans l'ordre. 
Un jeu de cartes est constitué uniquement de lettre majuscules entre A et M (sans espaces).

OUTPUT

Sur la première ligne, il faut indiquer « 1 », « 2 » ou « = » selon que le gagnant est le premier ou le second joueur, ou bien qu’il y a égalité complète.
Sur la seconde ligne, il faut indiquer le nombre d’égalités qui ont eu lieu avant que le jeu ne se termine.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char cartes1[60], cartes2[60];
    int tour = 0;
    int len1, len2;
    char gagnant;
    
    scanf("%s", cartes1);
    scanf("%s", cartes2);

    len1 = strlen(cartes1);
    len2 = strlen(cartes2);

    
    while (tour < len1 && tour < len2 && cartes1[tour] == cartes2[tour]) {
        tour++;
    }


    if (tour == len1 && tour == len2) 
    {
        gagnant = '=';
    } 
    else if (tour == len1) 
    {
        gagnant = '2';
    } 
    else if (tour == len2) 
    {
        gagnant = '1';
    } 
    else 
    {
        if (cartes1[tour] < cartes2[tour])
            gagnant = '1';
        else
            gagnant = '2';
    }

 
    printf("%c\n", gagnant);
    printf("%d\n", tour);

    return 0;
}

// Solution France IOI 

/*Algorithme

Si l'on a jamais joué à la bataille il est bon de prendre quelques exemples et de les traiter "à la main". 
Ils seront utiles ensuite pour tester le programme. 
Trois exemples au moins sont nécessaires (égalité parfaite, 1 gagne car il possède une meilleure carte, 1 gagne car 2 n'a plus de cartes). 
Ensuite on peut commencer à penser à la structure du programme. Si on se base sur ce que l'on a fait à la main, on a envie d'écrire :

Lire les chaines de caractères cartes1 et cartes2
Tant que le vainqueur est inconnu
    on continue à jouer en comptant les égalités

Afficher le vainqueur et le nombre d'égalités

Maintenant que l'on a fixé les grandes lignes du code, on peut rentrer dans les détails. Que signifie « le vainqueur est inconnu » ?

Cela correspond au cas où toutes les cartes étaient identiques et que chaque joueur à encore au moins une carte. 
Et dans ce cas que signifie « on continue à jouer » ?

On passe à la carte suivante.
nbCartes1 <- longueur(cartes1)
nbCartes2 <- longueur(cartes2)
nbEgalités <- 0
tour <- 0

Tant que tour < nbCartes1 ET tour < nbCartes2 ET cartes1[tour] = cartes2[tour]
   nbEgalités <- nbEgalités + 1
   tour <- tour + 1

Un examen plus attentif nous montre que les variables tour et nbEgalités sont identiques. 
Cette dernière variable est donc inutile. Et le code se simplifie donc en :

tour <- 0

Tant que tour < nbCartes1 ET tour < nbCartes2 ET cartes1[tour] = cartes2[tour]

   tour <- tour + 1

Reste à afficher les résultats. Le plus simple est le cas d'égalité parfaite.

Si tour = nbCartes1 ET tour = nbCartes2

Si l'on n'est pas dans ce cas c'est que l'un des joueur à gagné. Par exemple, le joueur 1 à gagné quand 
le joueur 2 n'a plus de cartes ou quand il lui reste une carte et quelle est meilleure que celle de son adversaire. Ce qui se traduit par
sinon si tour = nbCartes2 OU (tour < nbCartes1 ET cartes1[tour] < cartes2[tour])*/

#include <stdio.h>
#include <string.h>
int main()
{
   char main1[53];
   char main2[53];
   scanf("%s %s",main1,main2);
   int long1 = strlen(main1);
   int long2 = strlen(main2);
   int tour = 0;
   while (tour < long1 && tour < long2 && main1[tour] == main2[tour])
      tour++;
   if (tour == long1 && tour == long2)
      printf("=");
   else if (tour == long2 || (tour < long1 && main1[tour] < main2[tour]))
      printf("1");
   else
      printf("2");
   printf("\n%d\n",tour);
   return 0;
}
