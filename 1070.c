#include <stdio.h>
#include <math.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a[10];
    for (int i = 1; i <= 6; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < 6; i += 2)
    {
        if (a[i] < a[i + 1])
            swap(&a[i], &a[i + 1]);
    }
    for (int i = 1; i < 6; i += 2)
    {
        for (int j = i + 2; j < 6; j++)
        {
            if (a[i] < a[j])
            {
                swap(&a[i], &a[j]);
                swap(&a[i + 1], &a[j + 1]);
            }
        }
    }
    if ()
}