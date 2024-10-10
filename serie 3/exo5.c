#include <stdio.h>

const int DA = 4, DB = 5;

int main()
{
    int A[DA], B[DB], C[DA + DB], i, j;
    printf("veillez remplir le tableau A et B \n");
    for (i = 0; i < DB; i++)
    {
        if (i < DB - 1)
        {
            printf("Donner l'element %d des deux tableau \n ", i + 1);
            scanf("%d", &A[i]);
            scanf("%d", &B[i]);
        }
        else
        {
            printf("Donner l'element %d du tableau B \n ", i + 1);
            scanf("%d", &B[i]);
        }
    }
    printf("Voici les tableaux que vous avez remplit \n");
    for (i = 0; i < DB; i++)
    {
        if (i < DB - 1)
        {
            printf("%d - %d----%d \n", i + 1, A[i], B[i]);
        }
        else
        {
            printf("%d - %d----*", i + 1, B[i]);
        }
    }

    for (i = 0; i < DA + DB; i++)
    {

        for (j = 0; i < DB; j++)
        {
            if (A[j] < B[i])
            {
                C[i] = A[j];
            }
            else
            {
                C[i] = B[i];
            }
        }
    }

    return 0;
}