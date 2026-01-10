/*TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

La ligne de texte contient moins de 10 000 caractères.
INPUT

Une seule ligne de texte, composée uniquement de lettres minuscules ou majuscules non accentuées, et d'espaces.
On vous garantit que dans tous les tests, une seule lettre est la plus utilisée, il n'y a pas d'ex-aequo.
OUTPUT

Vous devez afficher une ligne sur la sortie, contenant la lettre de l'alphabet la plus présente dans le texte fourni en entrée.
Pour chaque lettre, vous devez compter à la fois ses apparitions en majuscule et en minuscule, mais afficher le résultat en majuscules. Vous devez ignorer les espaces.
EXAMPLEs

EXAMPLE 1
input:
Le francais est une langue romane de la famille des langues indo europeennes
output:
E
EXAMPLE 2
input:
A lingua portuguesa tambem designada portugues e uma lingua romanica flexiva originada no galego portugues falado no Reino da Galiza e no Norte de Portugal
output:
A
*/

void   frequency_character(char *character)
{
   int   i;
   i = 0;
   
   int   frequency[26] = {0};
   
   while(character[i] != '\0')
   {
      if (character[i] >= 'a' && character[i] <= 'z')
      {
         frequency[character[i] - 'a']++;
      }
      else if (character[i] >= 'A' && character[i] <= 'Z')
      {
         frequency[character[i] - 'A']++;
      }
      i++;
   }
   
   int max_freq = 0;
   int max_index = 0;
   
   int j = 0;
   while(j < 26)
   {
      if(frequency[j] > max_freq)
      {
        max_freq = frequency[j];
        max_index = j;
      }
      j++;
   }
   
   if (max_freq > 0)
        printf("%c", max_index + 'A');

}

int   main()
{
   char   string[10000];
   scanf(" %[^\n]", string);
   
   frequency_character(string);
   return 0;
   
}

//Solution France IOI 

#include <stdio.h>
#include <ctype.h>
#include <string.h>
  
int main()
{
   char texte[10 * 1000 + 1];
   scanf("%[^\n]\n", texte);
      
   int nbOccurrences[26] = {0};
   int longueurTexte = strlen(texte);
   for (int idCaractere = 0; idCaractere < longueurTexte; idCaractere = idCaractere + 1)
   {
      char caractereLu = texte[idCaractere];
      if (caractereLu != ' ')
      {
         int indiceLettre = toupper(caractereLu) - 'A';
         nbOccurrences[indiceLettre] = nbOccurrences[indiceLettre] + 1;
      }
   }
   int indiceLettreMaxOcc = 0;
   for (int indiceLettre = 0; indiceLettre < 26; indiceLettre = indiceLettre + 1)
   {
      if (nbOccurrences[indiceLettre] > nbOccurrences[indiceLettreMaxOcc])
      {
         indiceLettreMaxOcc = indiceLettre;
      }
   }
   printf("%c\n", indiceLettreMaxOcc + 'A');
}
