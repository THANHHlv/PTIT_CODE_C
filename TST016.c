#include <stdio.h>
#include <string.h>
char s[10000];
int a[10], b[10];
int check()
{
    for (int i = 1; i <= 3; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return a[4] % 2 == 0 && b[4] % 2 == 0;
}
int main()
{
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(')
            a[1]++;
        else if (s[i] == ')')
            b[1]++;
        else if (s[i] == '{')
            a[2]++;
        else if (s[i] == '}')
            b[2]++;
        else if (s[i] == '[')
            a[3]++;
        else if (s[i] == ']')
            b[3]++;
        else if (s[i] == '"')
            a[4]++;
        else
            b[4]++;
    }
    if (check())
        printf("1");
    else
        printf("0");
    return 0;
}