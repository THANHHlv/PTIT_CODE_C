#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[1000];
    gets(s);
    char c[1000];
    gets(c);
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        if (strcmp(token, c) != 0)
        {
            printf("%s ", token);
        }
        token = strtok(NULL, " ");
    }
}