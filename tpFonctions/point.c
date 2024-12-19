#include <stdio.h>

int main()
{
    // 1
    int a = 5;
    int *p = &a;
    // 2
    int *p2;
    *p2 = a;

    // result
    printf("%d", *p2);
    return 0;
}