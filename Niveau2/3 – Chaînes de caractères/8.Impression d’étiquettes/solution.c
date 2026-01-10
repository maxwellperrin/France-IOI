/*  CONSTRAINTS

La ligne de texte contiendra toujours moins de 50 caractères.
INPUT

Une seule ligne de texte.
OUTPUT

Les caractères du texte, affichés verticalement.
EXAMPLE
*/

#include <stdio.h>
#include <string.h>

int   main()
{
   char text[50];
   scanf("%[^\n]", text);
   
   int lenght_text = strlen(text);
   
   int i = 0;
   
   while(i < lenght_text)
   {
      printf("%c\n", text[i]);
      i++;
   }
   return 0;
}

//Solution France IOI 

/*Algorithme

On commence par lire l’ensemble de la ligne de texte, puis on affiche chacun des caractères, sur sa propre ligne.
*/

#include <stdio.h>
#include <string.h>
int main()
{
   char texte[51];
   scanf("%[^\n]", texte);
   int longueurTexte = strlen(texte);
   for (int iCar = 0; iCar < longueurTexte; iCar = iCar + 1)
   {
      printf("%c\n", texte[iCar]);
   }
}

