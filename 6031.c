#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int cnt = 0;
    // for (int i = 0; i < strlen(s); i++)
    // {
    //     if ()
    // }
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] > s[i - 1])
            cnt++;
    }
    printf("%d", 26 - cnt);
}