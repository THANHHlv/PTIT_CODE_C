#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 2, h = 0, t = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = t; j >= 1; j--)
        {
            printf("~");
        }
        t--;
        for (int j = 2; j <= k; j += 2)
        {

            printf("%d", j);
        }
        k += 2;
        for (int j = h; j >= 1; j -= 2)
        {
            printf("%d", j);
        }
        h += 2;
        printf("\n");
    }
}