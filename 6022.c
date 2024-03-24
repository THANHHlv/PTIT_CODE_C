#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check(char a[], char b[])
{
    int n1 = strlen(a);
    int n2 = strlen(b);
    if (n1 != n2)
        return 0;
    for (int i = 0; i < n1; i++)
    {
        if (tolower(a[i]) != tolower(b[i]))
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d\n", &t);
    for (int k = 1; k <= t; k++)
    {
        char s1[1000], s2[1000], a[100][100];
        gets(s1);
        gets(s2);
        int m = 0, n = 0;
        char *token = strtok(s1, " ");
        while (token != NULL)
        {
            strcpy(a[m++], token);
            token = strtok(NULL, " ");
        }

        printf("Test %d: ", k);
        for (int i = 0; i < m; i++)
        {

            if (check(a[i], s2) == 0)

                printf("%s ", a[i]);
        }
        printf("\n");
    }
}