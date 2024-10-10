#include <stdio.h>
const int size = 50;

int main()
{
    int val, T[size], i, n, position = -1;

    printf("Donner la taille de votre tableau \n");
    scanf("%d", &n);

    printf("veiller remplir le tableau d'entier positif \n");

    for (i = 0; i < n; i++)
    {
        do
        {
            printf("donner une valeur positif pour l'element %d \n", i + 1);
            scanf("%d", &T[i]);
            if (T[i] < 0)
            {
                printf("valeur invalide \n");
            }

        } while (T[i] < 0);
    }

    printf("Donner l'entier a rechercher dans le tableau \n");
    do
    {
        scanf("%d", &val);
        if (val < 0)
        {
            printf("Valeur doit etre positif veillez reessayer \n");
        }

    } while (val < 0);

    for (i = 0; i < n; i++)
    {
        if (T[i] == val)
        {
            position = i;
            break;
        }
    }
    if (position == -1)
    {
        printf("Element non trouvé dans le tableau \n");
    }
    else
    {
        printf("L'element a été trouvé et sa premiere apparition est dans l'indice : %d", position + 1);
    }

    return 0;
}