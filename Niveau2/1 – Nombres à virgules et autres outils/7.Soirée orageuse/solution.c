/*Ce que doit faire votre programme :

Votre programme devra lire un décimal, le temps (en secondes) entre le moment où vous voyez l'éclair et le moment où vous entendez le tonnerre. 
Il devra calculer et afficher la distance entre vous et l'orage, arrondi au kilomètre près.
On supposera que la lumière se déplace instantanément. La vitesse du son dépend de paramètres comme l'altitude, la température...
mais on supposera qu'en cette soirée elle vaut 340,29 mètres / seconde.

EXAMPLE

input:
3.0
output:
1
*/

#include<stdio.h>
#include<math.h>

int   main()
{
   double   lightTime;
   scanf("%lf", &lightTime);
   
   double   stormDistanceKm = (lightTime * 340.29) / 1000;
   printf("%lf\n", round(stormDistanceKm));
   
   return 0;
}

// Solution France IOI

/* Algorithme

Comme on connait la vitesse du son et le temps que celui-ci a mis pour parcourir la distance il est facile de calculer la distance (en mètres) en faisant
distanceMetres <- tempsParcours * vitesseSon
on a donc
distanceKilometres <-  (tempsParcours * vitesseSon) / 1000
et donc avec l'arrondi
distanceKilometres <- ArrondiPlusProche((tempsParcours * vitesseSon) / 1000)
*/

#include <stdio.h>
#include <math.h>
int main()
{
   double vitesseSon = 340.29;
   
   double tempsParcours;
   scanf("%lf", &tempsParcours);
   int distanceKilometres = (int)(round((tempsParcours * vitesseSon) / 1000));
   printf("%d", distanceKilometres);
   
   return 0;
}
