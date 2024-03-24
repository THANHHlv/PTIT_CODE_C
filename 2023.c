#include<stdio.h>
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    int k=n;
    if(m<=n){
        for(int i=m; i>0; i--){
            for(int j=n; j>=k; j--){
                printf("%c", 'a'+j-1);
            }
            for(int j=n; j>n-k+1; j--){
                printf("%c", 'a'+k-1);
            }
            k--;
            printf("\n");
        }
    }
    else{
      int h=m;
        for(int i=n; i>0; i--){
            for(int j=m; j>=k+m-n; j--){
                printf("%c", 'a'+j-1);
            }
            for(int j=n; j>n-k+1; j--){
                printf("%c", 'a'+h-1);
            }
            k--;
            h--;
            printf("\n");
        }
        for(int i=m; i>n; i--){
            for(int j=m; j>=1+m-n; j--){
                printf("%c", 'a'+j-1);
            }
            printf("\n");
        }

    }

    return 0;
}
