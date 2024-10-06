#include <stdio.h>

int main()
{
    int mois = 0, jour = 0;
    int v = 0;
    do
    {
        printf("donner un mois valide ");
        scanf("%d", &mois);
        printf("donner un jour valide ");
        scanf("%d", &jour);
        if ((mois == 1 && jour > 31) || (mois == 3 && jour > 31) || (mois == 5 && jour > 31) || (mois == 7 && jour > 31) || (mois == 8 && jour > 31) || (mois == 10 && jour > 31) || (mois == 12 && jour > 31) || (mois == 2 && jour > 28) || (mois == 4 && jour > 30) || (mois == 6 && jour > 30) || (mois == 9 && jour > 30) || (mois == 11 && jour > 30))
        {
            v = 0;
        }
        else
        {
            v = 1;
        }

    } while (mois > 12 || jour > 31 || mois < 1 || jour < 1 || v == 0);

    if ((mois == 9 && jour >= 23) || mois == 10 || mois == 11 || (mois == 12 && jour <= 21))
    {
        printf("Saison d'automne\n");
    }
    else if ((mois == 12 && jour >= 22) || mois == 1 || mois == 2 || (mois == 3 && jour <= 19))
    {
        printf("Saison d'hiver\n");
    }
    else if ((mois == 3 && jour >= 20) || mois == 4 || mois == 5 || (mois == 6 && jour <= 20))
    {
        printf("Saison de Printemps\n");
    }
    else
    {
        printf("Saison d'été\n");
    }

    return 0;
}
