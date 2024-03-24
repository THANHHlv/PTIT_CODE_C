#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000000];
    gets(s);
    char max;
    scanf("%s", s);
    int n = strlen(s);
    max = s[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] >= max)
            max = s[i];
        else
            s[i] = '0';
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
            printf("%c", s[i]);
    }
    return 0;
}
