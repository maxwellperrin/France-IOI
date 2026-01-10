/*
Ce que doit faire votre programme :

Votre programme devra lire trois entiers : le nombre total de mesures envisagées ainsi que la température minimum et maximum autorisées. Les entiers suivants seront les différentes températures relevées au cours du temps.
Tant que les températures relevées restent dans le bon intervalle, votre programme devra écrire le texte « Rien à signaler », mais dès que la température n'est pas bonne il doit écrire le texte « Alerte !! » et s'arrêter.
EXAMPLEs

EXAMPLE 1
input:
5
10
20
15
10
20
0
15
output:
Rien à signaler
Rien à signaler
Rien à signaler
Alerte !!
EXAMPLE 2
input:
3
0
100
15
50
75
output:
Rien à signaler
Rien à signaler
Rien à signaler
*/

#include<stdio.h>

int   main()
{
   int   total_temp;
   scanf("%d", &total_temp);
   
   int   min_temp;
   scanf("%d", &min_temp);
   
   int   max_temp;
   scanf("%d", &max_temp);
   
   int   i = 0;
   
   while(i < total_temp)
   {
      int temp;
      scanf("%d", &temp);
      if(temp >= min_temp && temp <= max_temp)
      {
         printf("Rien à signaler\n");
      }
      else
      {
         printf("Alerte !!\n");
         break;
      }
      i++;
   }
   return 0;
}

