#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int k=n-1, h=2*n-1;
    for(int i=1; i<=n; i++){
        for(int j=k; j<h; j++){
            printf("%c", 'A'+j-1);
        }
        k--;
        h-=2;
        printf("\n");
    }

    return 0;
}
