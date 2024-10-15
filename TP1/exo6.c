#include <stdio.h>
int main()
{
    const float pi = 3.14;
    float surface = 0, perimetre = 0, rayon = 0;
    printf("entrer le rayon de votre cercle\n");
    scanf("%f", &rayon);
    surface = rayon * rayon * pi;
    perimetre = 2 * pi * rayon;

    printf("Surface : %f , Perimetre : %f \n", surface, perimetre);

    return 0;
}