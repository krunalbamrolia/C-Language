#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("The simple interest is: %f", interest);

    return 0;
}

