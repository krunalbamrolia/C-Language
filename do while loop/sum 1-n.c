#include <stdio.h>

int main() {
    int N;
    
	
	printf(" -: SUM 1 TO N PRINT :- \n"); 
	printf("Enter the value of N: ");
    scanf("%d", &N);

    int sum = 0;
    int i = 1;

    do {
        sum += i;
        i++;
    } while (i <= N);

    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}

