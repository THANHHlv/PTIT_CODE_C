#include <stdio.h>
int ngto(int a)
{
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return a > 1;
}
int main()
{
    int n, i = 2, s = 0;
    scanf("%d", &n);
    while (s < n)
    {
        if (ngto(i) == 1)
        {
            printf("%d\n", i);
            s++;
        }
        i++;
    }
}