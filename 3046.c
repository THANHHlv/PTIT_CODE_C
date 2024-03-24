#include <stdio.h>
#include <math.h>
int Thuan_nghich(int a)
{
    int s = 0;
    int temp = a;
    while (a)
    {
        s = s * 10 + a % 10;
        a = a / 10;
    }
    if (s == temp)
        return 1;
    return 0;
}
int check(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        if (n % 10 == 4)
            return 0;
        n /= 10;
    }
    if (s % 10 == 0)
        return 1;
    return 0;
}
int Pow(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        k *= 10;
    }
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
            if (Thuan_nghich(i) && check(i))
                printf("%d ", i);
        }
        printf("\n");
    }
}