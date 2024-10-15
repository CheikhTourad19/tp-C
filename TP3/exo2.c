#include <stdio.h>

int main()
{
    int n, n_1, n_2;
    double U;
    int i;

    printf("Donner la valeur n : \n");
    scanf("%d", &n);
    if (n == 1 || n == 0)
    {
        U = 1;
    }
    else if (n > 1)
    {
        n_1 = 1;
        n_2 = 1;
        for (i = 3; i <= n; i++)
        {
            U = n_1 + n_2;
            n_1 = n_2;
            n_2 = U;
        }
    }
    else
    {
        printf("entrer un nombre positif");
    }
    printf(" U(%d) = %lf", n, U);

    return 0;
}