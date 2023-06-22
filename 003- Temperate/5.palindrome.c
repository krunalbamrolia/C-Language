#include <stdio.h>

int main() {
    int number, reversedNumber = 0, originalNumber, remainder;

    printf(" -: CHECH IT'S PALINDROME OR NOT :- \n");
	printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Reversing the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    // Checking if the number is a palindrome
    if (originalNumber == reversedNumber) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}

