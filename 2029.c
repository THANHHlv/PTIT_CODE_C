#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%c ", 'A' + i - 1);
        int k = n - 1;
        int s = i;

        for (int j = 2; j <= i; j++)
        {
            s += k;
            printf("%c ", 'A' + s - 1);
            k--;
        }
        printf("\n");
    }
}