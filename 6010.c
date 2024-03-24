#include <stdio.h>
#include <string.h>

int check(char a[])
{
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        if ((a[i] - '0') % 2 != 0)
            return 0;
    }
    for (int i = 0; i <= n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t--)
    {
        char s[1000];
        gets(s);
        if (check(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
}