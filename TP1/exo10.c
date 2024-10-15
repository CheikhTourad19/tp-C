#include <stdio.h>
#include <math.h>

int main()
{
    double XA = 0, YA = 0, XB = 0, YB = 0, distance;
    printf("entrer la valeur de XA \n");
    scanf("%lf", &XA);
    printf("entrer la valeur de YA \n");
    scanf("%lf", &YA);
    printf("entrer la valeur de XB \n");
    scanf("%lf", &XB);
    printf("entrer la valeur de YB \n");
    scanf("%lf", &YB);
    distance = sqrt((XB - XA) * (XB - XA) + (YB - YA) * (YB - YA));

    printf("Distance = %lf", distance);

    return 0;
}