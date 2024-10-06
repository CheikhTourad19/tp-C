#include <stdio.h>

int main()
{
    int a, b, c, temp;
    printf("Entrez trois entiers :\n");
    printf("Entier 1 : ");
    scanf("%d", &a);
    printf("Entier 2 : ");
    scanf("%d", &b);
    printf("Entier 3 : ");
    scanf("%d", &c);

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("Les entiers par ordre décroissant sont : %d, %d, %d\n", a, b, c);
    return 0;
}
