/* 
Ce que doit faire votre programme :

Le mot de passe que vous choisissez est 4242. Écrivez un programme qui attend ce code une première fois, 
en le demandant de manière répétée par une ligne contenant « Entrez le code : », puis qui 
une fois ce code entré, affiche « Encore une fois. » et attend le code à nouveau, avant d'afficher
 « Bravo. » et de se terminer (vous trouverez sans doute cela plus clair avec l'exemple ci-dessous).
L'objectif de cet exercice est d'utiliser une fonction pour éviter de recopier deux fois les instructions qui permettent d'attendre le code 4242.
*/


#include <stdio.h>

void entreLeCode()
{
    int code = 0;

    while (code != 4242)
    {
        printf("Entrez le code :\n");
        scanf("%d", &code);
    }
}

int main()
{
    entreLeCode();           // première fois
    printf("Encore une fois.\n");
    entreLeCode();           // deuxième fois
    printf("Bravo.\n");

    return 0;
}

//Solution France IOI

/*Algorithme

La solution algorithmique est similaire à ce que nous avons pu voir dans le chapitre sur la répétition « tant que ». 
Nous utilisons ci-dessous une fonction attendreCode pour séparer ce bloc du reste du programme, et rendre celui-ci plus court et plus clair.*/

#include <stdio.h>
void attendreCode()
{
   int tentative;
   do
   {
      printf("Entrez le code :\n");
      scanf("%d", &tentative);
   }
   while (tentative != 4242);
}
int main()
{
   attendreCode();
   printf("Encore une fois.\n");
   attendreCode();
   printf("Bravo.\n");
}
