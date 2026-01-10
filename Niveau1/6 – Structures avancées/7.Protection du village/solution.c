/*Ce que doit faire votre programme :

Le programme doit d'abord lire un entier strictement positif correspondant au nombre de maisons. 
Ensuite, pour chaque maison, il doit lire la position horizontale (l'abscisse, le "x") et sa position verticale (l'ordonnée, le "y") de cette maison. 
Toutes les abscisses et ordonnées sont des entiers compris entre zéro et 1 million.
Le programme doit alors afficher le périmètre de la plus petite clôture rectangulaire englobant toutes les maisons. 
Ce rectangle doit avoir ses côtés parallèles aux axes du repère, comme montré sur l'illustration.


EXAMPLE

input:
4
1
5
5
3
4
6
2
9
output:
20
*/

int main()
{
    int nbrMaisons;
    scanf("%d", &nbrMaisons);

    int x, y;
    scanf("%d %d", &x, &y);

    int xmin = x;
    int xmax = x;
    int ymin = y;
    int ymax = y;

    int i = 1;
    while (i < nbrMaisons)
    {
        scanf("%d %d", &x, &y);

        if (x < xmin) xmin = x;
        if (x > xmax) xmax = x;
        if (y < ymin) ymin = y;
        if (y > ymax) ymax = y;

        i++;
    }

    int largeur = xmax - xmin;
    int hauteur = ymax - ymin;
    int perimetre = 2 * (largeur + hauteur);

    printf("%d\n", perimetre);
    return 0;
}


