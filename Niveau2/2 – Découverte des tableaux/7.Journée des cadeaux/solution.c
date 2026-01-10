/*Ce que doit faire votre programme :

Il devra lire un premier entier, le nombre d'habitants (au plus 1000) puis, pour chaque habitant il devra lire sa fortune, un entier. 
Il devra calculer puis afficher une valeur permettant de dire facilement si une personne est riche ou pas, 
simplement en regardant si la fortune de cette personne est plus grande ou plus petite que cette valeur.
Deux cas peuvent se présenter :
Si le nombre d'habitants est impair, par exemple si leurs fortunes sont 10, 5, 12, 8, 3 alors la valeur recherchée est 8. 
En effet, il y aura alors 2 personnes "riches" (10 et 12), 2 "moins riches" (3 et 5) et 1 juste au milieu (8) qui ne donnera ni recevra de cadeau.
Si le nombre d'habitants est pair, par exemple si leurs fortunes sont 10, 5, 12, 8, 3, 9 alors la valeur recherchée est entre 8 et 9. 
Il y a en effet 3 personnes "riches" (9, 10 et 12) et 3 "moins riches" (3, 5 et 8). Par convention on prendra la valeur 8.5, c'est-à-dire la moyenne de 8 et 9.

EXAMPLEs

EXAMPLE 1

input:
5
10
5
12
8
3

output:
8

EXAMPLE 2

input:
6
10
5
12
8
3
9

output:
8.5
*/

#include <stdio.h>

int main() 
{
    int nb_inhabitants;
    scanf("%d", &nb_inhabitants);

    int wealth[nb_inhabitants];  
    int i = 0, j, temp;

    
    while (i < nb_inhabitants) {
        scanf("%d", &wealth[i]);
        i++;
    }

    
    int length = sizeof(wealth) / sizeof(wealth[0]);
    i = 0;  
    while (i < length - 1) 
    {
        j = 0;  
        while (j < length - i - 1) 
        {
            if (wealth[j] > wealth[j + 1]) 
            {
                temp = wealth[j];
                wealth[j] = wealth[j + 1];
                wealth[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    if (length % 2 == 0) 
    {
        double mediane = (wealth[length / 2 - 1] + wealth[length / 2]) / 2.0;
        printf("%g\n", mediane);
    } 
    else 
    {
        int mediane = wealth[length/2];
        printf("%d\n", mediane);
    }

    return 0;
}

// Solution France IOI 

/*Algorithme

Pour trouver la (les deux) valeur(s) du milieu on peut commencer par stocker toutes les valeurs dans un tableau puis trier ce tableau. 
Il faut ensuite faire attention au calcul de l'indice du milieu. Une bonne technique pour cela est de regarder sur un exemple. 
On a deux cas à traiter, selon la parité du nombre d'éléments :
Cas impair (11 élements) : on cherche à avoir la sixième valeur donc celle d'indice égal à 5. Pour obtenir 5 à partir de 11 on fait tout simplement (11 - 1) / 2.
Cas pair (12 élements) : on cherche à calculer la moyenne des sixième et septième valeurs donc celles d'indices égaux à 5 et 6. 
Pour obtenir 5 et 6 à partir de 12 on fait tout simplement (12 / 2 - 1) et (12 / 2).
La valeur qu'on demandait de calculer dans cet exercice s'appelle la médiane de l'ensemble des fortunes.
*/

#include <stdio.h>
#include <stdlib.h>
 
int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
 
int main()
{
   int nbPersonnes;
   scanf("%d\n",&nbPersonnes);
   int fortune[nbPersonnes];
   for (int idPersonne = 0; idPersonne < nbPersonnes; idPersonne = idPersonne + 1)
   {
      scanf("%d\n",&fortune[idPersonne]);
   }
     
   qsort( fortune, nbPersonnes, sizeof(int), compare );
     
   if ((nbPersonnes % 2) == 1)
   {
      int milieu = (nbPersonnes - 1) / 2;
      printf("%d\n", fortune[milieu] );
   }
   else
   {
      int milieu = nbPersonnes / 2;
      printf("%.1lf\n", (double)( fortune[milieu - 1] + fortune[milieu] ) / 2 );
   }
}

