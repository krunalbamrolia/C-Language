#include <stdio.h>

int cube(int num) {
    int result = num * num * num;
    return result;
}

int main() {
    int num;
    printf("-: CUBE USING UDF :- \n");
    printf("Enter a number: ");
    scanf("%d", &num);

    int cubeResult = cube(num);

    printf("Cube of %d is: %d\n", num, cubeResult);

    return 0;
}

