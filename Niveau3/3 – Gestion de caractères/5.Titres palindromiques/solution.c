/*Vous devez analyser les titres de tous les livres de la bibliothèque et sélectionner ceux qui sont des palindromes.
TIME AND MEMORY LIMITS (C)

Time: 0.1s on a 1GHz machine.
Memory: 8,000 KB.
CONSTRAINTS

Chaque titre de livre est au plus de longueur 100.
INPUT

La première ligne contient un entier nbLivres, le nombre total de livres.
Chacun des nbLivres lignes suivantes contient un titre de livre.
Les titres sont composés d’espaces et de lettres majuscules ou minuscules, non accentuées.
OUTPUT

Vous devez afficher chaque titre de livre qui est un palindrome.
Pour déterminer si un titre est un palindrome, on ne considérera ni les espaces, ni la casse (majuscule ou minuscule) des lettres.
EXAMPLE

input:
3
Lieur a Rueil
Le chevalier delibere
Un roc si biscornu
output:
Lieur a Rueil
Un roc si biscornu
*/

void palindromique(char *character)
{
    int i = 0;
    int size = 0;


    while (character[i] != '\0')
    {
        size++;
        i++;
    }

    int indexA = 0;
    int indexB = size - 1;


    while (indexA < indexB)
    {

       while (indexA < indexB && !((character[indexA] >= 'A' && character[indexA] <= 'Z') 
                                || (character[indexA] >= 'a' && character[indexA] <= 'z')))
                                
                                   indexA++;
                                

       while (indexA < indexB && !((character[indexB] >= 'A' && character[indexB] <= 'Z')
                                || (character[indexB] >= 'a' && character[indexB] <= 'z')))
                         
                                    indexB--;
                         



        char c1 = character[indexA];
        char c2 = character[indexB];


        if (c1 >= 'A' && c1 <= 'Z') c1 = c1 - 'A' + 'a';
        if (c2 >= 'A' && c2 <= 'Z') c2 = c2 - 'A' + 'a';


        if (c1 != c2)
        {
            return; 
        }

        indexA++;
        indexB--;
    }


    printf("%s\n", character);
}

int main()
{
    int nbLivres;
    scanf("%d", &nbLivres);
    

    int i = 0;
    while (i < nbLivres)
    {
        char title_books[101];
        scanf(" %[^\n]", title_books);
  
        palindromique(title_books);
        i++;
    }

    return 0;
}
