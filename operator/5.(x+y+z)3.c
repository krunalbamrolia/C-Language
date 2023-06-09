#include <stdio.h>

int main() 
{	
	//variable
	int x,y,z,sum;
	
	//get date form user
	printf("-: (x+y+z)3 :- \n");
	printf("You Can Enter X Value : ");
	scanf("%d/n",&x);
	printf("You Can Enter Y Value : ");
	scanf("%d/n",&y);
	printf("You Can Enter Z Value : ");
	scanf("%d/n",&z);
	
		//operation
		sum =  (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)+(y+z)+(z+x));
		
		//print the answer
	printf("your total value = %d",sum);
		
		return 0;
}


