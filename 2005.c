#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int left = a, right = a+b-1;
    for(int i=1; i<=a; i++){
        for(int j=a+b-1; j>=1; j--){
            if( (j >= left && j <= right) && (i == 1 || i == a || j == left || j == right))printf("*");
            else if(j > right) printf("~");
            else if(j > left && j < right)  printf(".");

        }
        left--;
        right--;
        printf("\n");
    }

    return 0;
}

