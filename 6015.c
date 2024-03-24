#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t--)
    {
        char s[1000];
        gets(s);
        int n = strlen(s), k = 0, h = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ' && s[i + 1] == ' ')
            {
                k = i;
                break;
            }
        }
        for (int i = k; i < n; i++)
        {
            if (s[i] != ' ' && s[i - 1] == ' ')
                s[i] -= 32;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                h = i;
                break;
            }
        }
        for (int i = k + 1; i <= h; i++)
        {
            if (s[i] == ' ' && s[i - 1] == ' ')
                continue;
            else
                printf("%c", s[i]);
        }
        printf(", ");
        for (int i = 0; i <= k; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')

                printf("%c", s[i] - 32);
        }
        printf("\n");
    }
}