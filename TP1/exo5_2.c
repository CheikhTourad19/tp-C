#include <stdio.h>

int main()
{
    int a, b, c, tmp;
    printf("entrer trois valeurs \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf(" a: %d b: %d c: %d\n", a, b, c);
    tmp = b;
    b = a;
    a = c;
    c = tmp;
    printf(" a: %d b: %d c: %d\n", a, b, c);
    return 0;
}