#include <stdio.h>

int main()
{
    int a, b, tmp;
    printf("entrer deux valeurs \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf(" a: %d b: %d\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf(" a: %d b: %d\n", a, b);
    return 0;
}