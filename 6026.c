#include <stdio.h>
#include <string.h>
int check(char c[])
{
    int n = strlen(c);
    for (int i = 0; i <= (n - 1) / 2; i++)
    {
        if (c[i] != c[n - 1 - i])
            return 0;
    }
    return 1;
}
int main()
{
    char s[50], a[10000][50];
    int max = 0;
    int n = 0;
    while (scanf("%s", &s) != EOF)
    {
        if (check(s))
        {
            int m = strlen(s);
            strcpy(a[++n], s);
            if (max < m)
                max = m;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (strlen(a[i]) == max)
        {
            int cnt = 1;
            for (int j = i + 1; j <= n; j++)
            {
                if (strcmp(a[i], a[j]) == 0)
                {
                    a[j][0] = 0;
                    cnt++;
                }
            }
            printf("%s %d\n", a[i], cnt);
        }
    }
    return 0;
}