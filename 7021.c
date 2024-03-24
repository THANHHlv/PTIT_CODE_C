#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Sinh_vien
{
    int id;
    char name[100];
    float A, B, C, sum;
};
typedef struct Sinh_vien Sv;
int cmp(Sv a, Sv b)
{
    if (a.sum > b.sum)
        return 1;
    return 0;
}
void swap(Sv *a, Sv *b)
{
    Sv c = *a;
    *a = *b;
    *b = c;
}
Sv a[1000];
void add(int n)
{
    for (int i = 1; i <= n; i++)
    {
        a[i].id = i;
        gets(a[i].name);
        scanf("%f%f%f\n", &a[i].A, &a[i].B, &a[i].C);
        a[i].sum = a[i].A + a[i].B + a[i].C;
    }
}
void change(int k)
{
    scanf("\n");
    gets(a[k].name);
    scanf("%f%f%f", &a[k].A, &a[k].B, &a[k].C);
    a[k].sum = a[k].A + a[k].B + a[k].C;
}
void out(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d %s ", a[i].id, a[i].name);
        printf("%.1f %.1f %.1f\n", a[i].A, a[i].B, a[i].C);
    }
}
int main()
{
    int n;
    while (1)
    {
        int t;
        scanf("%d", &t);
        if (t == 1)
        {
            scanf("%d\n", &n);
            add(n);
            printf("%d\n", n);
        }
        else if (t == 2)
        {
            int m;
            scanf("%d", &m);
            change(m);
            printf("%d\n", m);
        }
        else
        {

            for (int i = 1; i <= n; i++)
            {
                for (int j = i + 1; j <= n; j++)
                {
                    if (cmp(a[i], a[j]))
                        swap(&a[i], &a[j]);
                }
            }
            out(n);
            return 0;
        }
    }
}
