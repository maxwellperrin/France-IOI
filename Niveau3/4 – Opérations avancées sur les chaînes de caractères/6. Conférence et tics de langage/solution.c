/*CONSTRAINTS

Le texte du discours contient au plus 10 000 caractères.
Chacun des mots est au plus de longueur 50.
INPUT

Sur la première ligne, un mot. Sur la seconde ligne, le texte du discours.
Il n’y a pas de ponctuation, les mots et le texte sont uniquement constitués de lettres non accentuées et d’espaces. Par « mot », on entend, comme d’habitude, une suite de caractères ne contenant pas d’espace.
OUTPUT

Vous devez indiquer combien de fois le mot donné est présent dans le texte du discours.
Quelle que soit la casse du mot qu’on vous donne ou de ses apparitions dans le texte,
vous devez toutes les compter !

EXAMPLE

input:
Heu
Je pense heu que heu le meilleur que j ai ecrit heu depuis heu cinq ans heu vous

output:
6
*/


#include <stdio.h>

void lowerletter(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
}

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return 1;
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    return 1;
}

int main()
{
    char word[51];
    scanf("%s", word);

    lowerletter(word); 
    int len_word = my_strlen(word);

    int counter = 0;
    char text[51];

    
    while (scanf("%s", text) == 1)
    {
        lowerletter(text);

        int len_text = my_strlen(text);

        
        if (len_text == len_word)
        {
            if (my_strcmp(word, text) == 0)
            {
                counter++;
            }
        }
    }

    printf("%d\n", counter);
    return 0;
}


//Solution France IOI

/*Algorithme

Comme la recherche doit être indépendante de la casse (majuscule/minuscule) des mots, il faut commencer par choisir sous quelle forme on va mettre chacun des mots, 
par exemple en majuscule. Une fois le mot à chercher lu et converti en majuscule, il faut lire chacun des mots du texte et le comparer au mot qu'on cherche, 
afin de pouvoir compter son nombre d'occurences.
La difficulté de l'exercice est dans la gestion de la lecture d'un nombre inconnu de mots, ce qui peut être un peu technique dans certains langages.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char motATrouver[51];
   scanf("%s\n", motATrouver);
   int longueurMot = strlen(motATrouver);
   for (int pos = 0; pos < longueurMot; pos = pos + 1)
   {
      motATrouver[pos] = toupper(motATrouver[pos]);
   }
   int nbFois = 0;
   char mot[51] = "";
   while (scanf("%s", mot) == 1)
   {
      int longueurMotLu = strlen(mot);
      // Ce test permet d’éviter de passer du temps sur les mots n’ayant
      // pas la bonne taille.
      if (longueurMotLu == longueurMot)
      {
         for (int pos = 0; pos < longueurMotLu; pos = pos + 1)
         {
            mot[pos] = toupper(mot[pos]);   
         }
         if (strcmp(mot, motATrouver) == 0)
         {
            nbFois = nbFois + 1;
         }
      }
   }  
   printf("%d\n", nbFois);
}





 


