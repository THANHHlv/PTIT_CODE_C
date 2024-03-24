#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[100], a[1000][100];
    int n = 0;
    while (scanf("%s", &s) != EOF)
    {
        strcpy(a[n++], s);
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < strlen(a[i]))
            max = strlen(a[i]);
    }
    int b[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0 && strlen(a[i]) == max)
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

            printf("%s %d %d\n", a[i], max, cnt);
        }
    }
}