#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int cmp(char a[], char b[])
{
    char c[100], d[100];
    strcpy(c, a);
    strcpy(d, b);
    strcat(c, b); // c = a + b
    strcat(d, a); // d = b + a
    return strcmp(c, d);
}
void sort(char a[][100], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cmp(a[i], a[j]) > 0)
            {
                char tmp[200];
                strcpy(tmp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], tmp);
            }
        }
    }
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        char a[100][100];
        for (int i = 0; i < n; i++)
            scanf("%s", &a[i]);
        sort(a, n);
        for (int i = 0; i < n; i++)
            printf("%s", a[i]);
        printf("\n");
    }
    return 0;
}