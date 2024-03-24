#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{

    char s[1007], t = 0;
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }

    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            t = i + 1;
            break;
        }
    }

    if (s[0] != ' ')
        printf("%c", s[0]);

    for (int i = 0; i < t - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
            printf("%c", s[i + 1]);
    }
    for (int i = t; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }

    printf("@ptit.edu.vn");

    return 0;
}
