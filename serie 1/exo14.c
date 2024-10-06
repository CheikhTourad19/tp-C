#include <stdio.h>
#include <math.h>

int main()
{
    double nombre;
    int carre_inf, carre_sup, racine_inf, racine_sup;

    printf("Entrez un nombre réel: ");
    scanf("%lf", &nombre);

    racine_inf = (int)sqrt(nombre);
    racine_sup = racine_inf + 1;

    carre_inf = racine_inf * racine_inf;
    carre_sup = racine_sup * racine_sup;

    printf("Les deux carrés parfaits les plus proches qui encadrent %.2f sont %d et %d\n", nombre, carre_inf, carre_sup);

    return 0;
}
