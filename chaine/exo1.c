#include <stdio.h>
#include <string.h>

void affiche(char phrase[300])
{
    int nomber = 0;
    for (int i = 0; i < strlen(phrase); i++)
    {
        if (phrase[i] == ' ' || i == 0)
        {
            nomber++;
            printf("\nMot %d :", nomber);
        }

        if (phrase[i] != ' ' && phrase[i] != '.')
        {
            printf("%c", phrase[i]);
        }
        if (phrase[i] == '.')
        {
            break;
        }
    }
}
void voyelle(char phrase[300])
{
    int nombre = 0;
    for (int i = 0; i < strlen(phrase); i++)
    {
        if (phrase[i] == 'A' || phrase[i] == 'E' || phrase[i] == 'O' || phrase[i] == 'U' || phrase[i] == 'I' || phrase[i] == 'Y' || phrase[i] == 'a' || phrase[i] == 'e' || phrase[i] == 'o' || phrase[i] == 'u' || phrase[i] == 'i' || phrase[i] == 'y')
        {
            nombre++;
            printf("%c     ", phrase[i]);
        }
    }
    printf("\n nombre de voyelle est de : %d \n", nombre);
}

int main()
{
    int choix;
    printf("*******************************\n");
    printf("1: Affichez les mot d'une phrase\n");
    printf("2: Afficher les voyelles et leur\n");
    printf("3: Construire une phrase\n");
    printf("0: Quitter \n");
    printf("*******************************\n");

    scanf("%d", &choix);
    if (choix == 1)
    {
        char phrase[300];
        printf("Saisir une phrase \n");
        fgets(phrase, 300, stdin);
        affiche(phrase);
    }
}