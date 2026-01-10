/*
Ce que doit faire votre programme :

Votre programme doit lire l'âge d'une personne et afficher soit « Tarif réduit » si cette personne a strictement moins de 21 ans, soit « Tarif plein » dans le cas contraire.
EXAMPLEs

EXAMPLE 1
input:
22
output:
Tarif plein
EXAMPLE 2
input:
16
output:
Tarif réduit
*/

#include <stdio.h>

int main()
{
   int age; 
   scanf("%d", &age);
   if(age < 21)
   {
      printf("Tarif réduit");
   }
   else
   {
      printf("Tarif plein");
   }
}
