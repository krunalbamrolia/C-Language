#include <stdio.h>

int factorial(int n) {
    //factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    
    //factorial of n is n multiplied by factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int number;
    printf(" -: FACTORIAL BY RECURSION :- \n\n");
    printf("Enter a Integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    }
    
    return 0;
}

