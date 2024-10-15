#include <stdio.h>

int main()
{
    int A, B;
    printf("Donner deux nombre \n");
    scanf("%d", &A);
    scanf("%d", &B);
    if ((A < 0 && B > 0) || (A > 0 && B < 0))
    {
        printf("signe du produit negatif");
    }
    else
    {
        printf("signe positif du produit");
    }

    return 0;
}