#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Pokemon
{
    char name[1000];
    int k, m;
};
typedef struct Pokemon poke;
int Tienhoa(poke a)
{
    int sum = 0;
    while (a.m >= a.k)
    {
        sum++;
        a.m -= (a.k - 2);
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    poke a[n + 2];
    for (int i = 1; i <= n; i++)
    {
        scanf("\n");
        gets(a[i].name);
        scanf("%d%d", &a[i].k, &a[i].m);
    }
    int max = 0, s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += Tienhoa(a[i]);
        if (max < Tienhoa(a[i]))
            max = Tienhoa(a[i]);
    }
    printf("%d\n", s);
    for (int i = 1; i <= n; i++)
    {
        if (Tienhoa(a[i]) == max)
        {
            printf("%s", a[i].name);
            break;
        }
    }
}