#include <stdio.h>

int main(){
	int num,i;
	char ans;
	do{

printf("enter a number:");
scanf("%d",&num);

for(i=1;i<=12;i++){
	printf("%d * %d = %d\n",num,i,num*i);

}
 	printf("do you want to print another table?(y/n)");
	scanf(" %c",&ans);
}
while(ans=='y');
printf("the end");
	return 0;
}