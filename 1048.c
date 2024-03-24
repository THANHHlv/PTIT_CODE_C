#include<stdio.h>
#include<string.h>

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        int chan=0, le=0;
        while(n != 0){
            int b = n % 10;
            if( b % 2 == 0) chan++;
            else le++;
            n = n / 10;
        }
    printf("%d %d\n", le, chan);

    }


    return 0;
}
