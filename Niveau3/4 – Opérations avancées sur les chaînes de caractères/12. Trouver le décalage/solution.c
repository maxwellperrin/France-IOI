/*
Le système de chiffrement utilisé est le même que celui des pages précédentes : La clé de chiffrement est ici un simple nombre, qu’on appelle D, pour « décalage ». 
Alors, on remplace chaque lettre de l’alphabet par la lettre située D places plus loin dans l’alphabet, considéré de manière circulaire.

Ainsi, si le décalage est de 2, alors

A devient C
B devient D
...
X devient Z
Y devient A
Z devient B
Seulement, vous ne connaissez pas la clé, aucun indice de vous permet de la trouver !
La seule chose que vous savez, c’est qu’il s’agit d’un texte normal (c’est-à-dire non piégé), 
et qu’il est écrit en français. 
À vous d’utiliser les connaissances que vous avez sur ce langage afin de trouver la bonne clé !

TIME AND MEMORY LIMITS (C)

Time: 0.3s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

La ligne de texte contient au plus 10 000 caractères.
INPUT

Une ligne de texte à décrypter.
Le texte peut contenir des lettres, chiffres ou caractères de ponctuation, mais pas d’accents.
OUTPUT

Vous devez afficher le texte décrypté.

Chaque lettre codée doit être remplacée par la lettre décodée. 
Les autres caractères (ponctuation, '_', espaces, chiffres), sont laissés tels quels.
Vous devez respecter la casse : si une lettre était en majuscule (ou minuscule), elle doit le rester !

EXAMPLE

input:

Np epiep fetwtdp fy opnlwlrp op zykp nlclnepcpd.

output:

Ce texte utilise un decalage de onze caracteres.
*/

#include <stdio.h>
#include <string.h>

int find_shift_key(char *texte)
{
   int freq[26] = {0};
   int total = 0;
   int i = 0;
   
   while (texte[i] != '\0')
   {
      if (texte[i] >= 'a' && texte[i] <= 'z')
      {
         freq[texte[i] - 'a']++;
         total++;
      }
      else if (texte[i] >= 'A' && texte[i] <= 'Z')
      {
         freq[texte[i] - 'A']++;
         total++;
      }
      i++;
   }
   
   if (total == 0) return 0;
   
   int max_index = 0;
   i = 1;
   while (i < 26)
   {
      if (freq[i] > freq[max_index])
         max_index = i;
      i++;
   }
   
  
   int D = max_index - 4;
   if (D < 0)
      D += 26;
   
   return D;
}

void shift_char(int shift_key, char *text)
{
   int i = 0;
   while(text[i] != '\0')
   {
      if(text[i] >= 'a' && text[i] <= 'z')
      {
         text[i] = ((text[i] - 'a' - shift_key + 26) % 26) + 'a';
      }
      else if(text[i] >= 'A' && text[i] <= 'Z')
      {
         text[i] = ((text[i] - 'A' - shift_key + 26) % 26) + 'A';
      }
      i++;  
   }
}

int main()
{
   char texte[10001];
   scanf(" %[^\n]", texte);
   
   // Enlever le retour à la ligne avec while
   int i = 0;
   while (texte[i] != '\0' && texte[i] != '\n')
      i++;
   texte[i] = '\0';
   
   // Trouver la clé de décalage
   int shift_key = find_shift_key(texte);
   
   // Décaler les caractères
   shift_char(shift_key, texte);
    
   i = 0;
   while (texte[i] != '\0')
   {
      putchar(texte[i]);
      i++;
   }
   putchar('\n');
   
   return 0;
}

//Solution France IOI

/*Algorithme

Si on connaît le décalage utilisé, l’exercice devient facile, car il s’agit juste de décaler dans l’autre sens toutes les lettres du texte.
Comment trouver ce décalage alors ? Il faut trouver (ou se souvenir que vous l’avez vu dans un précédent exercice) qu'en français, 
la lettre la plus présente dans un texte « normal » (pas piégé) est le « E ». 
On cherche donc la lettre la plus fréquente dans le texte chiffré et on sait alors que la lettre « E » est envoyée vers cette lettre par le décalage. 
Il suffit alors de calculer la distance entre ces deux lettres pour trouver le décalage !
On combine ici donc deux exercices du chapitre sur les chaînes de caractères, afin de construire un décodeur automatique du chiffre de César !
Nous verrons un peu plus bas que cet algorithme, excellent en général, n'est pas infaillible.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
   char texte[10001];
   scanf("%[^\n]\n", texte);
  
   // Trouver la lettre la plus frequente
   int nbOccurrences[26] = {0};
   int longueurTexte = strlen(texte);
   for (int idCaractere = 0; idCaractere < longueurTexte; idCaractere = idCaractere + 1)
   {
      char caractereLu = texte[idCaractere];
      if (isalpha(caractereLu))
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
   
   // On connait le decalage !
   int decalage = -(indiceLettreMaxOcc - ('E'-'A'));
   // Decodage
   for (int idCaractere = 0; idCaractere < longueurTexte; idCaractere = idCaractere + 1)
   {
      char caractere = texte[idCaractere];
      if (isalpha(caractere))
      {
         bool isMaj = isupper(caractere);
         if (isMaj)
         {
            caractere = tolower(caractere);
         }
         int numero = ((caractere - 'a' + decalage) % 26 + 26) % 26;
         caractere = numero + 'a';
         if (isMaj)
         {
            caractere = toupper(caractere);
         }
      }
      printf("%c", caractere);
   }
   printf("\n");
}
