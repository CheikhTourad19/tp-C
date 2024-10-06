
#include <stdio.h>

int main()
{
    const float pi = 3.14;
    float r1, r2, surface;
    printf("entrer les rayons\n");
    scanf("%f", &r1);
    scanf("%f", &r2);
    surface = pi * (r2 * r2 - r1 * r1);
    printf("surface : %.2f", surface);
    return 0;
}