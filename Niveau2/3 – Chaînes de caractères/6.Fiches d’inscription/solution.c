/*CONSTRAINTS

Chaque nom et prénom est au plus de longueur 100 et ne contient pas d'espace.
INPUT

Sur la première ligne, un entier nbPersonnes : le nombre total de personnes concernées.
Sur chacune des nbPersonnes suivantes, un prénom et un nom, séparés par une espace.
OUTPUT

Pour chaque personne, vous devez écrire sur la même ligne son nom, puis son prénom, séparés par 
une espace.
*/

#include <stdio.h>

#define MAX_LEN 101

int main()
{
    int nbPeople;
    scanf("%d", &nbPeople);
    getchar(); 

    char nom[nbPeople][MAX_LEN];
    char prenom[nbPeople][MAX_LEN];

    int i = 0;
    while (i < nbPeople)
    {
        scanf("%s %s", prenom[i], nom[i]);
        i++;
    }

    i = 0;
    while (i < nbPeople)
    {
        printf("%s %s\n", nom[i], prenom[i]);
        i++;
    }

    return 0;
}

//Solution France IOI 

/*Algorithme

Pour chacune des personnes il faut lire le prénom et le nom puis les afficher à nouveau, en commençant par le nom puis le prénom.
*/

#include <stdio.h>
int main()
{
   int nbPersonnes;
   char nom[101], prenom[101];
   scanf("%d\n", &nbPersonnes);
   for (int idPersonne = 0; idPersonne < nbPersonnes; idPersonne = idPersonne + 1)
   {
      scanf("%s", prenom);
      scanf("%s", nom);
      printf("%s %s\n", nom, prenom);
   }
}
