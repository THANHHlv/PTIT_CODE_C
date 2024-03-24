#include<stdio.h>

int main(){
    int n, m, k;
    scanf("%d", &n, &m, &k);
    int a[m+2];
    for(int i=1; i<=m; i++){
        scanf("%d", &a[i]);
    }
    int ok = 0, s = 0;
    for(int i=1; i<=n; i++){
        if(a[i]+k < a[i+1]-k)
        ok = 1;


    }


}