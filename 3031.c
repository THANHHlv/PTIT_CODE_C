#include <stdio.h>
#include <math.h>
#define ll long long
int UCLN(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return UCLN(b, a % b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (UCLN(a, b) == UCLN(c, d))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
