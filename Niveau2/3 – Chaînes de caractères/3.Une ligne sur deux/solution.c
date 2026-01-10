/*CONSTRAINTS

Chaque ligne de texte contient au plus 100 caractères.
INPUT

Sur la première ligne un entier, nbLignes : le nombre total de lignes du texte.
Les nbLignes lignes suivantes contiennent alors le texte.
OUTPUT

Vous devez afficher uniquement les lignes impaires.
*/

#include<stdio.h>

int main()
{
    int nb_line;
    scanf("%d\n", &nb_line);                 
    char text[101];
    
    int i = 0;
    while (i < nb_line)
    {      
        scanf("%[^\n]\n", text);        
        
        if (i % 2 == 0)      
        {
            printf("%s\n", text);
        }
        i++;
    }

    return 0;
}

//Solution France IOI

/*Algorithme

Une fois lu le nombre total de lignes, on va lire chacune des lignes, puis tester si son numéro est impair (à l’aide de l’opérateur "modulo") et l’afficher si c’est le cas.*/

#include <stdio.h>
int main()
{
   int nbLignes;
   char ligne[101];
   scanf("%d\n", &nbLignes);
   for (int idLigne = 1; idLigne <= nbLignes; idLigne = idLigne + 1)
   {
      scanf("%[^\n]\n", ligne);
      if (idLigne % 2 == 1)
      {
         printf("%s\n", ligne);
      }
   }
}
