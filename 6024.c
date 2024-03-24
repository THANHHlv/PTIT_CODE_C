#include <stdio.h>
#include <math.h>
#include <string.h>

void Chen0(char s[], int k, char c)
{
    int n = strlen(s);
    for (int i = n + k; i >= 0; i--)
    {
        if (i >= k)
            s[i] = s[i - k];
        else
            s[i] = c;
    }
}
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s1[10004], s2[10004];
        char sum[10004];
        gets(s1);
        gets(s2);
        Chen0(s1, 1, '0');
        Chen0(s2, 1, '0');
        if (strlen(s1) > strlen(s2))
            Chen0(s2, strlen(s1) - strlen(s2), '0');
        else
            Chen0(s1, strlen(s2) - strlen(s1), '0');
        int a = strlen(s1) - 1;
        int nho = 0;
        for (int i = a; i >= 0; i--)
        {
            int temp = s1[i] - '0' + s2[i] - '0' + nho;
            nho = temp / 10;
            temp %= 10;
            sum[i] = temp + '0';
                }

        for (int i = sum[0] == '0' ? 1 : 0; i <= a; i++)
            printf("%c", sum[i]);
        printf("\n");
    }
    return 0;
}
