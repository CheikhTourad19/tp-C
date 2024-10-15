#include <stdio.h>

int main()
{
    char S[100];
    int i, size;

    printf("Donner la chaine que vous voulez compter \n");
    scanf("%s", S);
    i = 0;
    size = 0;
    while (S[i] != '\0')
    {
        size++;
        i++;
    }
    printf("La longueur de %s est de %d ", S, size);

    return 0;
}