#include <stdio.h>

struct Date
{
    int jour, mois, annee;
};
struct Date plusrecent(struct Date d1, struct Date d2)
{
    if (d1.annee > d2.annee)
    {
        return d1;
    }
    else if (d1.annee == d2.annee)
    {
        if (d1.mois > d2.mois)
        {
            return d1;
        }
        else if (d1.mois == d2.mois)
        {
            if (d1.jour > d2.jour)
            {
                return d1;
            }
            else if (d1.jour == d2.jour)
            {
                return d1;
            }
            else
            {
                return d2;
            }
        }
        else
        {
            return d2;
        }
    }
    else
    {
        return d2;
    }
}

int main()
{
    struct Date date;
    printf("Veillez saisir une date \n");
    printf("saisir le jour valide\n");
    while (date.jour > 31 || date.jour <= 0)
    {
        scanf("%d", &date.jour);
        if (date.jour > 31)
        {
            printf("jour invalide reessayer");
        }
    }

    printf("saisir le mois  valide\n");
    while (date.mois > 12 || date.mois <= 0)
    {
        scanf("%d", &date.mois);
        if (date.mois > 12)
        {
            printf("mois invalide reessayer");
        }
    }

    printf("saisir l'annnée \n");
    scanf("%d", &date.annee);
    printf("Voici la date que vous avez remplit : %d - %d - %d ", date.jour, date.mois, date.annee);

    return 0;
}
