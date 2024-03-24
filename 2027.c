#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, h;
    for (int i = 1; i <= n; i++)
    {
        h = k + i - 1;
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", 'a' + k - 1);
                k++;
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", 'a' + h - 1);
                h--;
                k++;
            }
        }

        printf("\n");
    }
}