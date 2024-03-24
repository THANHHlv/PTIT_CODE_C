#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n, cnt = 0;
        scanf("%d", &n);
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                    cnt++;
                if ((n / i) % 2 == 0 && i * i != n)
                    cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}
