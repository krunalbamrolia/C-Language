#include <stdio.h>

int main() {
    int a, b, multi;

	printf("-:MULTIPLICATION:- \n");
    printf("Enter value of 1: ");
    scanf("%d", &a);
    printf("Enter value of 2: ");
    scanf("%d", &b);

	multi=a*b;
    
    printf("Total: %d",multi);
    return 0;
}

