#include <stdio.h>
int gt(int m)
{
    int Giai_thua = 1;
    for (int i = 1; i <= m; i++)
    {
        Giai_thua *= i;
    }
    return Giai_thua;
}
int strong_Num(int n)
{
    int a = n, sum = 0;
    while (a != 0)
    {
        int b = a % 10;
        sum += gt(b);
        a = a / 10;
    }
    if (sum == n)
        return 1;
    return 0;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++)
    {
        if (strong_Num(i))
            printf("%d ", i);
    }
}