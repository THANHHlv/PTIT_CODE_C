#include <stdio.h>
#include <string.h>

int cnt[100] = {0};
int main()
{
    char c[20];
    gets(c);
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == '2' || c[i] == '3' || c[i] == '5' || c[i] == '7')
        {
            cnt[c[i]]++;
        }
    }
    for (int i = 0; i < strlen(c); i++)
    {
        if (cnt[c[i]] > 0)
        {
            printf("%c %d\n", c[i], cnt[c[i]]);
            cnt[c[i]] = 0;
        }
    }
}