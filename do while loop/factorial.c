#include <stdio.h>

int main() {
    int N;
    
    
	printf(" -: CALCULATE THE FACTORIAL :- \n");
    printf("Enter a non-negative integer N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int factorial = 1;
    int i = 1;

    do {
        factorial *= i;
        i++;
    } while (i <= N);

    printf("The factorial of %d is: %d\n", N, factorial);

    return 0;
}

