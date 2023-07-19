#include <stdio.h>

int three(int num) {
    if (num % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int five(int num) {
    if (num % 5 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf(" -: NUMBER IS DIVISIBLE BY 3 & 5 USING UDF. :- \n");
    printf("Enter a number: ");
    scanf("%d", &num);

    int Bthree = three(num);
    int Bfive = five(num);

    if (Bthree && Bfive) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else if (Bthree) {
        printf("%d is divisible by 3 only.\n", num);
    } else if (Bfive) {
        printf("%d is divisible by 5 only.\n", num);
    } else {
        printf("%d is not divisible by either 3 or 5.\n", num);
    }
    return 0;
}

