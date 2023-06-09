#include <stdio.h>

int main() 
{	
	//variable
	int x,y,z,minus;
	
	//get date form user
	printf("-: (x-y-z)3 :- \n");
	printf("You Can Enter X Value : ");
	scanf("%d/n",&x);
	printf("You Can Enter Y Value : ");
	scanf("%d/n",&y);
	printf("You Can Enter Z Value : ");
	scanf("%d/n",&z);
	
		//operation
		minus =  (x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z)+(3*(z+x)));
		
		//print the answer
	printf("your total value = %d",minus);
		
		return 0;
}


