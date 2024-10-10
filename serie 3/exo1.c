#include <stdio.h>
const int size = 1000;

int main()
{
    double somme, produit;
    float moy;
    int N, i, tab[size];

    printf("entrer le nombre d'entier que vous voulez \n");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Donner la valeur numero %d \n", i + 1);
        scanf("%d", &tab[i]);
    }
    i = 0;
    somme = 0;
    produit = 1;
    moy = 1;
    while (i < N)
    {
        somme = somme + tab[i];
        produit = produit * tab[i];
        i++;
    }
    moy = somme / N;
    printf("La somme et le produit des entier et la moyenne en utilisant while est S = %.3lf et P = %.3lf Moy=%.3f \n", somme, produit, moy);
    somme = 0;
    produit = 1;
    i = 0;
    moy = 1;
    do
    {
        somme = somme + tab[i];
        produit = produit * tab[i];
        i++;

    } while (i < N);
    moy = somme / N;
    printf("La somme et le produit des entier et la moyenne en utilisant do-while est S = %.3lf et P = %.3lf Moy=%.3f \n", somme, produit, moy);
    somme = 0;
    produit = 1;
    moy = 1;
    for (i = 0; i < N; i++)
    {
        somme = somme + tab[i];
        produit = produit * tab[i];
    }
    moy = somme / N;
    printf("La somme et le produit des entier et la moyenne en utilisant for est S = %.3lf et P = %.3lf Moy=%.3f \n", somme, produit, moy);

    return 0;
}