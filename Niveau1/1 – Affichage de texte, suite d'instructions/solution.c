/*
Ce que doit faire votre programme :

Votre programme doit d'abord lire un entier, la population totale de la ville. Sachant qu'une personne était malade au jour 1 et que chaque malade contamine deux nouvelles personnes le jour suivant (et chacun des jours qui suivent), vous devez calculer à partir de quel jour toute la population de la ville sera malade.
EXAMPLEs

EXAMPLE 1
input:
3
output:
2
EXAMPLE 2
input:
10
output:
4
COMMENTS

On a 1 malade le premier jour, donc 2 nouveaux malades le second jour, soit un total de 3 malades. On a donc 6 nouveaux malades au troisième jour, soit un total de 9 malades. On a donc 18 nouveaux malades au quatrième jour, soit…
*/

#include<stdio.h>

int   main()
{
   int   population_totale;
   scanf("%d", &population_totale);
   
   int   nbr_total_malade = 1;
   int jours = 1;
   
   while(nbr_total_malade < population_totale)
   { 
      nbr_total_malade *= 3;
      
      jours++;
   }
   printf("%d", jours);
}

