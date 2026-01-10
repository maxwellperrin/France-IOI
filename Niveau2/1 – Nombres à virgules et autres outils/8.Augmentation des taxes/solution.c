/*Ce que doit faire votre programme :

Votre programme doit lire trois nombres décimaux : la valeur actuelle de la taxe sur les fruits et légumes (en pourcentage), 
la nouvelle valeur de la taxe (en pourcentage), puis le prix actuel d'un légume, taxes comprises, en euros. 
Il devra calculer et afficher le prix du légume avec la nouvelle valeur de la taxe, arrondi au centime près.

EXAMPLEs

EXAMPLE 1
input:
5.5
19.6
24.9
output:
28.23
EXAMPLE 2
input:
21.5
21.5
19.99
output:
19.99

COMMENTS

On rappelle qu'une taxe de 15% signifie que pour un prix hors-taxe de 100 euros, le prix avec taxe sera de 115 euros.
*/

#include<stdio.h>
#include<math.h>

int   main()
{
   double   initialTax;
   scanf("%lf", &initialTax);
   
   double   newTax;
   scanf("%lf", &newTax);
   
   double   priceVeg;
   scanf("%lf", &priceVeg);
   
   double priceHT = priceVeg / (1 + initialTax / 100.0);
   
   double   newPrice = priceHT * (1 + newTax / 100);
   
   double roundedPrice = round(newPrice * 100) / 100.0;
   
   printf("%lf\n", roundedPrice);
   
   return 0;
}

// Solution France IOI 

#include <stdio.h>
#include <math.h>
 
int main()
{
   double taxeActuelle;
   double taxeFuture;
   double prixLegume;
   scanf("%lf%lf%lf\n", &taxeActuelle, &taxeFuture, &prixLegume);
     
   double nouveauPrix = prixLegume / ( 1 + taxeActuelle / 100) * (1 + taxeFuture / 100);
   nouveauPrix = round(nouveauPrix * 100) / 100;
   printf("%lf\n", nouveauPrix);
    
   return 0;
}
