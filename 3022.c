#include <stdio.h>

int ngto(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int check(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    if (s % 5 == 0)
        return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (ngto(i) && check(i))
        {
            printf("%d ", i);
            cnt++;
        }
        }
    printf("\n%d", cnt);
}