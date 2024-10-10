#include <stdio.h>

const int size = 20;

int main()
{
    int minp, maxp, min, max, i, n, tab[size], tabpos[size], tabneg[size];
    int j, k;

    long int somme = 0;
    do
    {
        printf("Donner la taille du tableau de ndepassant pas 20 \n");
        scanf("%d", &n);
    } while (n > 20);

    for (i = 0; i < n; i++)
    {
        printf("Entrer le Nombre %d \n", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("Voici le tableau que vous avez saisi \n");
    for (i = 0; i < n; i++)
    {
        printf(" %d - %d \n", i + 1, tab[i]);
    }

    for (i = 0; i < n; i++)
    {
        somme = somme + tab[i];
    }
    printf("La somme est de %ld \n", somme);

    max = 0;
    min = tab[0];

    for (i = 1; i < n; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
            minp = i;
        }
        if (tab[i] > max)
        {
            max = tab[i];
            maxp = i;
        }
    }
    printf("le maximum est de %d et sa position est : %d \n", max, maxp + 1);
    printf("le minimum est de %d et sa position est : %d \n", min, minp + 1);
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (tab[i] >= 0)
        {
            tabpos[j] = tab[i];
            j++;
        }
    }

    k = 0;

    for (i = 0; i < n; i++)
    {
        if (tab[i] < 0)
        {
            tabneg[k] = tab[i];
            k++;
        }
    }
    printf("les element positif non nuls sont :\n");

    for (i = 0; i < j; i++)
    {
        if (tabpos[i] != 0)
        {
            printf("%d - %d \n", i + 1, tabpos[i]);
        }
    }
    printf("les element negatif non nuls sont :\n");
    for (i = 0; i < k; i++)
    {
        if (tabneg[i] != 0)
        {
            printf("%d - %d \n", i + 1, tabneg[i]);
        }
    }

    return 0;
}