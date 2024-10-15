#include <stdio.h>

int main()
{
    const int min = -100, max = 100;
    int N;
    printf("Entrer un  nombre \n");
    scanf("%d", &N);
    if (N < max && N > min)
    {
        printf("le nombre %d est compris entre %d et %d", N, min, max);
    }
    else if (N < min)
    {
        printf("%d est inferieur á %d ", N, min);
    }
    else
    {
        printf("%d est supérieur á %d ", N, max);
    }
}