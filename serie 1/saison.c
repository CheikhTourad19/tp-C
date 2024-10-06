#include <stdio.h>

int main()
{
    int mois;
    printf("Donnez le numero du moi ");
    scanf("%d", &mois);
    if ((mois == 12) || (mois == 1) || (mois == 2))
    {
        printf("Saison d'hiver");
    }
    else if (mois == 3 || mois == 4 || mois == 5)
    {
        printf("Saison printemps");
    }
    else if (mois == 6 || mois == 7 || mois == 8)
    {
        printf("saison d'été");
    }
    else if (mois == 9 || mois == 10 || mois == 11)
    {
        printf("saison d'automne");
    }
    else
    {
        printf("Entrer un mois valide");
    }

    return 0;
}