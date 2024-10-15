#include <stdio.h>

int main()
{
    int A = 0, B = 0, C = 0;
    A = 5;
    B = 3;
    C = A + B;
    A = 2;
    C = B - A;
    printf("%d %d %d", A, B, C);
    return 0;
}