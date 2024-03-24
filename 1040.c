#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int n, s=1;
    scanf("%d", &n);
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            s+= (i + n/i);
        }
    }

    if(s == n) printf("1");
    else printf("0");


    return 0;
}

