#include <stdio.h>
const int size = 50;

int main()
{
    int M[size][size], L, C, i, j;
    long int somme = 0;

    printf("Donner la taille du tableau \n");
    do

    {
        printf("Donner le nombre de ligne \n");
        scanf("%d", &L);
        printf("Donner le nombre de colonnes \n");
        scanf("%d", &C);
        if (L > 50 || C > 50)
        {
            printf("le nombre de ligne ainsi que le nombre de colonnes ne peuvent depasser 50 reessayez \n");
        }
    } while (L > 50 || C > 50);

    printf("Procedons au remplissage du tableau de taille %d-%d \n", L, C);

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("Donner l'element de la ligne %d et de la colone %d \n", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }
    printf("Voici le tableau que vous avez remplit\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("l'element de la ligne %d et de la colone %d est : %d \n", i + 1, j + 1, M[i][j]);
        }
    }

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            somme = somme + M[i][j];
        }
    }
    printf("La somme du tableau que vous avez saisi est de : %ld", somme);

    return 0;
}