#include <stdio.h>
#include <math.h>
int ko_giam(int n)
{
    int ok = 0;
    while (n != 0)
    {
        int a = n % 10;
        n /= 10;
        int b = n % 10;
        if (a < b)
        {
            ok = 1;
            break;
        }
    }
    if (ok == 1)
        return 1;
    return 0;
}
int Pow(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
        k *= 10;
    return k;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int p1 = Pow(n - 1);
        int p2 = Pow(n);
        for (int i = p1; i < p2; i++)
        {
            if (ko_giam(i))
                printf("%d ", i);
        }
        printf("\n");
    }
}