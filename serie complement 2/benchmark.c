#include <stdio.h>

int main(int argc, char const *argv[])
{
    long i;
    for (i = 0; i < 100000000000; i++)
    {
        printf("%ld\n", i);
    }

    return 0;
}
