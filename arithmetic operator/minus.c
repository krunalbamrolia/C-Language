#include <stdio.h>

int main() {
    int a, b, min;

	printf("-:MINUS:- \n");
    printf("Enter value of 1: ");
    scanf("%d", &a);
    printf("Enter value of 2: ");
    scanf("%d", &b);

	min=a-b;
    
    printf("Total: %d",min);
    return 0;
}

