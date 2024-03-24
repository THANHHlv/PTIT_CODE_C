#include<stdio.h>
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    int k=n;
    if(m==n){
        for(int i=m; i>0; i--){
            for(int j=k; j<=n; j++){
                printf("%c", 'A'+j-1);
            }
            for(int j=n-k+1; j<n; j++){
                printf("%c", 'A'+n-1);
            }
            k--;
            printf("\n");
        }
    }
    else if(m<n){
        for(int i=m; i>0; i--){
            for(int j=k+m-n; j<n; j++){
                printf("%c", 'A'+j-1);
            }
            for(int j=n-k+n-m; j<n; j++){
                printf("%c", 'A'+n-1);
            }
            k--;
            printf("\n");
        }
    }
    else{
        for(int i=m; i>n; i--){
            for(int j=m; j>=1+m-n; j--){
                printf("%c", 'A'+n-1);
            }
            printf("\n");
        }
        for(int i=n; i>0; i--){
            for(int j=k; j<=n; j++){
                printf("%c", 'A'+j-1);
            }
            for(int j=n-k+1; j<n; j++){
                printf("%c", 'A'+n-1);
            }

            k--;

            printf("\n");
        }

    }

    return 0;
}

