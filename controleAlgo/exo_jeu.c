#include <stdio.h>

int main()
{
    int j, p;
    double A, C, factj = 1, factp = 1, pj, factpj = 1;
    printf("donner le nombre partant");
    scanf("%d", &p);

    printf("donner le nombre j ");

    do
    {
        printf("Un nombre compris entre 3 et 5 \n");
        scanf("%d", &j);
    } while (j < 3 || j > 5);

    pj = p - j;

    for (int i = 1; i <= j; i++)
    {
        factj = factj * i;
    }

    for (int i = 1; i <= p; i++)
    {
        factp = factp * i;
    }
    for (int i = 1; i <= pj; i++)
    {
        factpj = factpj * i;
    }

    A = factp / factpj;
    C = (1 / factj) * A;
    printf("%0.lf %0.lf  \n", A, C);

    printf("Nombre de partant %d \n", p);
    printf("Nombre de chevaux joue %d \n", j);
    printf("Probabilité de gagner dans l'ordre est de 1/%.0lf \n", A);
    printf("Probabilité de gagner dans le desordre est de 1/%.0lf \n", C);

    return 0;
}
