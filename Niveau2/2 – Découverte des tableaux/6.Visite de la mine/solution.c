/*Ce que doit faire votre programme :

Il existe 5 types de déplacements, représentés par 5 entiers différents : aller à gauche (1), aller à droite (2), aller tout droit (3), monter (4) et descendre (5).

Le premier entier à lire est le nombre total de déplacements (1000 au maximum). Ensuite, chaque déplacement (représenté par un entier) est indiqué sur sa propre ligne.

Vous devez afficher la suite des déplacements à faire pour aller de votre position actuelle à la sortie.

EXAMPLE

input:
6

1
3
2
4
4
5
output:
4
5
5
1
3
2
*/

#include <stdio.h>

int main()
{
    int deplacementInverse[6] = {0, 2, 1, 3, 5, 4};

    int nbDeplacements;
    scanf("%d", &nbDeplacements);

    int chemin[nbDeplacements];

    int i = 0;
    while (i < nbDeplacements) {
        scanf("%d", &chemin[i]);
        i++;
    }

    i = nbDeplacements - 1;
    while (i >= 0) {
        int deplacement = chemin[i];
        printf("%d\n", deplacementInverse[deplacement]);
        i--;
    }

    return 0;
}

// Solution France IOI 

/*Algorithme

Dans le principe, on commence par lire tous les déplacements faits puis il faut les afficher, en partant de la fin, en inversant à chaque fois les déplacements. 
On pourrait donc avoir un code du type

Si deplacement = 1
   deplacement <- 2
SinonSi deplacement = 2
   deplacement  <- 1
SinonSi deplacement = 4
   deplacement <- 5
SinonSi deplacement = 5
   deplacement <- 4

C'est cependant assez répétitif et on sent qu'il est possible de faire mieux. 
On peut en effet utiliser un tableau qui nous donnera, pour chaque déplacement, le déplacement inverse :
deplacementInverse <- [0, 2, 1, 3, 5, 4]
deplacement <- deplacementInverse[deplacement]
Cette technique est très courante et permet d'avoir des codes plus courts. 
Vous aurez l'occasion de la réutiliser à de nombreuses occasions.
On notera que si un tableau a nbDeplacements éléments, alors son dernier élément a pour indice nbDeplacements - 1.
*/


#include <stdio.h>
 
int main()
{
   int deplacementInverse[6] = {0, 2, 1, 3, 5, 4};
 
   int nbDeplacements;
   scanf("%d\n",&nbDeplacements);
   int chemin[nbDeplacements];
     
   for (int numero = 0; numero < nbDeplacements; numero = numero + 1)
   {
      scanf("%d\n",&chemin[numero]);
   }
     
   for (int numero = nbDeplacements-1; numero >= 0; numero = numero - 1)
   {
      int deplacement = chemin[numero];
      printf("%d\n",deplacementInverse[deplacement]);
   }
}
