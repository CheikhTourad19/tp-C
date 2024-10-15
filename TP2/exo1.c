#include <stdio.h>

int main()
{
    int num1, num2;
    printf("entrer 2 nombre pour verifier la paritée \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if ((num1 % 2 == 0 && num2 % 2 == 0) || (num1 % 2 != 0 && num2 % 2 != 0))
    {
        printf("ils sont de meme paritée");
    }
    else
    {
        printf("ils ne sont pas de meme paritée");
    }

    return 0;
}