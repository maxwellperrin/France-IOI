/*
Ce que doit faire votre programme :

Le palais est un grand carré de taille 10×10, et le robot se trouve au départ dans le coin en bas à gauche, comme représenté ci-dessous :
Grille du palais
Votre robot doit passer une et une seule fois dans chacune des pièces, puis se retrouver dans sa case de départ.
*/

#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   repeat(9)
   {
      haut();
   }
   droite();
   repeat(4)
   {
      repeat(8)
      {
         bas();
      }
      droite();
      repeat(8)
      {
         haut();
      }
      droite();
    }
    repeat(9)
    {
       bas();
    }
    repeat(9)
    {
       gauche();
    }    
}
