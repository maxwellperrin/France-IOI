/*Ce que doit faire votre programme :

Schéma avec les anneaux
Votre robot doit partir de la case de gauche (en orange), aller chercher les anneaux (les ronds sur fond bleu) dans l'ordre (de gauche à droite) et les ramener un par un à la case de départ.
*/


#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
  int anneaux;
  
  anneaux = 1;
  repeat(10)
  {
     repeat(anneaux)
     {
      droite();
     }
     ramasser();
     repeat(anneaux)
     {
      gauche();
     }
     deposer();
     anneaux++;
  }
}
