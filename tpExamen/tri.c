#include <stdio.h>

const int taille = 50;

int main()
{
    int n, tab[taille], i, j, tmp, pos = 0;

    // Instruction 1 remplissage du tableau
    printf("Donner la taille du tableau \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Donner l'element %d \n", i + 1);
        scanf("%d", &tab[i]);
    }
    // Instruction 2 Affichage du Tableau
    printf("Voici votre tableau \n");
    for (i = 0; i < n; i++)
    {
        printf("%d--%d \n", i, tab[i]);
    }
    // Instruction 3 faire le tri du tableau

    // partager le tableau en deux partie une paire et l'autre impaire
    for (i = 0; i < n; i++)
    {
        if (tab[i] % 2 == 0)
        {
            tmp = tab[i];
            tab[i] = tab[pos];
            tab[pos] = tmp;
            pos++;
        }
    }
    printf("Voici votre tableau partge \n");
    for (i = 0; i < n; i++)
    {
        printf("%d--%d \n", i, tab[i]);
    }

    // Faire le tri des element pairs
    // printf("%d ", pos);

    for (i = 0; i < pos - 1; i++)
    {
        for (j = 0; j < pos - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    // faire le tri des element impaires

    for (i = pos; i < n - 1; i++)
    {
        for (j = i; j < n - i - 1 + pos; j++)
        {
            if (tab[j] < tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
    // Affichage du tableau
    printf("Voici le tableau trie \n");
    for (i = 0; i < n; i++)
    {
        printf("%d--%d \n", i, tab[i]);
    }
}