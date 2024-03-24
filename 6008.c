#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[1000], a[100][100];
    gets(s);
    int n = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        strcpy(a[n++], token);
        token = strtok(NULL, " ");
    }
    int mark[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        if (mark[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(a[i], a[j]) == 0)
                {
                    mark[j] = 1;
                }
            }
            printf("%s ", a[i]);
        }
    }
}
