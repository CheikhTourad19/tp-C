#include <stdio.h>
#include <stdlib.h>
const int n = 10;
int main()
{
    int *p;
    p = (int *)calloc(n, sizeof(int));
    p = (int *)realloc(p, (n + 5) * sizeof(int));
    for (int i = n; i < n + 5; i++)
    {
        *(p + i) = 1;
    }

    for (int i = 0; i < 15; i++)
    {
        printf("%d", *(p + i));
    }

    return 0;
}