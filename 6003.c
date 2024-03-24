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
        int cnt = 0;
        gets(s);
        for (int i = 1; i < strlen(s); i++)
        {
            if (s[i] != ' ' && s[i - 1] == ' ')
                cnt++;
        }
        printf("%d\n", cnt + 1);
    }
}