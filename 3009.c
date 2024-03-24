#include <stdio.h>
int perfect(int n)
{
    if (n == 1)
        return 0;
    int s = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s += (i + n / i);
            if (i == n / i)
                s -= i;
        }
    }
    if (s == n)
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
        if (perfect(i))
            printf("%d ", i);
    }
    return 0;
}