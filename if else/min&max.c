#include<stdio.h>

 
void main(){
	
	int a,b;
	
	printf("-: MIN OR MAX VALUE CHECK :-\n");
	printf("Enter A Number : ");
	scanf("%i",&a);
	printf("Enter B Number : ");
	scanf("%i",&b);
	
	if(a>b){
		printf("A Is Big");
	}
	else{
		printf("B Is Small");
	}
	
	return 0;
}
