#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k1 = 1, k2 = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k1; j++)
        {
            printf("0 ");
        }
        k1++;
        for (int j = 1; j < k2; j++)
        {
            printf("%d ", j);
        }
        k2--;
        printf("\n");
    }
}