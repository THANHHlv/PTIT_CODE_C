#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        int a[205] = {0};
        int chan = 0, le = 0, n = 0;
        while (scanf("%d", &a[n]))
        {
            n++;
            char c = getchar();
            if (c == '\n')
                break;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                chan++;
            else
                le++;
        }
        if (n % 2 == 0 && chan > le)
            printf("YES\n");
        else if (n % 2 != 0 && chan < le)
            printf("YES\n");
        else
            printf("NO\n");
    }
}