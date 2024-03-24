#include <stdio.h>
int check(int n)
{
    int s = 0;
    int tmp = n;
    while (n)
    {
        if (n % 10 == 9)
            return 0;
        s = s * 10 + n % 10;
        n /= 10;
    }
    if (s == tmp)
        return 1;
    return 0;
}
int main()
{
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (check(i))
        {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n%d", cnt);
}