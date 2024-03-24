#include <stdio.h>
#define ll long long
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        int d = i;
        while (d % 2 == 0)
        {
            cnt++;
            d /= 2;
        }
    }
    if (cnt >= k)
        printf("Yes");
    else
        printf("No");
    return 0;
}