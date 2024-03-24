#include<stdio.h>
int ngto(int a){
    for(int i=2; i*i <= a; i++){
        if(a % i == 0) return 0;
    }
    return a>1;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=2; i<n; i++){
        if( ngto(i) == 1) printf("%d\n", i);
    }
    return 0;
}
