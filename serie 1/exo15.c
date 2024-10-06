#include <stdio.h>

int main()
{
    int V, volume_cl;
    int nombre_canettes;

    printf("Entrez le volume en litres: ");
    scanf("%d", &V);

    volume_cl = V * 100;

    nombre_canettes = volume_cl / 33;

    printf("Nombre de canettes de 33 cl que peut remplir un volume de %d litres: %d\n", V, nombre_canettes);

    return 0;
}
