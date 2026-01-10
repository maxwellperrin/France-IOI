/*TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

La ligne de texte contient moins de 10 000 caractères.
INPUT

Une seule ligne de texte, ne contenant pas de lettres accentuées, mais pouvant contenir des signes de ponctuation ou des chiffres.
OUTPUT

Pour chacune des lettres de l’alphabet, il faut afficher, sur une ligne, 
sa fréquence d’apparition dans le texte définie comme le nombre de fois où la lettre est présente, 
divisé par le nombre total de lettres du texte (et pas le nombre total de caractères).
EXAMPLE

input:
Le francais est une langue romane, de la famille des langues indo-europeennes.
output:
0.109375
0.000000
0.015625
0.046875
0.203125
0.031250
0.031250
0.000000
0.046875
0.000000
0.000000
0.093750
0.031250
0.125000
0.046875
0.015625
0.000000
0.046875
0.078125
0.015625
0.062500
0.000000
0.000000
0.000000
0.000000
0.000000
*/



int size_text(char *character)
{
    int size = 0;
    int letters = 0;

    while (character[size] != '\0')
    {
        if (((character[size] >= 'a') && (character[size] <= 'z')) ||
            ((character[size] >= 'A') && (character[size] <= 'Z')))
        {
            letters++;
        }
        size++;
    }
    return letters;
}

void freq_occurence(char *character, int occurence_letter[26])
{
    int i = 0;
    while (character[i] != '\0')
    {
        if ((character[i] >= 'a') && (character[i] <= 'z'))
        {
            occurence_letter[character[i] - 'a']++;
        }
        else if ((character[i] >= 'A') && (character[i] <= 'Z'))
        {
            occurence_letter[character[i] - 'A']++;
        }
        i++;
    }
}

void print_frequency(int occurence_letter[26], int total_letters)
{
    int i = 0;

    while (i < 26)
    {
        float frequency = 0.0;

        if (total_letters > 0)
            frequency = occurence_letter[i] / (float)total_letters;

        printf("%f\n", frequency);
        i++;
    }
}

int main()
{
    char text[10001];
    scanf(" %[^\n]", text);

    int total_letters = size_text(text);

    int occurence_letter[26] = {0};
    freq_occurence(text, occurence_letter);

    print_frequency(occurence_letter, total_letters);

    return 0;
}

################################################################

//Solution France IOI 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char texte[10001];
   scanf("%[^\n]\n", texte);
   int nbApparitions[26] = {0};
   int nbLettres = 0;
   int longueurTexte = strlen(texte);
   for (int iCar = 0; iCar < longueurTexte; iCar = iCar + 1)
   {
      char caractere = texte[iCar];
      if (isalpha(caractere))
      {
         nbLettres = nbLettres + 1;
         if (islower(caractere))
         {
            caractere = toupper(caractere);
         }
         int num = caractere - 'A';
         nbApparitions[num] = nbApparitions[num] + 1;
      }
   }
   for (int idLettre = 0; idLettre < 26; idLettre = idLettre + 1)
   {
      printf("%lf\n", (double)(nbApparitions[idLettre]) / nbLettres);
   }
}
