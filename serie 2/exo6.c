#include <stdio.h>

int main()
{
    int H = 0, M = 0, S = 0;
    do
    {
        printf("Entrer une heure Valide \n");
        scanf("%d", &H);
        printf("Entrer une munite Valide \n");
        scanf("%d", &M);
        printf("Entrer une seconde Valide \n");
        scanf("%d", &S);
        if (H < 0 || H >= 24)
        {
            printf("heures invalide réessayer !!");
        }
        if (M < 0 || M > 59)
        {
            printf("Minute invalide réessayer !!");
        }
        if (S < 0 || S > 59)
        {
            printf("seconde invalide réessayer !!");
        }

    } while (H < 0 || H >= 24 || M < 0 || M > 59 || S < 0 || S > 59);
    if (S < 59)
    {
        S++;
    }
    else
    {
        if (M < 59)
        {
            M++;
        }
        else
        {
            if (H < 23)
            {
                H++;
            }
            else
            {
                H = 0;
            }
            M = 0;
        }

        S = 0;
    }

    printf("il est %d heures et %d minutes et %d secondes ", H, M, S);

    return 0;
}