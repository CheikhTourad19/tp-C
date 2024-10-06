#include <stdio.h>
int main()
{
    int A = 20, B = 5, C = -10, D = 2, X = 12, Y = 15;
    printf("(5 * X) + 2 * ((3 * B) + 4) => %d \n", (5 * X) + 2 * ((3 * B) + 4));
    printf("(5 * (X + 2) * 3) * (B + 4) => %d \n", (5 * (X + 2) * 3) * (B + 4));
    printf("A == (B = 5) => %d \n", A == (B = 5));
    printf("A += (X + 5) => %d \n", A += (X + 5));
    printf("A != (C *= (-D)) => %d\n", A != (C *= (-D)));
    printf("A *= C + (X - D) => %d\n", A *= C + (X - D));
    printf("A %= D++ => %d\n", A %= D++);
    printf("A %= ++D => %d\n", A %= ++D);
    printf("(X++)*(A+C) => %d\n", (X++) * (A + C));
    printf("A = X*(B<C)+Y*!(B<C) => %d\n", A = X * (B < C) + Y * !(B < C));
    printf("!(X-D+C)||D => %d\n", !(X - D + C) || D);
    printf("A&&B||!0&&C&&!D => %d\n", A && B || !0 && C && !D);
    printf("((A&&B)||(!0&&C))&&!D => %d\n", ((A && B) || (!0 && C)) && !D);
    printf("((A&&B)||!0)&&(C&&(!D))=> %d\n", ((A && B) || !0) && (C && (!D)));
    return 0;
}