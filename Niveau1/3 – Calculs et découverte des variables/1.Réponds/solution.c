/*Ce que doit faire votre programme :

Votre programme doit afficher le nombre 42.
Afficher un nombre

Pour afficher un nombre, en C, on utilise le programme suivant :

#include <stdio.h>
int main()
{
   printf("%d\n", 111);
}
↳
111

Le texte "%d\n" est en fait un descriptif de ce que l'on souhaite afficher. 
L'instruction printf remplace le %d au sein de ce texte par le nombre donné juste après. Elle obtient donc le texte "111\n", qui est affiché.
*/

#include <stdio.h>

int   main()
{
   printf("%d\n", 42);
}
