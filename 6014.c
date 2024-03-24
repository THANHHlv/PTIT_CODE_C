#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanhoa(char token[])
{
    int n = strlen(token);
    for (int i = 0; i < n; i++)
    {
        if (token[i] >= 'A' && token[i] <= 'Z')
            token[i] += 32;
    }
    if (token[0] >= 'a' && token[0] <= 'z')
        token[0] -= 32;
}
int main()
{
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t--)
    {
        char s[1000];
        gets(s);
        char *token = strtok(s, " ");
        while (token != NULL)
        {
            chuanhoa(token);
            printf("%s ", token);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }
}