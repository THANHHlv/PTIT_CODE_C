#include <stdio.h>
#include <string.h>

int check(char c[])
{
    int n = strlen(c);
    for (int i = 0; i <= n / 2; i++)
    {
        if (c[i] != c[n - i - 1])
            return 0;
    }
    return 1;
}
int main()
{
    char s[10000];
    gets(s);
    if (check(s))
        printf("1");
    else
        printf("0");
    return 0;
}