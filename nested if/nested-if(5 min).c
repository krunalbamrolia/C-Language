#include<stdio.h>

void main(){
	
	int a,b,c,d,e;
	
	printf("-: NESTED IF (5 min)  :-\n");
	
	printf("You Can Enter A Value : ");
	scanf("%d",&a );
	
	printf("You Can Enter B Value : ");
	scanf("%d",&b);
	
	printf("You Can Enter C Value : ");
	scanf("%d",&c);
	
	printf("You Cna Enter D Value : ");
	scanf("%d",&d);
	
	printf("You Can Enter E Value : ");
	scanf("%d",&e);

	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("A is MIN");
				}
				else{
					printf("E is MIN");
				}
			}
			else{
				if(d<e){
					printf("D is MIN");
				}
				else{
					printf("E is MIN");
				}
			}
		}	
		else{
			if(c<d){
					printf("C is MIN");
				}
				else{
					printf("D is MIN");
				}
		}
	}
	else{	
		if(b<c){
			if(b<d){
				if(b<e){
					printf("B is MIN");
				}
				else{
					printf("E is MIN");
				}
			}
			else{
				if(d<e){
					printf("D is MIN");
				}
				else{
					printf("E is MIN");
				}
			}
		}
		else{
			if(c<d){
					printf("C is MIN");
				}
				else{
					printf("D is MIN");
				}
		}
	}
	
	return 0;
	
}


