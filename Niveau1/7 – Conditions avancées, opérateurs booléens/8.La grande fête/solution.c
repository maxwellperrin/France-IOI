/*
Ce que doit faire votre programme :

On vous donne une période de temps à étudier, et les dates d'arrivée et de départ d'un certain nombre d'invités d'une fête. 
Écrivez un programme qui détermine combien d'invités ont été présents à un moment de la période étudiée.
Votre programme doit d'abord lire deux entiers : la date de début et la date de fin de la période étudiée. 
L'entier suivant, nbInvites, est le nombre total d'invités. 
Pour chaque invité, votre programme doit ensuite lire deux entiers : sa date d'arrivée et de départ. 
Un invité est suspect si la période à laquelle il a été présent intersecte la période étudiée. Votre programme doit afficher le nombre d'invités suspects.
EXAMPLE

input:
8
12
5
4
7
2
11
3
6
1
8
14
19
output:
*/

#include <stdio.h>

int   main()
{
   int   debutperiode, finperiode;
   scanf("%d%d", &debutperiode, &finperiode);
   
   int   nbInvites;
   scanf("%d", &nbInvites);
   
   int   suspects = 0;
   
   int   i = 0;
   
   while(i < nbInvites)
   {
      int   arrivee, depart;
      scanf("%d%d", &arrivee, &depart);
      
      if(arrivee <= finperiode && depart >= debutperiode)
      {
         suspects++;
      }
      i++;
   }
   printf("%d\n", suspects);
}2
