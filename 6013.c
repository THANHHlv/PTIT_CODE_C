#include <stdio.h>
#include <string.h>
int check1(char c[])
{
    int n = strlen(c);

    for (int i = 0; i < n; i++)
    {

        if (c[i] < '0' || c[i] > '9')
            return 0;
    }
    return 1;
}
int check2(char c[])
{
    int n = strlen(c);
    int mark[10000] = {0}, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        mark[c[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (c[i] >= '0' && c[i] <= '9' && mark[c[i]] != 0)
        {
            cnt++;
            mark[c[i]] = 0;
        }
    }
    if (cnt == 10)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t--)
    {
        char s[10000];
        gets(s);
        if (check1(s) && check2(s))
            printf("YES\n");

        if (check1(s) == 0 || s[0] == '0')
            printf("INVALID\n");
        else if (check2(s) == 0)
            printf("NO\n");
    }
}