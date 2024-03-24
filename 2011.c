#include <stdio.h>

int main(){
	int m, n, k=1;
	scanf("%d%d", &m, &n);
	int t = n-1;
	if(m<=n){
		for(int i=1; i<=m; i++){
			for(int j=k; j<=n; j++){
				printf("%d", j);
			}
			for(int j=n-1; j>t; j--){
				printf("%d", j);
			}
			k++;
			t--;
			printf("\n");
		}
	}
	else{
		for(int i=1; i<=n; i++){
			for(int j=k;j<=n;j++){
				printf("%d",j);
			}
			for(int j=n-1;j>t;j--){
				printf("%d",j);
			}
			k++;
			t--;
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
}

