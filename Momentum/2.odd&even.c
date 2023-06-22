#include <stdio.h>

int main() {
    int number;

    printf("-: CHECK ODD & EVEN :-\n");
	printf("Enter a number: ");
    scanf("%d", &number);

    // Using ternary operator to check if the number is even or odd
    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);

    return 0;
}

