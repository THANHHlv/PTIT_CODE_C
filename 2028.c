#include<stdio.h>
int main(){
    int n, k=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=k; j<=2*n-1; j+=2){
            printf("%c", 'A'+j-1);
        }
        k+=2;
        printf("\n");
    }

    return 0;
}
