/*INPUT

La première ligne contient un entier nbOperations : le nombre d'opérations décrites dans le livre de comptes.
Suivent ensuite nbOperations paires d'entiers, où le premier entier de chaque paire est le numéro de l'ingrédient concerné par l'opération, et le deuxième est la quantité. 
Si la quantité est négative, l'opération est une vente, et si elle est positive, l'opération est un achat du produit indiqué.

OUTPUT

Vous devez afficher 10 entiers sur la sortie : la quantité restante pour chacun des produits dans l'ordre de leur numéro, une fois l'ensemble des opérations décrites dans le livre effectuées.
EXAMPLE

input:
5
1
100
2
50
1
-50
3
20
2
-10
output:
50
40
20
0
0
0
0
0
0
0
COMMENTS

Faites bien attention au fait que les produits sont numérotés à partir de 1, tandis que l'indice d'un tableau commence à 0.
*/

#include <stdio.h>

int main() {
    int nbOperation;
    scanf("%d", &nbOperation);

    int stockRemaining[11] = {0}; 

    int x = 0;
    while (x < nbOperation) {
        int num_ing, quantity_ing;
        scanf("%d %d", &num_ing, &quantity_ing);

        
        stockRemaining[num_ing - 1] += quantity_ing;

        x++;
    }

    int y = 0;
    while (y < 10) {
        printf("%d\n", stockRemaining[y]);
        y++;
    }

    return 0;
}

// Solution France IOI 

/*Algorithme

On commence par créer un tableau qui contiendra la quantité de chaque produit. 
Au début tout est à zéro, puis on va lire chacune des lignes du livre de comptes et à chaque fois on modifiera la quantité du produit correspondant. 
À la fin, il suffit d'afficher les éléments du tableau, l'un après l'autre.
La difficulté de cet exercice c'est que les indices démarrent à 1 et pas 0, comment faire ?
Changer à chaque fois les indices, c'est-à-dire leur enlever 1 : cette solution n'est pas conseillée car on a alors deux systèmes d'indices. 
Un dans lequel les indices démarrent à 0, dans le code. Un dans lequel les indices démarrent à 1, dans le sujet et les tests. 
On risque alors de confondre les deux systèmes et de faire des bugs !
Utiliser un tableau plus grand : on utilise un tableau de taille 11 mais on ne s'occupera que des 10 derniers éléments, on ne touchera jamais à celui d'indice 0. 
C'est la solution recommandée.
La deuxième solution est fortement conseillée car elle permet de manipuler les mêmes indices que ceux des tests et du sujet. 
Ce n'est pas du tout un problème de ne pas utiliser une des cases du tableau.
*/

#include <stdio.h>
 
int main()
{
   int quantite[11] = {0};
   int nbLignes;
   scanf("%d\n",&nbLignes);
   
   for (int idLigne = 0; idLigne < nbLignes; idLigne = idLigne + 1)
   {
      int numeroProduit;
      int variation;
      scanf("%d%d\n", &numeroProduit, &variation);
      quantite[numeroProduit] = quantite[numeroProduit] + variation;
   }
   for (int numeroProduit = 1; numeroProduit <= 10; numeroProduit = numeroProduit + 1)
   {
      printf("%d\n",quantite[numeroProduit]);
   }
}

