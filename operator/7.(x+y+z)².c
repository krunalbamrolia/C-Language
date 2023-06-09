#include <stdio.h>

int main() 
{	
	//variable
	int x,y,z,sum;
	
	//get date form user
	printf("-: (x+y+z)² :- \n");
	printf("You Can Enter X Value : ");
	scanf("%d/n",&x);
	printf("You Can Enter Y Value : ");
	scanf("%d/n",&y);
	printf("You Can Enter Z Value : ");
	scanf("%d/n",&z);
	
		//operation
		sum = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
		
		//print the answer
	printf("your total value = %d",sum);
		
		return 0;
}


