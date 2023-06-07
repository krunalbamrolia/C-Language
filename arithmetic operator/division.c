#include <stdio.h>

int main() {
    float a, b, div;

	printf("-:DIVISION:- \n");
    printf("Enter value of 1: ");
    scanf("%f", &a);
    printf("Enter value of 2: ");
    scanf("%f", &b);

	div=a/b;
    
    printf("Total: %f",div);
    return 0;
}

