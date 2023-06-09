
#include <stdio.h>

int main() 
{	
	//variable
	int x,y,minus;
	
	//get date form user
	printf("-: (x-y)3  :- \n");
	printf("You Can Enter X Value : ");
	scanf("%d/n",&x);
	printf("You Can Enter Y Value : ");
	scanf("%d/n",&y);
	
		//operation
		minus =  (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
		
		//print the answer
	printf("your total value = %d",minus);
		
		return 0;
}


