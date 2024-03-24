#include <stdio.h>
#include <math.h>
int giam(int n)
{
    int k = -1;
    while (n != 0)
    {
        int x = n % 10;
        if (x <= k)
            return 0;
        k = x;
        n /= 10;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, cnt = 0;
        scanf("%d%d", &a, &b);

        for (int i = a; i <= b; i++)
        {
            if (giam(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }
}