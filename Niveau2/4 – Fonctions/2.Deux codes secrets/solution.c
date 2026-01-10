/*
Ce que doit faire votre programme :

Vous choisissez 2121 comme deuxième mot de passe. Écrivez un programme qui attend successivement les codes 4242 puis 2121, 
en affichant cette fois « Premier code bon. » entre les deux, comme montré dans l'exemple.
Ici, écrivez une et une seule fonction pour demander successivement les deux codes.
*/
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

void entreLesCodes(int codeSecret)
{
    int code = 0;
    while (code != codeSecret)
    {
        ft_putstr("Entrez le code :\n");
        scanf("%d", &code);
    }
}

int main()
{
    entreLesCodes(4242);
    ft_putstr("Premier code bon.\n");
    entreLesCodes(2121);
    ft_putstr("Bravo.");
    
    return 0;
}

//Solution France IOI 

#include <stdio.h>
void attendreCode(int codeSecret)
{
   int tentative;
   do
   {
      printf("Entrez le code :\n");
      scanf("%d", &tentative);
   }
   while (tentative != codeSecret);
}
int main()
{
   attendreCode(4242);
   printf("Premier code bon.\n");
   attendreCode(2121);
   printf("Bravo.\n");
}
