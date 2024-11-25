#include <stdio.h>
#include <string.h>

void remplirTab(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("Donner la valeur %d du tableau \n", i + 1);
        scanf("%d", &tab[i]);
    }
}
void afficherTab(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%d -- %d \n", i + 1, tab[i]);
    }
}

int main()
{
    int tab[5];
    remplirTab(tab, 5);
    afficherTab(tab, 5);

    return 0;
}
