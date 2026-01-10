/*CONSTRAINTS

Chaque ligne de texte contient moins de 1000 caractères.
INPUT

Sur la première ligne, un entier nbLignes, le nombre de lignes du texte.
Les nbLignes suivantes contiennent chacune une ligne de texte qu’il faut inverser.
OUTPUT

Pour chaque ligne du texte original, vous devez l’afficher de manière inversée.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int nbLignes; 
    scanf("%d", &nbLignes);
    getchar(); 

    int line = 0;
    while (line < nbLignes)
    {
        char text[1001];
        scanf("%[^\n]", text);
        getchar(); 

        int length_text = strlen(text);
        int j = length_text - 1;
        while (j >= 0)
        {
            printf("%c", text[j]);
            j--;
        }
        printf("\n");
        line++;
    }
    return 0;
}

//Solution France IOI 

/*Algorithme

On utilise une boucle pour lire chaque ligne de texte, l’une après l’autre. Pour chaque ligne, il faut alors afficher les caractères en partant de la fin.
*/

#include <stdio.h>
#include <string.h>
int main()
{
   int nbLignes;
   scanf("%d\n", &nbLignes);
   for (int idLigne = 0; idLigne < nbLignes; idLigne = idLigne + 1)
   {
      char ligneTexte[1001];
      scanf("%[^\n]\n",ligneTexte);
      int longueur = strlen(ligneTexte);
      for (int iCar = longueur  - 1; iCar >= 0; iCar = iCar - 1)
      {
         printf("%c", ligneTexte[iCar]);
      }
      printf("\n");
   }
}
