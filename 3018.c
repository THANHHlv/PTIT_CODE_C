#include <stdio.h>
int ngto(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int fibo(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int fn2 = 0, fn1 = 1;
    for (int i = 3; i <= 93; i++)
    {
        int fn = fn1 + fn2;
        if (fn == n)
            return 1;
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}
int check(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n = n / 10;
    }
    if (fibo(s))
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
        if (check(i) && ngto(i))
            printf("%d ", i);
    }
}