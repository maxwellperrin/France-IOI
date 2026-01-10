/*Ce que doit faire votre programme :

Votre programme doit lire deux entiers, correspondant à deux numéros de bornes kilométriques, et il doit afficher la distance séparant ces deux bornes. Notez que le résultat doit être un nombre positif ou nul.
EXAMPLEs

EXAMPLE 1
input:
152
189
output:
37
*/

#include <stdio.h>

int   main()
{
   int   positionDepart;
   int   positionDarrivee;
   
   scanf("%d", &positionDepart);
   scanf("%d", &positionDarrivee);
   
   int   ecart;
   
   ecart = positionDarrivee - positionDepart;
   if(ecart < 0)
   {
      ecart = -ecart;
   }
   printf("%d\n", ecart);
}
