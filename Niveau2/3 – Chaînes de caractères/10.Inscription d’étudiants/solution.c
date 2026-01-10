/*CONSTRAINTS

Les noms des étudiants font moins de 50 caractères de long et commencent par une lettre majuscule.
INPUT

Un nom d’étudiant.
OUTPUT

Un entier, 1, 2 ou 3, selon que l’étudiant doit aller voir la première, la seconde ou la troisième personne.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[51];
    scanf("%[^\n]", name);

    int i = 0;
    int length_name = strlen(name);
    int found = 0;

    while (i < length_name)
    {
        if (name[i] >= 'A' && name[i] <= 'F')
        {
            found = 1;
        }
        else if (name[i] >= 'G' && name[i] <= 'P')
        {
            found = 2;
        }
        else if(name[i] >= 'Q' && name[i] <= 'Z')
        {
            found = 3;
        }
        i++;
    }

    printf("%d\n", found);

    return 0;
}

//Solution France IOI 

/*Algorithme

On commence par lire le nom complet, puis on regarde si le premier caractère du nom est inférieur ou égal au caractère "F". 
Si oui alors c’est la première personne, sinon on compare ce caractère à la lettre "P", pour déterminer si c’est la seconde ou la troisième personne.*/

#include <stdio.h>
int main()
{
   char mot[51];
   scanf("%s\n", mot);
   if (mot[0] <= 'F')
   {
      printf("1");
   }
   else if (mot[0] <= 'P')
   {
      printf("2");
   }
   else
   {
      printf("3");
   }
}

