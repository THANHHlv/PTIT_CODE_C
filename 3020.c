#include <stdio.h>
int check(int a)
{
    int s1 = 0, s2 = 0, count = 0;
    int temp = a;
    while (a)
    {
        s1 = s1 * 10 + a % 10;
        s2 += a % 10;
        if (a % 10 == 6)
            count++;
        a = a / 10;
    }
    if (s1 == temp && (s2 - 8) % 10 == 0 && count > 0)
        return 1;
    return 0;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++)
    {
        if (check(i))
            printf("%d ", i);
    }
}