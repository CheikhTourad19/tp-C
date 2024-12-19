#include <stdio.h>
#include <stdlib.h>
const int taille = 12;
int main()
{
    int *tab;
    tab = calloc(taille, sizeof(int));
    for (int i = 0; i < taille; i++)
    {
        *(tab + i) = i;
    }
    for (int i = 0; i < taille; i++)
    {
        printf("%d", *(tab + i));
        if (i == 3 || i == 7 || i == 11)
        {
            printf("\n");
        }
    }
}