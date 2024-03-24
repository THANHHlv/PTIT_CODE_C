#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char s[10000];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    char a[50][100];
    int n = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        strcpy(a[n], token);
        ++n;
        token = strtok(NULL, " ");
    }
    int mark[10000] = {0};
    for (int i = 0; i < n; i++)
    {
        if (mark[i] == 0)
        {
            int cnt = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(a[i], a[j]) == 0)
                {
                    cnt++;
                    mark[j] = 1;
                }
            }
            printf("%s %d\n", a[i], cnt);
        }
    }
}