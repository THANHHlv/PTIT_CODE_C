#include <stdio.h>
#include <math.h>

int main()
{
    int a[9], b[9];
    for (int i = 1; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    b[1] = abs(a[1] - a[7]);
    b[2] = abs(a[2] - a[8]);
    b[3] = abs(a[3] - a[5]);
    b[4] = abs(a[4] - a[6]);
    b[5] = abs(a[1] - a[3]);
    b[6] = abs(a[2] - a[4]);
    b[7] = abs(a[5] - a[7]);
    b[8] = abs(a[6] - a[8]);
    int max = 0;
    for (int i = 1; i < 9; i++)
    {
        if (max < b[i])
            max = b[i];
    }
    printf("%d", max * max);
}