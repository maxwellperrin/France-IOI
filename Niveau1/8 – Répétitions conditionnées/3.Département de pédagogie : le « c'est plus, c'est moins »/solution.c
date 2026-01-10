/*
Ce que doit faire votre programme :

Votre programme doit d'abord lire un entier, le nombre que l'enfant devra trouver. Ensuite, il devra lire les propositions du joueur, et afficher à chaque fois le texte « c'est plus » (l'enfant a proposé un nombre trop petit) ou « c'est moins » (l'enfant a proposé un nombre trop grand) selon les cas, et recommencer tant que l'enfant n'a pas trouvé le bon nombre.
À la fin, il faudra afficher le texte « Nombre d'essais nécessaires : » puis, à la ligne en dessous, le nombre d'essais qui ont été nécessaires.
On vous garantit que l'enfant finira par trouver la bonne valeur !
EXAMPLEs

EXAMPLE 1
input:
5
1
2
3
4
5
output:
c'est plus
c'est plus
c'est plus
c'est plus
Nombre d'essais nécessaires :
5
EXAMPLE 2
input:
10
5
15
8
12
11
10
output:
c'est plus
c'est moins
c'est plus
c'est moins
c'est moins
Nombre d'essais nécessaires :
6
*/

#include<stdio.h>

int   main()
{
   int   answer;
   scanf("%d", &answer);
   
   int   guess;
   scanf("%d", &guess);
   
   int   try = 0;
   
   while(guess != answer)
   {
      if(guess > answer)
      {
         printf("c'est moins\n");
      }
      else if(guess < answer)
      {
         printf("c'est plus\n");
      }
      try++;
      scanf("%d", &guess);
   }
   if(guess == answer)
   {
      try++;
      printf("Nombre d'essais nécessaires : \n");
      printf("%d", try);
   }   
}
      
