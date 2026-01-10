/*Ce que doit faire votre programme :

On vous donne le numéro du produit préféré par différentes personnes. 
Écrivez un programme qui indique pour chaque numéro de produit, le nombre de personnes dont c'est le produit préféré.

INPUT

Les deux premiers entiers à lire sont le nombre total de produits nbProduits et le nombre de personnes nbPersonnes (nbPersonnes <= 1000) ayant exprimé leur souhait.
On lit ensuite nbPersonnes entiers : les numéros des produits préférés des différentes personnes. Les produits sont numérotés de 0 à nbProduits - 1.
OUTPUT

Vous devez afficher nbProduits entiers : pour chaque produit dans l'ordre de leur numéro, affichez le nombre de personnes qui le préfèrent.
EXAMPLE

input:
4
10
0
2
2
1
2
2
0
2
3
0
output:
3
1
5
1
*/

#include<stdio.h>

int   main()
{
   int   totalProducts;
   scanf("%d", &totalProducts);
   
   int   nbPersons;
   scanf("%d", &nbPersons);
   
   int counts[totalProducts];
   int i = 0;
   while (i < totalProducts)
   {
      counts[i] = 0;
      i++;
   }
   
   int j = 0;
   while(j < nbPersons)
   {
      int preferredProduct;
      scanf("%d", &preferredProduct);
      
      if(preferredProduct >= 0 && preferredProduct < totalProducts)
      {
         counts[preferredProduct]++;
      }
      j++;
   }
   
   int   k = 0;
   while(k < totalProducts)
   {
      printf("%d\n",counts[k]);
      k++;
   }
   return 0;
}

// Solution France IOI 

/*Algorithme

On commence par créer un tableau qui contiendra le nombre de personnes désirant chaque produit. 
Ce tableau a donc une taille dépendant du nombre total de produits disponibles.
Ensuite on lit les souhaits de chaque personne et on met à chaque fois à jour ce tableau en ajoutant 1 dans la bonne case.
Enfin, il ne nous reste qu'à afficher chaque élément du tableau.*/

int main()
{
   int nbProduits;
   scanf("%d\n",&nbProduits);
    
   int nbSouhaits[nbProduits];
   for (int numeroProduit = 0; numeroProduit < nbProduits; numeroProduit = numeroProduit + 1)
   {
      nbSouhaits[numeroProduit] = 0;
   }
    
   int nbPersonnes;
   scanf("%d\n",&nbPersonnes);
   for (int idPersonne = 0; idPersonne < nbPersonnes; idPersonne = idPersonne + 1)
   {
      int numeroProduit;
      scanf("%d\n",&numeroProduit);
      nbSouhaits[numeroProduit] = nbSouhaits[numeroProduit] + 1;
   }
     
   for (int numeroProduit = 0; numeroProduit < nbProduits; numeroProduit = numeroProduit + 1)
   {
      printf("%d\n",nbSouhaits[numeroProduit]);
   }
}
