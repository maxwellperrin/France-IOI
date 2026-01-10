/*TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

Le nom de l’auteur comprend au plus 50 caractères.
INPUT

Sur la première ligne, le nom de l’auteur, la première lettre étant une majuscule.
Sur la seconde ligne, l’âge de son fils aîné au moment où le livre a été écrit.
OUTPUT

Le numéro du bâtiment et la lettre correspondant à l’allée, sur la même ligne sans espace entre les deux.
EXAMPLE

input:
Dopelgon
6
output:
4F
*/

#include<stdio.h>

int   main()
{
   char   name[50];
   scanf("%s", name);
   
   int age;
   scanf("%d", &age);
    
   int number = name[0] - 'A' + 1;
   char letter = age + 'A' - 1;
   
   printf("%d%c", number, letter);
   
   return 0;
}

//Solution FranceIOI 

/*Algorithme

Après avoir lu le nom de l’auteur et l’âge de son fils, on applique directement les conversions entre caractères et entiers, 
en faisant attention au fait que A équivaut ici à 1 (et pas à 0 !).*/

#include <stdio.h>
#include <string.h>
int main()
{
   char nomAuteur[51];
   int ageFils;
   scanf("%[^\n]\n", nomAuteur);
   scanf("%d", &ageFils);
   int batiment = nomAuteur[0] - 'A' + 1;
   char allee = ageFils - 1 + 'A';
   printf("%d%c", batiment, allee);
}



