#include <stdio.h>

int main() {
    int a, b, per;

	printf("-:PERCENTAGE:- \n");
    printf("Enter value of 1: ");
    scanf("%d", &a);
    printf("Enter value of 2: ");
    scanf("%d", &b);

				
	per=a%b;   
	
    printf("Total: %d",per);
    return 0;
}

