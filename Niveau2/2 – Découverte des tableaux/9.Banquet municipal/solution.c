/*Ce que doit faire votre programme :

Votre programme devra lire deux entiers : le nombre total de positions sur la table (au maximum 1000) et le nombre de changements de positions. 
Il devra ensuite lire, pour chaque position, un entier : le numéro de la personne qui doit, actuellement, s'installer à cette position.

Il faut lire ensuite les changements exprimés sous la forme de deux entiers chacun : 
position1 et position2. Un changement (position1, position2) signifie que les deux personnes qui étaient à ses positions doivent échanger leurs places (les positions sont indexées à partir de 0).

Vous devrez afficher, pour chaque position, le numéro de la personne qui s'y trouve une fois tous les changements faits.

EXAMPLE


input:

5
3
1
2
3
4
5
1
2
1
3
4
0

output:

5
4
2
3
1
COMMENTS

Evolution des numéros dans l'exemple :
Au début : 1,2,3,4,5
Après le changement (1, 2) : 1,3,2,4,5
Après le changement (1, 3) : 1,4,2,3,5
Après le changement (4, 0) : 5,4,2,3,1
*/

#include <stdio.h>

int   main()
{
   int   nbPosition;
   scanf("%d", &nbPosition);
   
   int   swapPosition;
   scanf("%d", &swapPosition);
   
   int   nb[nbPosition];
   
   int   i = 0;
   
   while(i < nbPosition)
   {
      scanf("%d", &nb[i]);
      i++;
   }
   
   int   temp = 0;
   int   j = 0;
   while(j < swapPosition)
   {
      int   position1;
      scanf("%d", &position1);
      
      int   position2;
      scanf("%d", &position2);
      
      if (position1 >= 0 && position1 < nbPosition && position2 >= 0 && position2 < nbPosition) 
      {
            temp = nb[position1];
            nb[position1] = nb[position2];
            nb[position2] = temp;
      }
      j++;   
    }
    
    i = 0;
    while(i < nbPosition)
    {
       printf("%d\n", nb[i]);
       i++;
    }
    return 0;    
}

// Solution France IOI

/*Algorithme

L'algorithme est constitué de trois parties : lire les numéros initiaux, faire les changements, afficher les valeurs finales. 
Seule la deuxième partie demande à être détaillée. En effet, la principale difficulté est de savoir comment inverser les valeurs de deux éléments d'un tableau.

Une première idée, pour inverser les éléments d'indices 0 et 2, consiste à utiliser le code suivant :

numero <- [1, 2, 3]    # numero contient 1,2,3
numero[0] <- numero[2] # numero contient 3,2,3
numero[2] <- numero[0] # numero contient 3,2,3

mais on voit que cela ne marche pas, car on a effacé la valeur de "numero[0]" avant de pouvoir la lire pour la mettre dans "numero[2]". 
Il faut donc trouver un moyen de stocker cette valeur quelque part, par exemple dans une autre variable :

numero <- [1, 2, 3]    # numero contient 1,2,3
temp <- numero[0]      # numero contient 1,2,3 et temp contient 1
numero[0] <- numero[2] # numero contient 3,2,3 et temp contient 1
numero[2] <- temp      # numero contient 3,2,1 et temp contient 1

Une fois cette difficulté surmontée, le reste du programme est facile à écrire.
*/

#include <stdio.h>
 
int main()
{
   int nbPersonnes;
   int nbChangements;
   scanf("%d%d\n", &nbPersonnes, &nbChangements);
   int identifiant[nbPersonnes];
   for (int idPersonne = 0; idPersonne < nbPersonnes; idPersonne = idPersonne + 1)
   {
      scanf("%d\n", &identifiant[idPersonne]);
   }
     
   for (int idChang= 0; idChang < nbChangements; idChang = idChang + 1)
   {
      int premier;
      int second;
      scanf("%d%d\n", &premier, &second);
      int temp = identifiant[premier];
      identifiant[premier] = identifiant[second];
      identifiant[second] = temp;
   }
     
   for (int idPersonne = 0; idPersonne < nbPersonnes; idPersonne = idPersonne + 1)
   {
      printf("%d\n",identifiant[idPersonne]);
   }
}
