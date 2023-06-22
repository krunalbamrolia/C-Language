#include <stdio.h>

int main() {
    int number, count = 0;

	printf(" -: COUNT  NUMBER :- \n");
    printf("Enter a number: ");
    scanf("%d", &number);

    // Counting the number of digits
    while (number != 0) {
        number /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}

