#include <stdio.h>
#include <string.h>
#define ll long long

int check(int a)
{
    int s1 = 0, s2 = 0;
    int temp = a;
    while (a)
    {
        s1 = s1 * 10 + a % 10;
        s2 += a % 10;
        a = a / 10;
    }
    if (s1 == temp && s2 % 10 == 0)
        return 1;
    return 0;
}

int Pow(int b)
{
    int res = 1;
    for (int i = 1; i <= b; i++)
    {
        res *= 10;
    }
    return res;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, cnt = 0;
        scanf("%d", &n);
        int p1 = Pow(n - 1), p2 = Pow(n);
        for (int i = p1; i < p2; i++)
        {
            if (check(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }
}