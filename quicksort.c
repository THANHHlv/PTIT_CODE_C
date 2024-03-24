#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// a đứng trc b thì trả về số âm(-1)
// a đứng sau b thì trả về số dương (1)
int cmp(const void *a, const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;
    if (*x < *y)
        return -1;
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    // mảng, số phần tử trong mảng, kdl, comparator
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}