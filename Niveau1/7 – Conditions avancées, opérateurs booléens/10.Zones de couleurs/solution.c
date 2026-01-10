/*Ce que doit faire votre programme :

Sur une table est placée une feuille de papier rectangulaire de 90 cm de large et 70 cm de haut, composée de zones de différentes couleurs, comme le décrit la figure ci-dessous. Un certain nombre de personnes placent l'une après l'autre un jeton où elles le souhaitent sur la table, à l'exception des frontières entre les différentes zones.

On vous donne en entrée le nombre de jetons qui ont été déposés, puis, pour chaque jeton, ses coordonnées sur la feuille par rapport à l'origine en haut à gauche, sous la forme d'une abscisse et d'une ordonnée entre −1 000 et 1 000.
Votre programme devra qualifier chaque jeton avec l'un des textes suivants, en fonction de la couleur sur laquelle il se trouve :
« En dehors de la feuille »
« Dans une zone jaune »
« Dans une zone bleue »
« Dans une zone rouge »
Essayez d'écrire votre programme de sorte qu'il y ait au maximum une condition par possibilité de texte affiché.
EXAMPLE

input:
4
16
12
30
22
64
62
-5
86
output:
Dans une zone bleue
Dans une zone jaune
Dans une zone rouge
En dehors de la feuille
COMMENTS

Dans l'exemple, on a 4 jetons, de coordonnées (16 ; 12), (30 ; 22), (64 ; 62) et (-5 ; 86).
*/

#include <stdio.h>

int main()
{
    int nbrJeton;
    scanf("%d", &nbrJeton);

    int i = 0;

    while (i < nbrJeton)
    {
        int abscisseX, ordonneeY;
        scanf("%d %d", &abscisseX, &ordonneeY);

        if ((abscisseX < 0 || abscisseX > 90) || (ordonneeY < 0 || ordonneeY > 70))
        {
            printf("En dehors de la feuille\n");
        }
        else if (((abscisseX >= 15 && abscisseX <= 45) && (ordonneeY >= 60 && ordonneeY <= 70)) ||
                 ((abscisseX >= 60 && abscisseX <= 85) && (ordonneeY >= 60 && ordonneeY <= 70)))
        {
            printf("Dans une zone rouge\n");
        }
        else if ((abscisseX >= 10 && abscisseX <= 85) && (ordonneeY >= 10 && ordonneeY <= 55) &&
                 !(abscisseX >= 25 && abscisseX <= 50 && ordonneeY >= 20 && ordonneeY <= 45))
        {
            printf("Dans une zone bleue\n");
        }
        else
        {
            printf("Dans une zone jaune\n");
        }
        i++;
    }

    return 0;
}

/*Solution par France IOI

#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
   int nbJetons;
   scanf("%d", &nbJetons);
   repeat (nbJetons)
   {
      int x, y;
      scanf("%d%d", &x, &y);
      if (x < 0 || x > 90 || y < 0 || y > 70)
      {
         printf("En dehors de la feuille\n");
      }
      else if (y > 60 && ((x > 15 && x < 45) || (x > 60 && x < 85)))
      {
         printf("Dans une zone rouge\n");
      }
      else if (x > 10 && x < 85 && y > 10 && y < 55 && !(x > 25 && x < 50 && y > 20 && y < 45))
      {
         printf("Dans une zone bleue\n");
      }
      else
      {
         printf("Dans une zone jaune\n");
      }
   }
}

*/
