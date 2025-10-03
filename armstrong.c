#include <stdio.h>

int main(){
	int n,r,new_r=0,original;
printf("enter a 3 DIGIT number:");
scanf("%d",&n);
original=n;
while(n!=0){
	r=n%10;
	new_r = new_r + r*r*r;
	n=n/10;
}
	if(new_r==original){
	printf("it is an armstrong number");
	}else{
			printf("it is not an armstrong number");
	}
	return 0;
}