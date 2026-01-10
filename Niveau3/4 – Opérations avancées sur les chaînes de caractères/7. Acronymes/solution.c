/*
Comme dans tout lieu de travail, les employés de la bibliothèque ont pris l’habitude 
d’utiliser des acronymes (exemples d’acronymes : IOI, RATP, BEPC, LOL...) 
pour les titres de livres les plus utilisés, ce qui leur permet de parler plus vite !
Seulement vous ne connaissez pas encore tous les acronymes, 
aussi lorsqu’on vous demande d’aller chercher un livre sans vous donner le titre complet, 
vous êtes bien embêté(e) !
Étant donné un acronyme, vous devez trouver tous les titres 
qui correspondent et les afficher "joliment".
TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

Tous les titres de livres ainsi que les acronymes contiennent au plus 200 caractères.
INPUT

Sur la première ligne, un acronyme, uniquement constitué de lettres majuscules.
Sur la seconde ligne, un entier nbLivres, le nombre de titres de livres.
Sur les nbLivres lignes suivantes les titres de livres, uniquement constitués de lettres ou d’espaces, sans accents.
Les mots de chaque titre sont toujours séparés par un seul espace.
OUTPUT

Vous devez afficher chaque titre de livre qui correspond à l’acronyme, en mettant toutes ses lettres en minuscules sauf la première lettre de chaque mot, qui doit être en majuscule.
EXAMPLE

input:
PP
7
PEDro paramO
Poemes PALINDROMES
LA Condition HUMAINE
PERE et fils
petite
Promenade Au phare
peter pan
output:
Pedro Paramo
Poemes Palindromes
Peter Pan
*/

#include <stdio.h>

void upperLetter(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
        i++;
    }
}

void lowerLetter(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
        i++;
    }
}

char* capitalizeFirstLetter(char title_book[])
{
    int i = 0;
    while (title_book[i] != '\0')
    {
        if (i == 0 || title_book[i - 1] == ' ')
            upperLetter(&title_book[i]);
        else
            lowerLetter(&title_book[i]);
        i++;
    }
    return title_book;
}

int acronymsTitle(char title[], char acronym[])
{
    int index = 0;
    int i = 0;
    while (title[i] != '\0')
    {
        if (i == 0 || title[i - 1] == ' ')
        {
            char c1 = title[i];
            char c2 = acronym[index];
            upperLetter(&c1);
            upperLetter(&c2);
            if (c1 != c2)
                return 0;
            index++;
        }
        i++;
    }

    int j = 0;
    while (acronym[j] != '\0')
        j++;

    if (index != j)
        return 0;

    return 1;
}

int main()
{
    char acronymes[201];
    scanf("%200s", acronymes);
    upperLetter(acronymes);

    int numBooks;
    scanf("%d", &numBooks);
    

    char titleBooks[numBooks][201];

    int i = 0;
    while (i < numBooks)
    {
        scanf(" %200[^\n]", titleBooks[i]);
        capitalizeFirstLetter(titleBooks[i]);
        i++;
    }

    i = 0;
    while (i < numBooks)
    {
        if (acronymsTitle(titleBooks[i], acronymes))
            printf("%s\n", titleBooks[i]);
        i++;
    }

    return 0;
}


//Solution France IOI

/*Algorithme

Le format de l'entrée impose une lecture ligne à ligne et non pas mot à mot. On va donc lire une ligne, 
puis la décomposer en mots et comparer la première lettre de chaque mot aux lettres de l'acronyme. 
Si on trouve une ligne (c'est-à-dire un titre de livre) dont la suite des initiales des mots sont égales à l'acronyme, 
il ne reste plus qu'à afficher le titre, en veillant à la casse de chaque lettre : majuscule pour la première lettre d'un mot, minuscule sinon.
Certains langages permettent de faire plus court mais sinon, pour déterminer si une lettre est la première lettre d'un mot 
il suffit de remarquer qu'elle doit alors être en première position (en début de ligne donc) ou bien précédée d'une espace (les mots étant toujours séparés par un seul espace).
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
int main()
{
   char acronyme[201];
   scanf("%s\n", acronyme);
   int longueurAcronyme = strlen(acronyme);
   int nbTitres;
   scanf("%d\n", &nbTitres);
   for (int idTitre = 0; idTitre < nbTitres; idTitre = idTitre + 1)
   {
      char titre[201];
      scanf("%[^\n]\n", titre);
      int longueurTitre = strlen(titre);
      bool estValide = true;
      int indiceAcro = 0;
      for (int pos = 0; pos < longueurTitre; pos = pos + 1)
      {
         if (pos == 0 || titre[pos-1] == ' ')
         {
            char lettre = toupper(titre[pos]);
            if (indiceAcro >= longueurAcronyme || lettre != acronyme[indiceAcro])
            {
               estValide = false;
            }
            indiceAcro = indiceAcro + 1;
         }
      }
      if (indiceAcro != longueurAcronyme)
      {
         estValide = false;
      }
      if (estValide)
      {
         for (int pos = 0; pos < longueurTitre; pos = pos + 1)
         {
            if (pos == 0 || (titre[pos-1] == ' ' && isalpha(titre[pos])))
            {
               printf("%c", toupper(titre[pos]));
            }
            else
            {
               printf("%c", tolower(titre[pos]));
            }
         }
         printf("\n");
      }
   }
}
