/*Les soldats de la garnison de la ville sont payés à la journée et pas au mois, ce qui fait que leur salaire n'est pas le même selon le mois. Le trésorier étant malade et les soldats voulant être payés vous vous proposez pour le remplacer. Certains soldats revenant de mission à l'extérieur, ils doivent recevoir leur paye pour les mois précédents également. Afin de ne pas faire d'erreur, vous décidez d'écrire un programme pour vous aider.
Ce que doit faire votre programme :

Écrivez un programme qui lit un numéro de mois algoréen, et affiche le nombre de jours de celui-ci. Les Algoréens disposent de leur propre calendrier. Voici les informations dont vous avez besoin :
Numéro du mois	Nombre de jours
1	30
2	30
3	30
4	31
5	31
6	31
7	30
8	30
9	30
10	31
11	29
EXAMPLE

input:
6
output:
31
*/

#include <stdio.h>

int   main()
{
   int   mois;
   scanf("%d", &mois);
   
   if((mois >=1 && mois <= 3) || (mois >= 7 && mois <= 9))
   {
      printf("30");
   }
   else if((mois >= 4 && mois <= 6) || (mois == 10))
   {
      printf("31");
   }
   else
   {
      printf("29");
   }
}
