#include <stdio.h>
void main(){
	int a;
	printf("entre a num: ");
	scanf("%d",&a);

	if(a%5==0 && a%11==0){
		printf("yes");
	}
	else{
		printf("no");	
	}
}