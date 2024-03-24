#include <stdio.h>
#include <math.h>

int tongCS(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    int s = tongCS(n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt > 0)
            sum += cnt * tongCS(i);
    }
    if (n > 1)
        sum += tongCS(n);

    if (sum == s)
        printf("YES");
    else
        printf("NO");
}
