/*Ce que doit faire votre programme :

L'algoréathlon se constitue de trois étapes à effectuer chaque jour : 2 km de natation, 34 km de cyclisme et 6 km de course à pied.

Sachant qu'un sportif répète ces trois étapes pendant 3 jours de suite, vous devez afficher la distance totale qu'il a parcourue à la fin du 1er jour,
à la fin du 2e jour, puis à la fin de l'algoréathlon complet.
Afin de rendre l'affichage convivial sur l'écran du robot, vous souhaitez mettre les trois valeurs sur une même ligne, avec une espace entre chaque valeur et la suivante.
Important : pour écrire ce programme, vous devez mémoriser la distance parcourue en un jour en lui donnant un nom, puis utiliser ce nom pour calculer les trois réponses. 
Appuyez-vous sur les explications ci-dessous.
*/

#include <stdio.h>

int main()
{
   int distance = 2 + 34 + 6;
   printf("%d\t", distance);
   printf("%d\t", 2 * distance);
   printf("%d\n", 3 * distance);
}
