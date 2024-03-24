#include <stdio.h>
void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m + 2], b[n + 2];
    int marka[1005] = {0}, markb[1005] = {0};
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
        marka[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        markb[b[i]]++;
    }
    sort(a, m);
    sort(b, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (marka[a[i]] != 0 && a[i] == b[j])
            {
                printf("%d ", a[i]);
                marka[a[i]] = 0;
                markb[b[j]] = 0;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        if (marka[a[i]] != 0)
        {
            printf("%d ", a[i]);
            marka[a[i]] = 0;
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (markb[b[i]] != 0)
        {
            printf("%d ", b[i]);
            markb[b[i]] = 0;
        }
    }
}