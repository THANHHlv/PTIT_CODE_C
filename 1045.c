#include<stdio.h>
#include<string.h>

int main(){
    char s[10];
    gets(s);
    printf("%c %c", s[0], s[strlen(s) - 1]);

    return 0;
}
