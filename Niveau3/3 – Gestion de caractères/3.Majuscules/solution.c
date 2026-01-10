/*Ecrivez un programme qui lit une ligne de texte au clavier et qui affiche le contenu de cette ligne 
en transformant en majuscules tous les caractères minuscules qu'elle contient, et en réaffichant les autres caractères tels-quels.

TIME AND MEMORY LIMITS (C)

Time: 0.2s on a 1GHz machine.
Memory: 1,000 KB.
CONSTRAINTS

La ligne ne contient pas plus de 10 000 caractères.
Elle ne contient aucun caractère accentué.
EXAMPLE

input:
Ceci est un texte sans accents, qui sert d'exemple.
output:
CECI EST UN TEXTE SANS ACCENTS, QUI SERT D'EXEMPLE.
*/

#include<stdio.h>

void   str_upper(char *caracter)
{
   int   i = 0;
   while(caracter[i] != '\0')
   {
      if(caracter[i] >= 97 && caracter[i] <= 122)
      {
         caracter[i] = caracter[i] - 'a' + 'A';
      }
      i++;
   }
}

int   main()
{
   char   sentence[100000];
   scanf(" %[^\n]", sentence);
   
   str_upper(sentence);
   
   printf("%s\n", sentence);
   return 0; 
   
}

/*Algorithme

On lit toute la ligne de texte, puis on convertit chaque caractère en majuscule, à l'aide de la fonction fournie par le langage, quand il en existe une.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
   char texte[10 * 1000 + 1];
   scanf("%[^\n]\n", texte);
   int longueur = strlen(texte);
   for (int iLettre = 0; iLettre < longueur; iLettre = iLettre + 1)
   {
      texte[iLettre] = toupper(texte[iLettre]);
   }
   printf("%s\n",texte);

