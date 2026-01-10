/*Ce que doit faire votre programme :

Écrivez une fonction qui prend en paramètre les coordonnées (𝑥1,𝑦1) et (𝑥2,𝑦2) de deux points et 
retourne la distance euclidienne entre ces deux points. 
On rappelle que la distance euclidienne entre deux points est égale à :


√---------------------------
	(𝑥2−y1)2+(𝑦2−𝑦1)2

Utilisez ensuite cette fonction dans un programme qui lit quatre nombres décimaux 𝑥1, 𝑦1, 𝑥2 et 𝑦2 tapés au clavier, 
puis affiche la distance entre les deux points correspondants.

On pourra utiliser les fonctions mathématiques de la bibliothèque standard et dont les déclarations sont :
double sqrt(double x); // retourne la racine carrée du paramètre x
double pow(double x, double y); // retourne la valeur de x^y (x puissance y)
On les obtiendra avec l'inclusion suivante :
#include <math.h>
EXAMPLE

input:
22.5
46.8
4.25
7.22

output:
43.584847
*/

#include <stdio.h>
#include <math.h>

double   distance_euclidienne(double x1, double y1, double x2, double y2)
{ 
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int   main()
{
   double   x1;
   scanf("%lf", &x1);
   
   double   y1;
   scanf("%lf", &y1);
   
   double   x2;
   scanf("%lf", &x2);
   
   double   y2;
   scanf("%lf", &y2);
   
   printf("%.10lf\n", distance_euclidienne(x1, y1, x2, y2));
   return 0;
}


