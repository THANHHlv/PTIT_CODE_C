#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int left = a, right = 2*a-1;
    int t1 = a+1, t2 = 2*a-2;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=2*a-1; j++){
            if( (j >= left && j <= right) && (i == 1 || i == a || j == left || j == right))printf("*");
            else if(j < left) printf("~");
            else if(j > left && j < right)  printf(".");

        }
        left--;
        right--;
        printf("\n");
    }

    return 0;
}
