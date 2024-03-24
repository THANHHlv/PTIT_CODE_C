#include <stdio.h>
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            if (n / i == 1)
            {
                printf("%d", i);
            }
            else
                printf("%dx", i);
            n /= i;
        }
    }
    if (n > 1)
        printf("%d", n);
}