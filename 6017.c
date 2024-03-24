#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}
int main()
{
    char s1[1000], s2[1000], a[100][100], b[100][100];
    gets(s1);
    gets(s2);
    int m = 0, n = 0;
    char *token = strtok(s1, " ");
    while (token != NULL)
    {
        strcpy(a[m++], token);
        token = strtok(NULL, " ");
    }
    token = strtok(s2, " ");
    while (token != NULL)
    {
        strcpy(b[n++], token);
        token = strtok(NULL, " ");
    }
    qsort(a, m, sizeof(a[0]), cmp);
    for (int i = 0; i < m; i++)
    {
        while (strcmp(a[i], a[i + 1]) == 0)
            ++i;
        int ok = 0;
        for (int j = 0; j < n; j++)
        {
            if (strcmp(a[i], b[j]) == 0)
            {
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            printf("%s ", a[i]);
    }
}