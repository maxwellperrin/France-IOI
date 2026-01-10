/*Ce que doit faire votre programme :

Une chambre ne coûte rien si on a 60 ans (l'âge de l'aubergiste !) et 5 écus si on a strictement moins de 10 ans. 
Pour les autres personnes c'est 30 écus plus un supplément de 10 écus si on a au moins 20 kilos de bagages.
Votre programme doit lire deux entiers, l'âge et le poids des bagages de la personne et doit afficher le prix, sous la forme d'un entier.
EXAMPLE

input:
22
25
output:
40
*/

#include <stdio.h>

int   main()
{
   int   age;
   int   poidsBagages;
   
   scanf("%d", &age);
   scanf("%d", &poidsBagages);
   
   int prixchambre;
   prixchambre = 0;
   
   if(age == 60)
   {
      prixchambre = 0;
   }
   else if(age < 10)
   {
      prixchambre = 5;
   }
   else
   {
      prixchambre = 30;
      if(poidsBagages >= 20)
      {
         prixchambre = 30 + 10;
      }
   }
   printf("%d\n", prixchambre);
}
