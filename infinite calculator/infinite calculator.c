#include <stdio.h>

//addition function 
int add(int x, int y) {
    return x + y;
}

//subtract function
int sub(int x, int y) {
    return x - y;
}

//multiple function
int multi(int x, int y) {
    return x * y;
}

//divition function
int divi(int x, int y) {
    return x / y;
}

int calculate(char operator, int x, int y) {
    int result = 0;

    switch (operator) {
        case '+':
            result = add(x, y);
            break;
        case '-':
            result = sub(x, y);
            break;
        case '*':
            result = multi(x, y);
            break;
        case '/':
            result = divi(x, y);
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }
    return result;
}

int main() {
    int x, y, result;
    char operator;
     
     	printf("-: INFINITE CALCULATOR :-\n");
    while (1) {
        printf("Enter the first number: ");
        scanf("%d", &x);
        
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);
        
        printf("Enter the second number: ");
        scanf("%d", &y);
        
        result = calculate(operator, x, y);
        printf("Result: %d\n", result);
    }
    return 0;
}

