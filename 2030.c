#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, h = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j += 2)
        {

            printf("%c", 'A' + j - 2);
        }
        k += 2;
        for (int j = h; j >= 1; j -= 2)
        {
            printf("%c", 'A' + j - 2);
        }
        h += 2;
        printf("\n");
    }
}