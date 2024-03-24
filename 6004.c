#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int Chucai = 0, so = 0, Kitu = 0;
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            Chucai++;
        else if (s[i] >= '0' && s[i] <= '9')
            so++;
        else
            Kitu++;
    }
    printf("%d %d %d", Chucai, so, Kitu);
}