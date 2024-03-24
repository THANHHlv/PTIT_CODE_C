#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Phan_so
{
    int tu, mau;
};
typedef struct Phan_so ps;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
void Rutgon(ps *a)
{
    int d = gcd(a->tu, a->mau);
    (a->tu) /= d;
    (a->mau) /= d;
}
void Quydong(ps *a, ps *b)
{
    int LCM = lcm(b->mau, a->mau);
    int x = LCM / (a->mau), y = LCM / (b->mau);
    a->tu *= x;
    b->tu *= y;
    a->mau = b->mau = LCM;
}
void in(ps a)
{
    printf("%d/%d ", a.tu, a.mau);
}
int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        printf("Case #%d:\n", t);
        ps a, b;
        scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
        Rutgon(&a);
        Rutgon(&b);
        Quydong(&a, &b);
        ps sum;
        sum.tu = a.tu + b.tu;
        sum.mau = a.mau;
        Rutgon(&sum);
        ps thuong;
        thuong.tu = a.tu;
        thuong.mau = b.tu;
        Rutgon(&thuong);
        in(a);
        in(b);
        printf("\n");
        in(sum);
        printf("\n");
        in(thuong);
        printf("\n");
    }
}
