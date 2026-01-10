/*Ce que doit faire votre programme :

Votre programme devra lire un entier, la population actuelle de la ville, puis un nombre décimal, la croissance prévue de la population, en pourcentage. 
Il devra alors afficher la nouvelle population de la ville sous la forme d'un nombre entier. 
On considérera, par convention, qu'une population de 31,4 habitants signifie qu'il y a 31 habitants, on ne compte donc que les habitants « entiers » !

EXAMPLEs

EXAMPLE 1
input:
123
7.0
output:
131
EXAMPLE 2
input:
456
-5.5
output:
430
*/

#include<stdio.h>
 #include<math.h>
 
 int   main()
 {
    int   pop;
    scanf("%d", &pop);
    
    double   growth;
    scanf("%lf", &growth);
    
    double pop_expectation = pop * (1 + growth / 100.0);
    
    double arrondiInf = floor(pop_expectation);
    
    printf("%lf", arrondiInf);
    
    return 0;
}

// Solution France IOI 

#include <stdio.h>
#include <math.h>
 
int main()
{
   int populationActuelle;
   double croissancePourcent;
   scanf("%d%lf\n", &populationActuelle, &croissancePourcent);
   int populationFuture = floor( populationActuelle * (1 + croissancePourcent / 100) );
   printf("%d\n", populationFuture);
   
   return 0;
}

