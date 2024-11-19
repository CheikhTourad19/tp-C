#include <stdio.h>

int main()
{
    int A[9] = {5, 2, 3, 6, 7, 9, 5, 6, 1}, lon_actuel = 0, long_max = 0, pos_debut = 0, pos_max = 0;

    for (int i = 1; i < 6; i++)
    {
        if (A[i] >= A[i - 1])
        {
            lon_actuel = lon_actuel + 1;
            if (lon_actuel > long_max)
            {
                long_max = lon_actuel;
                pos_max = i - long_max + 1;
            }
        }
        else
        {
            lon_actuel = 1;
        }
    }
    printf("longueur est : %d position est : %d \n", long_max, pos_max);
    printf("la sequence est : <");
    for (int i = pos_max; i < pos_max + long_max; i++)
    {
        printf("%d", A[i]);
    }
    printf(">");

    return 0;
}
