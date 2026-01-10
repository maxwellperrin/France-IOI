/*Ce que doit faire votre programme :

L'école est formée de 4 classes, constituées respectivement de 25, 30, 27 et 22 élèves. Cependant, 8 élèves sont absents aujourd'hui. 
Sachant que chaque élève présent doit recevoir 3 bonbons, écrivez un programme qui calcule puis affiche le nombre total de bonbons nécessaires.
Vous n'avez pas besoin de calculatrice : effectuez les calculs dans votre programme.
*/

#include <stdio.h>

int main()
{
 printf("%d\n", (25 + 30 + 27 + 22 - 8)* 3);  
}
