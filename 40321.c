#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int Ko_giam(char c[])
{
    for (int i = 0; i < strlen(c) - 1; i++)
    {
        if (c[i] > c[i + 1])
            return 0;
    }
    return 1;
}
void swap(char a[], char b[])
{
    char tmp[100];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}
int main()
{
    char s[10], a[100000][10];
    int n = 0;
    while (scanf("%s", &s) != EOF)
    {
        if (Ko_giam(s))
            strcpy(a[n++], s);
    }
    int b[100000] = {0}, k[100000];
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            int cnt = 1;
            for (int j = i + 1; j < n; j++)
            {

                if (strcmp(a[i], a[j]) == 0)
                {
                    cnt++;
                    b[j] = 1;
                }
            }
            k[i] = cnt;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (k[i] < k[j] && b[j] == 0)
                {
                    swap(a[i], a[j]);
                    int tmp = k[i];
                    k[i] = k[j];
                    k[j] = tmp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
            printf("%s %d\n", a[i], k[i]);
    }
}