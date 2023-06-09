#include <stdio.h>

int main() 
{	
	//variable
	int x,y,sum;
	
	//get date form user
	printf("-: (x+y)3 :- \n");
	printf("You Can Enter X Value : ");
	scanf("%d/n",&x);
	printf("You Can Enter Y Value : ");
	scanf("%d/n",&y);
	
		//operation
		sum = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
		
		//print the answer
	printf("your total value = %d",sum);
		
		return 0;
}


