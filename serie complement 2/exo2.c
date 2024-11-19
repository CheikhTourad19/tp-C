#include <stdio.h>
const int m = 5, n = 4;

int main()
{
    int A[m], B[n], C[m + n];
    printf("!----------Tableau 1------------!\n");

    for (int i = 0; i < m; i++)
    {
        A[i] = i;
        printf("%d---%d \n", i, A[i]);
    }
    printf("!----------Tableau 2------------!\n");
    for (int i = 0; i < n; i++)
    {
        B[i] = i + 5;
        printf("%d---%d \n", i, B[i]);
    }
    printf("!----------Tableau Fusion--------!\n");
    for (int i = 0; i < m + n; i++)
    {
        if (i < m)
        {
            C[i] = A[i];
        }
        else
        {
            C[i] = B[i - m];
        }

        printf("%d--%d \n", i, C[i]);
    }

    return 0;
}
