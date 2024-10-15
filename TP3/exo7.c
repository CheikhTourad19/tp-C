#include <stdio.h>
const int size = 10;

int main()
{
    int M[size][size], N, i, j, x, occu = 0;

    printf("donner la taille de votre tableau \n");
    do
    {
        scanf("%d", &N);
        if (N > 10)
        {
            printf("sa taille doit etre 10 au plus, Reessayer\n ");
        }

    } while (N > 10);

    printf("Veiller remplir de tableau \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Donner la valeur de l'element %d-%d \n", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }
    printf("Voici le tableau que vous avez remplit \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("l'element %d-%d = %d\n", i + 1, j + 1, M[i][j]);
        }
    }
    printf("donner l'entier a chercher\n");
    scanf("%d", &x);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (M[i][j] == x)
            {
                occu++;
            }
        }
    }
    printf("l'element que vous chercher se trouve %d fois dans le tableau", occu);

    return 0;
}