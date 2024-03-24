#include <stdio.h>
int gt(int n)
{
    int giai_thua = 1;
    for (int i = 1; i <= n; i++)
        giai_thua *= i;
    return giai_thua;
}
int main(){
	int n,s=0;
	scanf("%d",&n);
	int c=n;
	while(c != 0){
		int b = c%10;
		s+= gt(b);
		c/=10;
	}
	if(s==n) printf("1");
	else printf("0");
}
