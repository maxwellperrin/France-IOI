/*La bibliothèque contient de nombreux dictionnaires, 
mais pour certains couples de langues, elle ne dispose que du dictionnaire permettant d’aller de 
la première langue vers la seconde, et pas du dictionnaire permettant de faire l’inverse.
Étant donné un dictionnaire bilingue, vous devez l’inverser pour construire le dictionnaire inverse.
TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

Chaque mot contient au plus 50 caractères.
INPUT

La première ligne contient l’entier nbMots.
Les nbMots lignes suivantes contiennent chacune deux mots séparés par un espace : un mot dans la première langue et un mot dans la seconde.
Les mots ne contiennent pas d’espaces et sont constitués uniquement de lettres minuscules.
Les couples de mots sont triés selon l’ordre alphabétique des mots de la première langue.
OUTPUT

Vous devez afficher l’ensemble des couples de mots inversés (d’abord le mot de la seconde langue, puis le mot de la première) triés selon l’ordre alphabétique des mots de la seconde langue.
EXAMPLE

input:
2
travail work
verite truth
output:
truth verite
work travail*/

#include <stdio.h>
void lowerletter(char *character)
{
    int i = 0;
    
    while(character[i] != '\0')
    {
        if(character[i] >= 'A' && character[i] <= 'Z')
        {
            character[i] = character[i] - 'A' + 'a';
        }
        i++;
    }
}

void my_strcpy(char *dest, const char *src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void my_strcat(char *dest, const char *src)
{
    int i = 0;
    while(dest[i] != '\0')
        i++;

    int j = 0;
    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] > s2[i]) return 1;
        if(s1[i] < s2[i]) return -1;
        i++;
    }
    if(s1[i] == '\0' && s2[i] != '\0') return -1;
    if(s1[i] != '\0' && s2[i] == '\0') return 1;
    return 0;
}

void swap(char *a, char *b)
{
    char tmp[201];
    my_strcpy(tmp, a);
    my_strcpy(a, b);
    my_strcpy(b, tmp);
}

int main()
{
    int nbWords;
    scanf("%d", &nbWords);

    char firstLanguage[nbWords][51];
    char secondLanguage[nbWords][51];
    char texteComplet[nbWords][201];

    int i = 0;
    while(i < nbWords)
    {
        scanf("%s %s", firstLanguage[i], secondLanguage[i]);
        lowerletter(firstLanguage[i]);
        lowerletter(secondLanguage[i]);


        my_strcpy(texteComplet[i], secondLanguage[i]);
        my_strcat(texteComplet[i], " ");
        my_strcat(texteComplet[i], firstLanguage[i]);

        i++;
    }


    int j;
    i = 0;
    while(i < nbWords - 1)
    {
        j = 0;
        while(j < nbWords - 1 - i)
        {
            if(my_strcmp(texteComplet[j], texteComplet[j + 1]) > 0)
            {
                swap(texteComplet[j], texteComplet[j + 1]);
            }
            j++;
        }
        i++;
    }


    i = 0;
    while(i < nbWords)
    {
        printf("%s\n", texteComplet[i]);
        i++;
    }

    return 0;
}


//Solution France IOI

/*Algorithme

On doit lire les couples de mots, les uns après les autres. On construit alors une nouvelle chaîne de caractères pour chaque couple, 
dans laquelle on a inversé les deux mots. On stocke toutes ces chaînes dans un tableau qu’il faut alors trier puis dont on affiche les éléments.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compareTextes(const void* pTexte1, const void* pTexte2)
{
  return strcmp((char*)(pTexte1), (char*)(pTexte2) );
}
int main()
{
   int nbMots;
   scanf("%d\n", &nbMots);
   // Deux mots de taille 50 + l’espace + 1
   char couplesMots[nbMots][102];
   for (int idCouple = 0; idCouple < nbMots; idCouple = idCouple + 1)
   {
      char premier[51], second[51];
      scanf("%s%s", premier, second);
      strcpy(couplesMots[idCouple], second);
      strcat(couplesMots[idCouple], " ");
      strcat(couplesMots[idCouple], premier);
   }
   qsort(couplesMots, nbMots, 102 * sizeof(char), compareTextes);
   for (int idCouple = 0; idCouple < nbMots; idCouple = idCouple + 1)
   {
      printf("%s\n", couplesMots[idCouple]);
   }
}
