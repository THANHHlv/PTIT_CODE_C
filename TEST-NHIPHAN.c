#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100], cnt = 1;
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    while (n != 0)
    {
        a[cnt] = n % 2;
        n /= 2;
        cnt++;
    }
    for (int i = cnt - 1; i >= 1; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    if (a[cnt - 3] == 0 && a[cnt - 4] == 0)
        printf("0");
    else if (a[cnt - 3] == 0 && a[cnt - 4] == 1)
        printf("1");
    else if (a[cnt - 3] == 1 && a[cnt - 4] == 0)
        printf("2");
    else
        printf("3");
}