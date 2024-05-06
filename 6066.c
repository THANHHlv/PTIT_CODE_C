#include <stdio.h>
#include <math.h>
#include <string.h>

void add0(char s[], int k)
{
    int n = strlen(s);
    for (int i = n + k; i >= 0; i--)
    {
        if (i >= k)
            s[i] = s[i - k];
        else
            s[i] = '0';
    }
}
void solve(char s[])
{

    char s1[1000] = {}, s2[1000] = {}, sum[1003], res[1000];
    int n = strlen(s), k = 0, cnt = 0;
    for (int i = 0; i < n / 2; i++)
    {
        s1[i] = s[i];
    }
    for (int i = n / 2; i < n; i++)
    {
        s2[k++] = s[i];
    }
    add0(s1, 1);
    add0(s2, 1);
    if (strlen(s2) > strlen(s1))
        add0(s1, 1);
    int nho = 0;
    for (int i = strlen(s2) - 1; i >= 0; i--)
    {
        int tmp = s1[i] - '0' + s2[i] - '0' + nho;
        nho = tmp / 10;
        tmp %= 10;
        sum[i] = tmp + '0';
    }
    for (int i = sum[0] == '0' ? 1 : 0; i <= strlen(sum); i++)
        res[cnt++] = sum[i];
    printf("%s\n", res);
    if (strlen(res) > 1)
    {
        solve(res);
    }
}

int main()
{
    char s[1000];
    gets(s);
    solve(s);
}