#include <stdio.h>

int main()
{
    int A[5][5], B[5][5], C[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            A[i][j] = i + j;
            B[i][j] = i * j;
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            printf(" %d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}