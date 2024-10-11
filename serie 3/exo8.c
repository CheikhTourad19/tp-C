#include <stdio.h>
const int size = 10;

int main()

{
    int N, A[size][size], B[size][size], i, j, k, l, C[size][size];
    printf("donner la taille des tableaux \n");
    do
    {
        scanf("%d", &N);
        if (N > 10)
        {
            printf("sa taille doit etre 10 au plus, Reessayer\n ");
        }

    } while (N > 10);

    printf("Veiller remplir tableau A \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Donner la valeur de l'element %d-%d \n", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Veiller remplir tableau B \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Donner la valeur de l'element %d-%d \n", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    printf("Voici le tableau A que vous avez remplit \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("l'element %d-%d = %d\n", i + 1, j + 1, A[i][j]);
        }
    }
    printf("Voici le tableau B que vous avez remplit \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            printf("l'element %d-%d = %d\n", i + 1, j + 1, B[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)

        {
            C[i][j] = 0;
            for (k = 0; k < N; k++)
            {
                C[i][j] = C[i][j] + (A[i][k] * B[j][k]);
            }
        }
    }

    return 0;
}