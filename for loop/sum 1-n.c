#include <stdio.h>

int main() {
    int N, i;
    
    
	printf(" -: SUM 1 TO N PRINT :- \n"); 
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int sum = 0;

    for (i = 1; i <= N; i++) {
        sum += i;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}

