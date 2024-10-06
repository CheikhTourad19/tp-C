#include <stdio.h>

int main()
{
    char c;
    int salaire_base, salaire_finale, salaire_sup, nombre_heures;
    printf("Donner la categorie de votre emploi \n");
    scanf("%c", &c);
    printf("Donner le nombre d'heures supplementaire ce mois \n");
    scanf("%d", &nombre_heures);
    if (c == 'A')
    {
        salaire_base = 600;
        salaire_sup = nombre_heures * 5;
        salaire_finale = salaire_base + salaire_sup;
    }
    else if (c == 'B')
    {
        salaire_base = 700;
        salaire_sup = nombre_heures * 10;
        salaire_finale = salaire_base + salaire_sup;
    }
    else if (c == 'C')
    {
        salaire_base = 900;
        salaire_sup = nombre_heures * 15;
        salaire_finale = salaire_base + salaire_sup;
    }
    else
    {
        printf("n'existe pas");
    }
    printf("salaire totale est de : %d ", salaire_finale);
    return 0;
}