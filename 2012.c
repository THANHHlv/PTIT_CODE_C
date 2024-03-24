#include<stdio.h>

int main(){
    int m, n, k=1;
    scanf("%d%d", &m, &n);
    if(m <= n){
        for(int i=1; i<=m; i++){
            for(int j=k; j>0; j--){
                printf("%d", j);
            }
            for(int j=2; j<=n-i+1; j++){
              printf("%d", j);
            }

            k++;
            printf("\n");
        }
    }
    else{
        for(int i=1; i<=n; i++){
            for(int j=k; j>0; j--){
                printf("%d", j);
            }
            for(int j=2; j<=n-i+1; j++){
              printf("%d", j);
            }
            k++;
            printf("\n");
        }
            for(int i=n;i<m;i++){
                printf("%d",i+1);
                for(int j=i; j>i-n+1; j--){
                    printf("%d", j);
                }

                printf("\n");
            }

        }


    return 0;
}
