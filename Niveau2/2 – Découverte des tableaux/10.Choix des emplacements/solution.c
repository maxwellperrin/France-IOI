/*Ce que doit faire votre programme :

Votre programme devra lire le nombre d'emplacements nbEmplacements (au maximum 1 000), puis pour chaque emplacement à partir de 0, 
le numéro du marchand à qui est attribué l'emplacement (entre 0 et nbEmplacements − 1).
Ensuite, pour chaque marchand de 0 à nbEmplacements − 1, votre programme devra afficher le numéro de l'emplacement qui lui est attribué.
EXAMPLE

input:
5
1
4
0
3
2
output:
2
0
4
3
1
COMMENTS

Il y a 5 positions : la première est utilisée par le marchand 1, la seconde est utilisée par le marchand 4, la troisième le marchand 0, etc.
En sortie, on donne les positions des marchands par ordre des numéros des marchands :
marchand n°0 : position 2 ;
marchand n°1 : position 0 ;
marchand n°2 : position 4 ;
marchand n°3 : position 3 ;
marchand n°4 : position 1.
*/

#include <stdio.h>

int   main()
{
   int   nbEmplacements;
   scanf("%d", & nbEmplacements);
   
   int   marchand[nbEmplacements];
   int   position[nbEmplacements];
   
   int   i;
   while(i < nbEmplacements)
   {
      scanf("%d", &marchand[i]);
      i++;
   }
   
   i = 0;
   while(i < nbEmplacements)
   {
      position[marchand[i]] = i;
      i++;
   }
   
   i = 0;
   while(i < nbEmplacements)
   {
      printf("%d\n", position[i]);
      i++;
   }
   return 0;
}

// Solution France IOI 

/* Algorithme

Dans l'entrée, on nous fournit pour chaque emplacement le numéro du marchand qui s'y trouve. On pourrait donc créer le tableau suivant :
Pour iEmp de 0 à nbEmplacements - 1
  
 marchands[iEmp] <- lireEntier()

Or, ce qu'on nous demande au contraire, c'est d'afficher la liste des emplacements correspondant à chaque marchand dans l'ordre de leurs numéros, 
ou plus simplement d'indiquer pour chaque marchand son emplacement. Il faut donc « inverser » les données ! 
Au lieu d'un tableau qui met les marchands à leur emplacement, on crée un tableau dans lequel on va mettre les emplacements au numéro du marchand qui le possède. 
On peut découper la lecture et la mise à jour du tableau (ce qui permet de nommer la valeur) :

iMarchand <- lireEntier()

emplMarchands[iMarchand] <- iEmp

Dans certains langages, on n'a d'ailleurs pas d'autre choix. 
Remarquez que dans un sens, on nomme le tableau marchands, donc uniquement en fonction du rôle des valeurs contenues, et dans l'autre sens, 
On le nomme emplMarchands (raccourci pour « emplacements des marchands »), donc en combinant le contenu et le rôle des indices. 
Nous estimons ainsi que les emplacements sont des éléments que l'on se représentera plus intuitivement sous une forme numérique et ordonnée, 
et donc qu'en nommant notre tableau simplement marchands, on comprend à partir de l'énoncé du problème que les cases correspondent aux emplacements, et les valeurs aux marchands. 
Nous vous invitons à juger par vous-même.
*/

#include <stdio.h>
int main()
{
   int nbEmplacements;
   scanf("%d", &nbEmplacements);
   int emplMarchands[nbEmplacements];
   for (int iEmp = 0; iEmp < nbEmplacements; iEmp = iEmp + 1)
   {
      int iMarchand;
      scanf("%d", &iMarchand);
      emplMarchands[iMarchand] = iEmp;
   }
   for (int iMarchand = 0; iMarchand < nbEmplacements; iMarchand = iMarchand + 1)
   {
      printf("%d\n", emplMarchands[iMarchand]);
   }
}

