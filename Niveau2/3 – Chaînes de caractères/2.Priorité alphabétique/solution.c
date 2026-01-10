/*
CONSTRAINTS

Chaque nom est composé uniquement de lettres majuscules, sans espaces.
Sa longueur sera au plus égale à 50.
INPUT

Sur la première ligne, le nom de la première personne.
Sur la seconde ligne, le nom de la seconde personne.
OUTPUT

Le nom le plus petit selon l’ordre alphabétique, c’est-à-dire le nom qui vient en premier selon 
cet ordre.
Si les deux noms sont égaux, il ne faut rien afficher car la personne a voulu tricher en faisant deux demandes d’un seul coup.
*/

#include <stdio.h>
#include <string.h>

int   main()
{
   char person1[50]; 
   scanf("%[^\n]", person1);
   getchar();
   
   char person2[50];
   scanf("%[^\n]", person2);
   getchar();
   
   
   int   i = 0;
   while (person1[i] != '\0') 
   {
      if (person1[i] != ' ')
      {
        if (person1[i] >= 97 && person1[i] <= 122) 
        {
          person1[i] = person1[i] - 32 ;
        }
        else
        {
          person1[i] = person1[i];
        }
      }
      i++;
    }
    
   person1[i] = '\0';
    
    i = 0;
    while(person2[i] != '\0')
    {
       if(person2[i] != ' ')
       {
          if(person2[i] >= 'a' && person2[i] <= 'z')
          {
            person2[i] = person2[i] - ('a' - 'A');
          }
          else
          {
            person2[i] = person2[i];
          }
       }
       i++; 
    }
    
   person2[i] = '\0';
    

    i = 0;
    int output = 0;
    
    while(person1[i] != '\0' && person2[i] != '\0')
    {
       if(person1[i] != person2[i])
       {
          output = person1[i] - person2[i];
          break;
       }
       i++;
    }

    if(output < 0)
    {
       printf("%s", person1);
    }  
    else if(output > 0)
    {
       printf("%s", person2);
    } 
    return 0;
}

   
// Solution France IOI

#include <stdio.h>
#include <string.h>
 
int main()
{
   char nom1[51], nom2[51];
   scanf("%[^\n]\n", nom1);
   scanf("%[^\n]\n", nom2);
   int comparaison = strcmp(nom1, nom2);
   if (comparaison < 0)
   {
      printf("%s\n", nom1);
   }
   else if (comparaison > 0)
   {
      printf("%s\n", nom2);
   }
}
