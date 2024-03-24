#include <stdio.h>
#include <string.h>
int check(char a[])
{
    int n = strlen(a);
    int cnt = 0;
    for (int i = 0; i <= (n - 1) / 2; i++)
    {
        if (a[i] != a[n - i - 1])
            cnt++;
    }
    if ((n % 2 == 0 && cnt == 1) || (n % 2 != 0 && cnt <= 1))
        return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[100];
        gets(s);
        if (check(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
}