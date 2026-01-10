/*
La clé de chiffrement est ici un simple nombre, qu’on appelle D, pour « décalage ». 
On remplace alors chaque lettre de l’alphabet par la lettre située D places plus loin dans l’alphabet, considéré de manière circulaire.

Ainsi, si le décalage est de 2, alors
A devient C
B devient D
...
X devient Z
Y devient A
Z devient B

La clé utilisée pour chiffrer le texte change à chaque page et pour la page numéro X elle vaut

3 * X si X est pair
- 5 * X si X est impair
À vous de déchiffrer tout le livre !
TIME AND MEMORY LIMITS (C)

Time: 1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

Chaque ligne contient au plus 1000 caractères.
INPUT

La première ligne contient un entier nbPages, le nombre total de pages du livre.
Les nbPages - 1 lignes suivantes contiennent chacune le texte des pages numéro 2, 3, 4,..., nbPages.
Le texte peut contenir des lettres, chiffres ou caractères de ponctuation, mais pas d’accents.
OUTPUT

Vous devez afficher le texte déchiffré pour chacune des pages.
Chaque lettre codée doit être remplacé par la lettre décodée. Les autres caractères (ponctuation, '_', espaces, chiffres), sont laissés tels quels.
Vous devez respecter la casse : si une lettre était en majuscule (ou minuscule), elle doit le rester !
EXAMPLE

input:
4
Ikio kyz rg ykiutjk vgmk ja robxk
Npeep alrp pde wl alrp yfxpcz 3
Qf hauou pazo xm cgmfduqyq bmsq !
output:
Ceci est la seconde page du livre
Cette page est la page numero 3
Et voici donc la quatrieme page !
*/

#include <stdio.h>

void   decryptage(int pageNumber, char *script)
{
   int key = 0;
   
   if(pageNumber % 2 == 0) key = 3 * pageNumber; 
   else key = -5 * pageNumber;                    
   
   int i = 0;
   while(script[i] != '\0')
   {
      if(script[i] >= 'a' && script[i] <= 'z')
      {
         script[i] = ((script[i] - 'a' - key) % 26 + 26) % 26 + 'a';
      }
      else if(script[i] >= 'A' && script[i] <= 'Z')
      {
         script[i] = ((script[i] - 'A' - key) % 26 + 26) % 26 + 'A';
      }
      i++;
   }
}

int   main()
{
   int nbPages;
   scanf("%d", &nbPages);
   
  
   char text[nbPages][1001];
   
   int i = 1;
   while(i < nbPages)  
   {
      scanf(" %[^\n]", text[i]);  
      i++;
   }
   
   int j = 1;
   while (j < nbPages) 
   {
      decryptage(j + 1, text[j]);
      j++;
   }

   int k = 1;
   while (k < nbPages) 
   {
      printf("%s\n", text[k]); 
      k++;
   }
   return 0;
}

//Solution France IOI

/*
Algorithme
Pour chacune des pages du texte qu’on lit, on commence par calculer le décalage permettant de la décoder, qui est donc l’opposé du décalage qui a servi à l’encoder !
Une fois le décalage connu, on va l’appliquer sur chacune des lettres du texte, en faisant bien attention au cas des minuscules/majuscules.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main()
{
   int nbPages;
   scanf("%d\n", &nbPages);
   for (int idPage = 2; idPage <= nbPages; idPage = idPage + 1)
   {
      char page[1001];
      scanf("%[^\n]\n", page);
      int decalage;
      if (idPage % 2 == 0)
      {
         decalage = -3 * idPage;
      }
      else  
      {
         decalage = 5 * idPage;
      }
      for (int idCaractere = 0; idCaractere < strlen(page); idCaractere = idCaractere + 1)
      {
         char caractere = page[idCaractere];
         if (isalpha(caractere))
         {
            bool isMaj = isupper(caractere);
            if (isMaj)
            {
               caractere = tolower(caractere);
            }
            /*
            Attention, le modulo en C peut donner un résultat négatif, compris
            entre -25 et 0. D’où le +26 (pour le rendre positif à coup sûr) et le
            nouveau modulo ensuite.
            */
            int numero = ((caractere - 'a' + decalage) % 26 + 26) % 26;
            caractere = numero + 'a';
            if (isMaj)
            {
               caractere = toupper(caractere);
            }
         }
         page[idCaractere] = caractere;
      }
      printf("%s\n", page);
   }
}
