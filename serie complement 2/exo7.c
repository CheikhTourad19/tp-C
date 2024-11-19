#include <stdio.h>
int main()
{

    int A[5], B[5], scalaire[5];

    for (int i = 0; i < 5; i++)
    {
        A[i] = i;
        B[i] = i + 5;
        scalaire[i] = A[i] * B[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", scalaire[i]);
    }

    return 0;
}