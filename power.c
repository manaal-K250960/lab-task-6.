#include <stdio.h>

int main(){
	int n,i,product=1,p;
	printf("enter a number:");
	scanf("%d",&n);
	printf("enter power:");
	scanf("%d",&p);
	for(i=1;i<=p;i++){
		product=product*n;
	}printf("%d^%d=%d",n,p,product);
	return 0;
}