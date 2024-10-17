#include <stdio.h>
const int m = 9;

int main()
{
    int i, j, M[m][m], n;
    int A[m * m], tmp;

    do
    {

        printf(" donner la taille de votre matrice carré < 9\n");
        scanf("%d", &n);
    } while (n > 9);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("donner l'element %d---%d \n", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            A[(i * n) + j] = M[i][j];
        }
    }

    for (i = 0; i < (n * n) - 1; i++)
    {
        for (j = 0; j < (n * n) - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }

    printf("voici la matrice trieé \n");

    for (i = 0; i < (n * n); i++)
    {
        /**  if (i == 2 || i == 5 || i == 8)
         {
             printf("\n");
         }

         if (i <= 2 && i > 0)
         {
             printf("1---%d", A[i]);
         }
         if (i <= 5 && i > 2)
         {
             printf("2---%d", A[i]);
         }
         if (i <= 8 && i > 5)
         {
             printf("3---%d", A[i]);
         }*/
        printf("\n %d \n", A[i]);
    }

    return 0;
}