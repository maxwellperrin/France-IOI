/*Votre programme doit écrire 3 lignes, chacune contenant plusieurs fois de suite une lettre suivie du caractère « _ » (underscore en anglais) : 
la lettre « a » sur la première ligne, la lettre « b » sur la deuxième et la lettre « c » sur la troisième.
Vous disposez déjà d'un modèle où chaque ligne contient 4 lettres :
Cependant, vous vous dites qu'il serait mieux de mettre 30 lettres par ligne. Écrivez un programme qui étend votre modèle. 
Bien sûr, vous utiliserez une boucle pour ne pas vous fatiguer à écrire vous-même 30 fois chaque lettre.
*/

#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   repeat(30)
   {
      printf("a_");
   }
   printf("\n");
   repeat(30)
   {
      printf("b_");
   }
   printf("\n");
   repeat(30)
   {
      printf("c_");
   }
   printf("\n");
}
