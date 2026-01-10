/*Un enfant un peu turbulent a complètement renversé une étagère pleine de livres ! 
Tous les livres sont désormais à terre, en vrac, et c’est à vous de tout remettre sur l’étagère dans le bon ordre.
À vous donc de trier ces livres par ordre alphabétique.
TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

Chaque titre de livre contient au plus 100 caractères.
INPUT

La première ligne contient un entier nbLivres, le nombre de livres.
Les nbLivres lignes suivantes contiennent chacune un titre de livre.
Les titres ne contiennent que des lettres majuscules ou des espaces.
OUTPUT

L’ensemble des titres de livres, un titre par ligne, triés selon l’ordre alphabétique.
EXAMPLE

input:
7
LE ROUGE ET LE NOIR
DES SOURIS ET DES HOMMES
GUERRE ET PAIX
LE PARFUM
ALICE AU PAYS DES MERVEILLES
NOTRE DAME DE PARIS
LE VIEIL HOMME ET LA MER
output:
ALICE AU PAYS DES MERVEILLES
DES SOURIS ET DES HOMMES
GUERRE ET PAIX
LE PARFUM
LE ROUGE ET LE NOIR
LE VIEIL HOMME ET LA MER
NOTRE DAME DE PARIS
*/

#include <stdio.h>

void upper_letter(char *character)
{
    int i = 0;
    while (character[i] != '\0')
    {
        if (character[i] >= 'a' && character[i] <= 'z')
            character[i] = character[i] - 'a' + 'A';
        i++;
    }
}

void swap(char *a, char *b)
{
    char temp;
    int i = 0;

    while (i < 101)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
        i++;
    }
}

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] < s2[i]) return -1;
        if (s1[i] > s2[i]) return 1;
        i++;
    }

    if (s1[i] == '\0' && s2[i] != '\0') return -1;
    if (s1[i] != '\0' && s2[i] == '\0') return 1;

    return 0;
}

void sort_title(char title_book[][101], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        int j = 0;
        while (j < n - 1 - i)
        {
            if (my_strcmp(title_book[j], title_book[j + 1]) > 0)
            {
                swap(title_book[j], title_book[j + 1]);
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int numBooks;
    scanf("%d", &numBooks);

    char title_book[numBooks][101];

    int i = 0;
    while (i < numBooks)
    {
        scanf(" %101[^\n]", title_book[i]);
        upper_letter(title_book[i]);
        i++;
    }

    sort_title(title_book, numBooks);

    i = 0;
    while (i < numBooks)
    {
        printf("%s\n", title_book[i]);
        i++;
    }

    return 0;
}

// Solution France IOI

/*Algorithme
Après avoir bien déclaré le tableau de chaînes de caractères, on va le remplir en lisant les titres de livres les uns après les autres, 
puis on trie ce tableau, et enfin on affiche les titres de livres, dans l’ordre.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compareTextes(const void* pTexte1, const void* pTexte2)
{
  return strcmp((char*)(pTexte1), (char*)(pTexte2) );
}
int main()
{
   int nbLivres;
   scanf("%d\n", &nbLivres);
   char titres[nbLivres][101];
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      scanf("%[^\n]\n", titres[idLivre]);
   }
   qsort(titres, nbLivres, 101 * sizeof(char), compareTextes);
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      printf("%s\n", titres[idLivre]);
