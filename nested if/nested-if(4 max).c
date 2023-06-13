#include<stdio.h>

void main(){
	
	int a,b,c,d;
	
	printf("-: NESTED IF (4 max)  :-\n");
	
	printf("You Can Enter A Value : ");
	scanf("%d",&a );
	
	printf("You Can Enter B Value : ");
	scanf("%d",&b);
	
	printf("You Can Enter C Value : ");
	scanf("%d",&c);
	
	printf("You Cna Enter D Value : ");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is BIG");
			}
			else
				printf("D is BIG");
		}
		else{
			printf("C is BIG");
		}
	}
	else{	
		if(b>c){
			if(b>d){
				printf("B is BIG");
			}
			else{
				printf("D is BIG");
			}
		}
		else{
			printf("C is BIG");
		}
	}
	return 0;
}
