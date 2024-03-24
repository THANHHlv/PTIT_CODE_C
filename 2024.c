#include <stdio.h>

int main(){
	int m, n, k=1;
	scanf("%d%d", &m, &n);
	if(m<=n){
		for(int i=1; i<=m; i++){
			for(int j=k; j<=n; j++){
				printf("%c", 'A'-1+j);
			}
			for(int j=k-1; j>=1; j--){
				printf("%c", 'A'-1+j);
			}
			k++;
			printf("\n");
		}
	}
	else{
		for(int i=1; i<=n; i++){
			for(int j=k;j<=n;j++){
				printf("%c",'A'-1+j);
			}
			for(int j=k-1;j>=1;j--){
				printf("%c",'A'-1+j);
			}
			k++;
			printf("\n");
		}
		for(int i=m; i>n; i--){
            for(int j=n; j>=1; j--){
                printf("%c", 'A'+j-1);
            }
            printf("\n");
        }

	}
}

