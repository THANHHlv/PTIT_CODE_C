#include <stdio.h>

int pascal(int k, int n)
{
    if (k == 1 || k == n)
        return 1;
    else
        return pascal(k - 1, n - 1) + pascal(k, n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", pascal(k, i));
        }
        printf("\n");
    }
}