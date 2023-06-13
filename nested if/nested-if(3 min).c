#include<stdio.h>

void main(){
	
	int a,b,c;
	
	printf("-: NESTED IF (3 min)  :-\n");
	
	printf("You Can Enter A Value : ");
	scanf("%d",&a );
	
	printf("You Can Enter B Value : ");
	scanf("%d",&b);
	
	printf("You Can Enter C Value : ");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("A is MIN");
		}
		else{
			printf("C is MIN");
		}
	}
	else{
	
		if(b<c){
			printf("B is MIN");
		}
		else{
			printf("C is MIN");
		}
	}
	return 0;
}
