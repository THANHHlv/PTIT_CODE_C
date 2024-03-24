#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d = ", n);
        for (int i = 2; i <= sqrt(n); i++)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            if (cnt > 0 && n != 1)
                printf("%d^%d * ", i, cnt);
            else if (cnt != 0)
                printf("%d^%d", i, cnt);
        }
        if (n > 1)
            printf("%d^1", n);
        printf("\n");
    }
}