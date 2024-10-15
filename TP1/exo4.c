#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    printf("Donnez deux entiers \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("La somme est de : %d et le produit est : %d", num1 + num2, num1 * num2);
}