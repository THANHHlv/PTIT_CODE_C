#include <stdio.h>
#include <string.h>
int check(char c[])
{
    if (c[7] > c[6] && c[8] > c[7] && c[10] > c[8] && c[11] > c[10])
        return 1;
    if (c[6] == c[7] && c[8] == c[7] && c[8] == c[10] && c[10] == c[11])
        return 1;
    if (c[6] == c[7] && c[8] == c[7] && c[10] == c[11])
        return 1;
    for (int i = 6; i <= 11; i++)
    {
        if (i != 9)
        {
            if (c[i] != '6' && c[i] != '8')
                return 0;
        }
    }
    return 1;
}
int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char s[100];
        gets(s);
        if (check(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
}