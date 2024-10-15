#include <stdio.h>

int main()
{
    int surface;
    double prix;
    char spot;

    do
    {
        printf("Donner l'emplacement \n");
        scanf("%c", &spot);
        printf("Donner la surface \n");
        scanf("%d", &surface);

        if (spot != 'a' || spot != 'b' || spot != 'c')
        {
            printf("emplacement n'existe pas \n");
        }
        if ((spot == 'a' && surface < 500) || (spot == 'b' && surface < 500) || (spot == 'c' && surface > 500))
        {
            printf("Surface non prise en charge pour cet emplacement \n");
        }

    } while (spot != 'c' || spot != 'b' || spot != 'c' || (spot == 'a' && surface < 500) || (spot == 'b' && surface < 500) || surface > 1000 || (spot == 'c' && surface > 500));

    if (spot == 'a' && spot < 1000)
    {
        prix = surface * 100
    }
    else if (spot == 'a' &&surface = 1000)
    {
        prix = surface * 90;
    }
    else if (spot == 'b' && surface < 1000)
    {
        prix = surface * 120;
    }
    else if (spot == 'b' &&surface = 1000)
    {
        prix = surface * 100;
    }
    else if (spot == 'b' &&surface = 500)
    {
        prix = surface * 150;
    }

    else
    {
        prix = surface * 200;
    }

    printf("le prix est de %d", prix);

    return 0;
}