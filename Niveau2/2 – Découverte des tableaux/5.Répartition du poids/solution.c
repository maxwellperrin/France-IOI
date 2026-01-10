/*Ce que doit faire votre programme :

On vous décrit les charrettes qui composent une caravane, en vous donnant pour chacune, le poids des marchandises qu'elle transporte.

Votre programme doit déterminer quel poids ajouter ou retirer à chaque charrette, pour qu'elles transportent toutes ensuite le même poids, 
et ce sans modifier le poids total transporté par l'ensemble des charrettes de la caravane.

INPUT

L'entrée commence par un entier nbCharrettes (nbCharrettes <= 3000) : le nombre de charrettes de la caravane.

Les nbCharrettes lignes suivantes décrivent chacune une charrette par un nombre décimal : le poids qu'elle transporte initialement.

OUTPUT

Vous devez afficher nbCharrettes nombres décimaux sur la sortie : le poids à ajouter à chaque charrette (ce qui revient à en retirer si ce nombre est négatif), 
Dans le même ordre que celui de l'entrée. Il n'y a pas d'arrondis à faire.

EXAMPLE

input:

5
40.0
12.0
20.0
5.0
33.0

output:

-18.0
10.0
2.0
17.0
-11.0

COMMENTS

Dans cet exemple, on modifie toutes les charettes pour qu'elles transporte chacune un poids de 22.0, soit un total de 110 pour la caravane, comme au départ.
*/

#include <stdio.h>

int main() {
    int nbWain;
    scanf("%d", &nbWain);
   
    double initialWeight[nbWain];  
    int i = 0;
   
    double totalWeight = 0.0;
   
    while (i < nbWain) 
    {
        scanf("%lf", &initialWeight[i]);  
        totalWeight += initialWeight[i];  
        i++;
    }
   
    double averageWeight = totalWeight / nbWain;
   
    double targetWeight[nbWain];
    int j = 0;
   
    while (j < nbWain) {
        targetWeight[j] = averageWeight - initialWeight[j];
        printf("%lf\n", targetWeight[j]); 
        j++;
    }
    return 0;  
}

// Solution France IOI 


/*Algorithme

On souhaite que toutes les charrettes aient le même poids qui correspond à une répartition équitable. 
On commence donc par calculer le poids total puis on divise par le nombre de charrettes pour obtenir le poids moyen que chaque charrette devrait avoir. 
Pendant qu'on calcul ce poids total, on fait bien sûr attention à stocker dans un tableau de poids de chaque charrette car on en a besoin pour la suite.
Une fois qu'on connait le poids moyen, c'est-à-dire le poids que devrait avoir chaque charrette, il faut calculer le poids à ajouter ou enlever. 
On sait que si la charrettes n'est pas assez chargée il va falloir lui ajouter du poids et donc on devra afficher un nombre positif 
qui sera donc égal au poids moyen moins le poids de la charrette.
*/

#include <stdio.h>
 
int main()
{
   int nbCharrettes;
   scanf("%d\n",&nbCharrettes);
   double poids[nbCharrettes];
     
   double poidsTotal = 0.0;
   
   for (int numero = 0; numero < nbCharrettes; numero = numero + 1)
   {
      scanf("%lf\n",&poids[numero]);
      poidsTotal = poidsTotal + poids[numero];
   }
     
   double poidsMoyen = poidsTotal / nbCharrettes;
     
   for (int numero = 0; numero < nbCharrettes; numero = numero + 1)  
   {
      printf("%lf\n",poidsMoyen - poids[numero]);
   }
}
