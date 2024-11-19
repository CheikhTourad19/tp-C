#include <stdio.h>
int main()
{

    int A[5], B[6], V, tmp, k = 0;

    for (int i = 0; i < 5; i++)
    {
        A[i] = i + 2;
        printf(" %d ", A[i]);
    }
    printf("\ndonner un element que vous voulez inserer\n");
    scanf("%d", &V);

    for (int i = 0; i < 5; i++)
    {
        if (A[i] < V)
        {

            B[i] = A[i];
            k++;
        }
        else
        {
            B[i + 1] = A[i];
        }
    }
    B[k] = V;

    for (int i = 0; i < 6; i++)
    {

        printf(" %d ", B[i]);
    }

    return 0;
}