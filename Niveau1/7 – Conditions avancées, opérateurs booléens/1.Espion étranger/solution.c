/*
Ce que doit faire votre programme :

On vous donne un intervalle de temps pendant lequel on sait qu'un espion est arrivé, puis la date d'arrivée d'un certain nombre de personnes. Déterminez combien de ces personnes peuvent être cet espion.
Votre programme doit d'abord lire deux entiers : la date de début et la date de fin de l'intervalle pendant lequel on sait que l'espion est arrivé en ville. Il doit ensuite lire un entier nbEntrées, le nombre total de personnes entrées dans la ville, puis les nbEntrées nombres suivants qui représentent les dates d'entrée (non triées) des différentes personnes.
Votre programme doit afficher le nombre de personnes entrées entre les deux dates données, incluses.
EXAMPLE

input:
6
10
5
7
11
8
3
6
output:
3
COMMENTS

Dans l'exemple, l'espion est entré dans la ville entre le jour 6 et le jour 10, et 5 personnes sont enregistrées dans les données de la ville. Dans le schéma ci-dessous, une colonne correspond à un jour (dont le numéro se trouve en haut), et l'intervalle est représenté par le segment à bouts ronds :
Schéma de l'exemple
L'intervalle est projeté en bleu vers le bas.
Pour chaque personne Pi, on a représenté sa date d'entrée dans la ville avec une barre (accompagnée du numéro de la personne). On voit que 3 dates se trouvent dans l'intervalle.
*/

#include <stdio.h>

int   main()
{
   
   int   firstDay, lastDay;
   scanf("%d%d", &firstDay, &lastDay);
   
   int   TotalDays;
   scanf("%d", &TotalDays);
   
   int   TotalEntranceNumber;
   TotalEntranceNumber = 0;
   
   int   i;
   i   = 0;
   while(i < TotalDays)
   {
      int   dateEntrance;
      scanf("%d", &dateEntrance);
      if((dateEntrance >= firstDay) && (dateEntrance <= lastDay))
      {
         TotalEntranceNumber++;
      }
      i++;
   }
   printf("%d\n", TotalEntranceNumber);
}
