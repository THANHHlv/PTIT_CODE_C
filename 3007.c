#include <stdio.h>
#include <math.h>
int ngto(int a)
{
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return a > 1;
}
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
            if (ngto(i) == 1 && Thuan_nghich(i) == 1)
            {
                cnt++;
                if (cnt > 10)
                {
                    printf("\n");
                    cnt = 1;
                }
                printf("%d ", i);
            }
        }
        printf("\n\n");
    }
}