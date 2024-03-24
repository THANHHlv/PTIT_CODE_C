#include<stdio.h>
#include<string.h>

int main(){
    int T;
    scanf("%d", &T);
    scanf("\n");
    while(T--){
        char s[100];
        gets(s);
        int n = strlen(s), check=0;
        for(int i=1; i<n; i++){
            if(s[i] < s[i-1]) {
              check = 1;
              break;
            }
        }
        if(check == 0) printf("YES\n");
        else printf("NO\n");
    }



    return 0;
}
