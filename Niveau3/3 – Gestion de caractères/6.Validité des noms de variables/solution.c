/*TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 1,000 KB.
CONSTRAINTS

La longueur de chaque nom proposé ne dépassera pas 100 caractères.
INPUT

La première ligne contient l’entier nbNoms. Les nbNoms lignes suivantes contiennent chacune un nom de variable possible.
Aucun des noms de variable possibles ne sera un mot-clef du langage. Vous n’avez donc pas à vous en occuper.
OUTPUT

Vous devez afficher nbNoms lignes sur la sortie, indiquant dans l'ordre où ils sont donnés en entrée, si les noms proposés sont valides.
Affichez le texte "YES" pour un identifiant valide et "NO" pour un identifiant invalide.
EXAMPLE

input:
5
Bonjour32
r~ussi
_toto_
passe-partout
2_fois
output:
YES
NO
YES
NO
NO
*/

#include <stdio.h>

void variable_correct(char *character)
{
    int i = 0;


    if (!((character[0] >= 'A' && character[0] <= 'Z') ||
          (character[0] >= 'a' && character[0] <= 'z') ||
           character[0] == '_'))
    {
        printf("NO\n");
        return;
    }


    i = 1;
    while (character[i] != '\0')
    {
        if (!((character[i] >= 'A' && character[i] <= 'Z') ||
              (character[i] >= 'a' && character[i] <= 'z') ||
              (character[i] >= '0' && character[i] <= '9') ||
               character[i] == '_'))
        {
            printf("NO\n");
            return;
        }
        i++;
    }


    printf("YES\n");
}

int main()
{
    int nbNoms;
    scanf("%d", &nbNoms);

    int i = 0;
    while (i < nbNoms)
    {
        char varName[101];
        scanf(" %100[^\n]", varName);  
        variable_correct(varName);
        i++;
    }

    return 0;
}

//Solution France IOI 

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
  
int main()
{
   int nbIdentifiants;
   scanf("%d\n", &nbIdentifiants);
   for (int loop = 1; loop <= nbIdentifiants; loop = loop + 1)
   {
      bool estValide = true;
      char identifiant[101];
      scanf("%[^\n]\n", identifiant);
      if (! (isalpha(identifiant[0]) || (identifiant[0] == '_')) )
         estValide = false;
      for (int idCaractere = 1; idCaractere < strlen(identifiant); idCaractere++)
      {
         char caractere = identifiant[idCaractere];
         if (! (isalpha(caractere) || isdigit(caractere) || (caractere == '_')) )
            estValide = false;
      }
      if (estValide)
         printf("YES\n");
      else
         printf("NO\n");
   }
}

###########################################################################################

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
  
bool estValide(char* identifiant)
{
   if (! (isalpha(identifiant[0]) || (identifiant[0] == '_')) )
      return false;
   for (int idCaractere = 1; idCaractere < strlen(identifiant); idCaractere++)
   {
      char caractere = identifiant[idCaractere];
      if (! (isalpha(caractere) || isdigit(caractere) || (caractere == '_')) )
         return false;
   }
   return true;
}
  
int main()
{
   int nbIdentifiants;
   scanf("%d\n", &nbIdentifiants);
   for (int loop = 1; loop <= nbIdentifiants; loop = loop + 1)
   {
      char identifiant[101];
      scanf("%[^\n]\n", identifiant);
      if (estValide(identifiant))
         printf("YES\n");
      else
         printf("NO\n");
   }
   return 0;
}
