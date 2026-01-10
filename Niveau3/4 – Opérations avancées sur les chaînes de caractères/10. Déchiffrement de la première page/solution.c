/*
Dans ce système de cryptage, on remplace chaque lettre du message par une autre, 
à l'aide d'une grille de cryptage. 
Pour décrypter le message, il suffit de faire pareil mais avec la grille inverse 
(la grille de décryptage) et on retrouvera le texte original.
Vous avez plusieurs idées pour cette fameuse clé de décryptage 
mais comme il serait trop long de tester à la main, 
vous décidez d’écrire un programme pour décoder automatiquement un texte, étant donnée la clé.

CONSTRAINTS

Le texte crypté contient au plus 1000 caractères.
INPUT

La première ligne de l'entrée contient la grille de décryptage, composée de 26 caractères minuscules. 
La première lettre correspond à la lettre par laquelle il faut remplacer tous les 'a' du texte crypté, la deuxième tous les 'b', etc.
La deuxième ligne de l'entrée contient le texte crypté.
Il n’y a pas d’accents, mais il peut y avoir des espaces, de la ponctuation, etc.

OUTPUT

Vous devez afficher une ligne sur la sortie : le texte décrypté.
Chaque lettre cryptée doit être remplacée par la lettre décryptée. Les autres caractères (ponctuation, '_', espaces, chiffres), sont laissés tels quels.
Vous devez respecter la casse : si une lettre était en majuscule (ou minuscule), elle doit le rester !
*/


#include<stdio.h>

void decrypt(char *text, char *grill)
{
    int i = 0;
    
    while(text[i] != '\0')
    {
        if(text[i] >= 'a' && text[i] <= 'z')
        {
            int index = text[i] - 'a';  
            text[i] = grill[index];     
        }
        else if(text[i] >= 'A' && text[i] <= 'Z')
        {
            int index = text[i] - 'A';  
            text[i] = grill[index] - 'a' + 'A';  
        }
        i++;
    }
}


int main()
{
    char decryption_line[27];
    char encrypt_text[1001];
    

    scanf(" %[^\n]", decryption_line);
    

    scanf(" %[^\n]", encrypt_text);
    
    
    decrypt(encrypt_text, decryption_line);
    
    printf("%s\n", encrypt_text);
    return 0;
}

//Solution France IOI

/*Algorithme

On parcourt le texte à déchiffrer caractère par caractère et pour chaque lettre on va regarder dans la grille de déchiffrement par quelle nouvelle lettre elle doit être remplacée.
La difficulté est de bien gérer le cas des lettres majuscules/minuscules qu’il faut traiter différemment :
pour les minuscules, il suffit de convertir la lettre en un entier pour aller chercher la lettre de remplacement dans la bonne case du tableau contenant la clé de déchiffrement,
pour les majuscules, il faut tout d’abord les convertir en minuscules, puis une fois qu’on a trouvé la lettre de remplacement, il faut convertir celle-ci en majuscule.*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
   char decrypteur[27];
   char texte[1001];
   
   scanf("%[^\n]\n", decrypteur);
   scanf("%[^\n]\n", texte);
   int longueurTexte = strlen(texte);
   for (int pos = 0; pos < longueurTexte; pos = pos + 1)
   {
      char caractereLu = texte[pos];
      if (isalpha(caractereLu))
      {
         if (isupper(caractereLu))
         {
            caractereLu = toupper(decrypteur[tolower(caractereLu) - 'a']);
         }
         else
         {
            caractereLu = decrypteur[caractereLu - 'a'];
         }
      }
      printf("%c", caractereLu);
   }
   printf("\n");
}

