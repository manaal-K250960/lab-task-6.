#include <stdio.h>

int main(){
	int sum_even=0,sum_odd=0;
	int i;

for(i=1;i<=20;i++){
	if(i%2==0){
		sum_even=sum_even+i;
	}else{
	sum_odd=sum_odd+i;
	}
}
	printf("the sum of even no:%d\n",sum_even);
		printf("the sum of odd no:%d",sum_odd);
		return 0;
}