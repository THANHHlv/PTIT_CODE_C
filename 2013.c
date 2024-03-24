#include<stdio.h>

int main(){
    int m, n, k=1;
    scanf("%d%d", &m, &n);
    if(m <= n){
        for(int i=m; i>0; i--){
            for(int j=n; j>0; j--){
                printf("%d", j);
            }
            for(int j=2; j<=k; j++){
              printf("%d", j);
            }

            k++;
            n--;
            printf("\n");
        }
    }
    else{
        for(int i=m-1;i>=n;i--){
                printf("%d",i+1);
                for(int j=i; j>i-n+1; j--){
                    printf("%d", j);
                }

                printf("\n");
            }
        for(int i=n; i>0; i--){
          for(int j=i; j>0; j--){
            printf("%d", j);
          }
          for(int j=2; j<=k; j++){
            printf("%d", j);
          }
          k++;
          printf("\n");
        }

    }


    return 0;
}
