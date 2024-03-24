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
void solve(char s1[], char s2[])
{
    char tru[10004];
    if (strlen(s1) > strlen(s2))
        Chen0(s2, strlen(s1) - strlen(s2), '0');
    else
        Chen0(s1, strlen(s2) - strlen(s1), '0');
    int a = strlen(s1) - 1;
    int nho = 0;
    for (int i = a; i >= 0; i--)
    {
        int temp;
        if (s1[i] < s2[i] || nho == 1)
        {
            temp = (s1[i] - '0') + 10 - (s2[i] - '0') - nho;
            nho = 1;
        }

        else
            temp = s1[i] - '0' - (s2[i] - '0');

        tru[i] = temp + '0';
    }

    for (int i = nho == 1 ? 1 : 0; i <= a; i++)
        printf("%c", tru[i]);
    printf("\n");
}
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s1[10004], s2[10004];
        gets(s1);
        gets(s2);
        if (strcmp(s1, s2) < 0 && strlen(s1) == strlen(s2) || strlen(s1) < strlen(s2))
            solve(s2, s1);
        else
            solve(s1, s2);
    }
    return 0;
}
