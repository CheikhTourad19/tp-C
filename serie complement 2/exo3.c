#include <stdio.h>

int main()
{
    int Matrice[5][5];
    int transpose[5][5];

    printf("!-----------Matrice-----------!\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Matrice[i][j] = (i * 5) + j;
            printf("   %d   ", Matrice[i][j]);
        }
        printf("\n");
    }
    printf("!-----------Transposé----------!\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            transpose[i][j] = Matrice[j][i];
            printf("  %d   ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}