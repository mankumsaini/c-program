#include <stdio.h>
void main(){

	int a,b;
	printf("enter two num: ");
	scanf("%d%d",&a,&b);

	if(a>b){
		printf("large no is: %d",a);
	}
	else{
		printf("large no is: %d",b);
	}
}