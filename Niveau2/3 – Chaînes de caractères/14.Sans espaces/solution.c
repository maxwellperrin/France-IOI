/*
CONSTRAINTS

La ligne de texte contient au plus 100 caractères.
EXAMPLE

input:
Voici un exemple de texte avec des espaces.
output:
Voici_un_exemple_de_texte_avec_des_espaces.
*/

#include <stdio.h>
#include <string.h>

int   main()
{
   char   text[101];
   scanf("%[^\n]", text);

   
   int   i = 0;
   
   while(text[i] != '\0')
   {
      if(text[i] == ' ')
      {
         text[i] = '_';
      }
      i++;
   }
   printf("%s", text);
   return 0;
}

//Solution France IOI 

/*Algorithme

Après avoir lu la ligne de texte, il existe deux variantes pour cet exercice :
remplacer les espaces par des '_' dans le texte puis l'afficher,
regarder les caractères un par un et les afficher (ou afficher '_' s'il s'agit d'un espace).
Ci-dessous nous vous présentons les deux variantes, n'hésitez pas à les comparer afin de voir celle que vous préférez.
*/

#include <stdio.h>
#include <string.h>
int main()
{
   char texte[100 + 1];
   scanf("%[^\n]\n", texte);
   for (int pos = 0; pos < strlen(texte); pos++)
   {
      if(texte[pos] == ' ')
      {
         texte[pos] = '_';
      }
   }
   printf("%s\n", texte);
}

#####################################################

#include <stdio.h>
#include <string.h>
int main()
{
   char texte[100 + 1];
   scanf("%[^\n]\n", texte);
   for (int pos = 0; pos < strlen(texte); pos++)
   {
      if(texte[pos] == ' ')
      {
         printf("_");
      }
      else
      {
         printf("%c", texte[pos]);
      }
   }
}


