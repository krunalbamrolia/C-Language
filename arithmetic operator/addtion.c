#include <stdio.h>

int main() {
    int a, b, sum;

	printf("-:SUM:- \n");
    printf("Enter value of 1: ");
    scanf("%d", &a);
    printf("Enter value of 2: ");
    scanf("%d", &b);

	sum=a+b;
    
    printf("Total: %d",sum);
    return 0;
}

