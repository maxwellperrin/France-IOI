/*Ce que doit faire votre programme :

Votre programme doit lire un entier : le code fourni par l'utilisateur. Si ce code correspond au code secret, qui est 64 741, alors le programme devra afficher le texte « Bon festin ! ». Sinon, il devra afficher « Allez-vous en ! ».
EXAMPLEs

EXAMPLE 1
input:
42
output:
Allez-vous en !
EXAMPLE 2
input:
64741
output:
Bon festin !
*/

#include <stdio.h>

int   main()
{
   int   mdp;
   scanf("%d", &mdp);
   
   if(mdp != 64741)
   {
      printf("Allez-vous en !");
   }
   else
   {
      printf("Bon festin !");
   }
}

