#include<stdio.h>

 
void main(){
	
	int a;
	
	printf("-: THIS IS LEADER IF..ELSE :-\n");
	printf("Enter Any Number : ");
	scanf("%i",&a);
	
	
	if(a > 0){
		printf("Your Value Is Positive");
	}
	else if(a < 0){
		printf("Your Value Is Negative");
	}
	else{
		printf("0 Is Neutral");
	}
	
	return 0;
}
