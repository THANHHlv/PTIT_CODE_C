#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        int k = n - 1;
        int s = i;

        for (int j = 2; j <= i; j++)
        {
            s += k;
            printf("%d ", s);
            k--;
        }
        printf("\n");
    }
}