#include <stdio.h>
#include <string.h>
int La_ma(char c)
{

    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50;
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    if (c == 'M')
        return 1000;
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
        int n = strlen(s);
        int res = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (La_ma(s[i]) > La_ma(s[i - 1]))
            {
                res += (La_ma(s[i]) - 2 * La_ma(s[i - 1]));
            }
            else
                res += La_ma(s[i]);
        }
        printf("%d\n", res);
    }
}