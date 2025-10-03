#include <stdio.h>

int main() {
	int num,r,ans,initial;
	printf("enter a 3 digit number ");
	scanf(" %d", &num);
	initial=num;
	while(num!=0){
		r=num%10;
		ans=ans*10+r;
			num=num/10;
	}

	if(ans==initial){
		printf("pallindrome");

	}else{
		printf("not pallindrome");
	}
	return 0;

}




