#include <stdio.h>
#include <string.h>
int check(char c[])
{
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] < '0' || c[i] > '9')
            return 0;
    }
    return 1;
}
int uu_the(char c[])
{
    int n = strlen(c);
    int chan = 0, le = 0;
    for (int i = 0; i < n; i++)
    {
        if ((c[i] - '0') % 2 == 0)
            chan++;
        else
            le++;
    }
    if ((n % 2 == 0 && chan > le) || (n % 2 != 0 && le > chan))
        return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[1000];
        gets(s);
        if (check(s) && uu_the(s))
            printf("YES\n");
        else if (check(s))
            printf("NO\n");
        else
            printf("INVALID\n");
    }
}