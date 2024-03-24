#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, res = 1;
        scanf("%d", &n);
        for (int i = 2; i * i <= n; i++)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            if (cnt != 0)
                res *= i;
        }
        if (n > 1)
            res *= n;
        printf("%d\n", res);
    }
}