#include <stdio.h>

int main()
{
    char a, b, c;
    char var[4];
    printf("entrer un nombre");
    scanf("%3s", var);
    printf("%s\n", var);
    a = var[0];
    b = var[1];
    c = var[2];
    printf("%c%c%c", c, b, a);

    return 0;
}