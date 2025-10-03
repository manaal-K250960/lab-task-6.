#include <stdio.h>

int main(){
	int num=0;
	int c,n;
	int a=0;
	int b = 1;
	int i = 0;
	printf("enter no of terms");
	scanf("%d",&n);
	printf("fibonnaci series:");
	if(n>=1){
		printf("%d",a);
	}
	if(n>=2){
		printf("%d",b);
			
	}

for(i=3;i<=n;i++){
	
	c=a+b;
	printf("%d",c);
	a=b;
	b=c;
}
	return 0;
}