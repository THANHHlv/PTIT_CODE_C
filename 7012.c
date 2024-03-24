#include <stdio.h>
#include <string.h>
struct Mat_hang
{
    int id;
    char ten[1000];
    char nhom[1000];
    double loinhuan;
    double mua;
    double ban;
};
typedef struct Mat_hang MH;
int cmp(MH a, MH b)
{
    if (a.loinhuan < b.loinhuan)
        return 1;
    return 0;
}
void swap(MH *a, MH *b)
{
    MH c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int n;
    scanf("%d", &n);
    MH a[n + 2];
    for (int i = 1; i <= n; i++)
    {
        scanf("\n");
        a[i].id = i;
        gets(a[i].ten);
        gets(a[i].nhom);
        scanf("%lf%lf", &a[i].mua, &a[i].ban);
        a[i].loinhuan = a[i].ban - a[i].mua;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (cmp(a[i], a[j]))
            {
                swap(&a[i], &a[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d %s %s %.2lf\n", a[i].id, a[i].ten, a[i].nhom, a[i].loinhuan);
    }
}