#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char chaine[] = "ABbCGGbb-";

    for (int i = 0; i < strlen(chaine); i++)
    {
        if (chaine[i] >= 'a' && chaine[i] < 'A')
        {
            chaine[i] = toupper(chaine[i]);
        }
        else
        {
            chaine[i] = tolower(chaine[i]);
        }
    }
    printf("%s", chaine);

    return 0;
}