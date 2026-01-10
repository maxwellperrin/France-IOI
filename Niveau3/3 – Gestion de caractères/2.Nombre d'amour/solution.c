/*Vous décidez d’écrire un programme permettant de calculer rapidement le « nombre d’amour » correspondant à un prénom donné.
Pour calculer ce nombre, on commence par convertir chaque lettre du prénom en un nombre (A vaut 0, B vaut 1...) 
puis on calcule la somme de ces nombres. Si le résultat est strictement plus petit que 10, 
alors on a trouvé le « nombre d’amour ». Sinon, on remplace le nombre par la somme de ses chiffres. 
On continue ainsi tant que le résultat est plus grand ou égal à 10.

TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

Les prénoms font au plus 50 caractères.
INPUT

Les prénoms des deux enfants (en majuscules), séparés par un espace.
OUTPUT

Sur une seule ligne, les nombres d’amour de chacun des deux enfants.
EXAMPLE

input:
ADA GWOAG
output:
3 3
*/

int   nombre_amour(char   *name)
{
   int   i;
   i = 0;
   
   int  somme_initiale;
   somme_initiale = 0;
   
   while(name[i] != '\0')
   {
      somme_initiale += name[i] - 'A';
      i++;
   }
   
   int nbr_amour = somme_initiale;
   
   while(nbr_amour >= 10)
   {
      int nbr_temp = nbr_amour;
      int nouvelle_somme = 0;
      
      while(nbr_temp > 0)
      {
         nouvelle_somme += nbr_temp % 10;
         nbr_temp /= 10;
      }
      nbr_amour = nouvelle_somme;
   }
   return nbr_amour;
}


int   main()
{
   char   name1[51];
   char   name2[51];
   
   scanf("%s %s", name1, name2);
   
   int   nbr_amour1 = nombre_amour(name1);
   int   nbr_amour2 = nombre_amour(name2);
   
   printf("%d %d", nbr_amour1, nbr_amour2); 
}

//Solution France IOI 

/*Algorithme

Une des premières difficultés de cet exercice est de calculer la somme des chiffres d’un nombre. 
Pour la calculer, on va utiliser les opérateurs modulo (pour trouver le chiffre des unités) et division entière : 
en effet, faire une division entière par 10 revient à décaler les chiffres vers la droite, supprimant ainsi le chiffre des unités. On aura donc le code suivant :

nombre <- 67294
sommeChiffre <- 0
TantQue nombre > 0
   sommeChiffre <- sommeChiffre + ResteDivision(nombre, 10)
   nombre <- DivisionEntiere(nombre, 10)
Afficher sommeChiffre

Il faudra donc répéter ces opérations tant que le nombre est supérieur ou égal à 10, ce qui va donner :

nombre <- 67294
TantQue nombre >= 10
   sommeChiffre <- 0
   TantQue nombre > 0
      sommeChiffre <- sommeChiffre + ResteDivision(nombre, 10)
      nombre <- DivisionEntiere(nombre, 10)
   nombre <- sommeChiffre
Il faut alors compléter ce code, pour ajouter, au début, le calcul du nombre de départ, en fonction des lettres du prénom. 
Pour cela, on va convertir chaque lettre en un entier, et sommer ces entiers.
*/

#include <stdio.h>
#include <string.h>
int main()
{
   int nombres[2];
   for (int idPrenom = 0; idPrenom < 2; idPrenom = idPrenom + 1)
   {
      char prenom[51];
      scanf("%s", prenom);
      int nombre = 0;
      int longueurPrenom = strlen(prenom);
      for (int posLettre = 0; posLettre < longueurPrenom; posLettre = posLettre + 1)
      {
         nombre = nombre + (prenom[posLettre] - 'A');
      }
      while (nombre >= 10)
      {
         int sommeChiffre = 0;
         while (nombre > 0)
         {
            sommeChiffre = sommeChiffre + nombre % 10;
            nombre = nombre / 10;
         }
         nombre = sommeChiffre;
      }
      nombres[idPrenom] = nombre;
   }
   printf("%d %d", nombres[0], nombres[1]);
}


