/*
Ce que doit faire votre programme :

Votre programme lira deux entiers : le nombre de paquets et le poids d'un paquet. 
Si le poids total est strictement supérieur à 105 kg, votre programme devra alors afficher le texte « Surcharge ! ».

EXAMPLEs

EXAMPLE 1
input:
10
15
output:
Surcharge !

EXAMPLE 2
input:
3
7
output:
*/

#include <stdio.h>

int main()
{
   int nbrPaquets;
   int poidPaquet;
   
   scanf("%d", &nbrPaquets);
   scanf("%d", &poidPaquet);

   if (nbrPaquets * poidPaquet > 105)
   {
      printf("Surcharge !");
   }
}
