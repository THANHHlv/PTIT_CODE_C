#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Sinh_vien
{
    int id;
    char name[100];
    float A, B, C;
};
typedef struct Sinh_vien Sv;
int check(Sv a)
{
    if (a.A < a.B && a.B < a.C)
        return 1;
    return 0;
}
Sv a[1000];
void add(int n)
{
    for (int i = 1; i <= n; i++)
    {
        a[i].id = i;
        gets(a[i].name);
        scanf("%f%f%f\n", &a[i].A, &a[i].B, &a[i].C);
    }
}
void change(int k)
{
    scanf("\n");
    gets(a[k].name);
    scanf("%f%f%f", &a[k].A, &a[k].B, &a[k].C);
}
void out(Sv c)
{

    printf("%d %s ", c.id, c.name);
    printf("%.1f %.1f %.1f\n", c.A, c.B, c.C);
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
                if (check(a[i]))
                {
                    out(a[i]);
                    return 0;
                }
            }
        }
    }
}
