#include <stdio.h>
#include <string.h>
struct mon
{
    float toan, ly, hoa;
};
struct Thi_sinh
{
    int id;
    char ten[100];
    char day[100];
    struct mon diem;
    float tong;
};
typedef struct Thi_sinh ts;
int cmp(ts a, ts b)
{
    if (a.tong < b.tong)
        return 1;
    return 0;
}
void swap(ts *a, ts *b)
{
    ts c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int n;
    scanf("%d", &n);
    ts a[n + 2];
    for (int i = 1; i <= n; i++)
    {
        scanf("\n");
        a[i].id = i;
        gets(a[i].ten);
        gets(a[i].day);
        scanf("%f%f%f", &a[i].diem.toan, &a[i].diem.ly, &a[i].diem.hoa);
        a[i].tong = a[i].diem.toan + a[i].diem.ly + a[i].diem.hoa;
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

        printf("%d %s %s %.1f\n", a[i].id, a[i].ten, a[i].day, a[i].tong);
    }
}