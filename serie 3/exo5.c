#include <stdio.h>

const int DA = 4, DB = 5;

int main()
{
    int A[DA], B[DB], C[DA + DB], i, j, k;
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
    i = 0;
    j = 0;
    k = 0;
    while (i < DB && j < DB && k < DA + DB)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
        }
        else
        {
            C[k] = B[j];
            j++;
        }

        if (i >= DA)
        {
            C[k] = B[j];
        }
        k++;
    }
    i = 0;
    for (i = 0; i < DA + DB; i++)
    {
        printf("%d", C[i]);
    }

    return 0;
}