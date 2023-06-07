#include <stdio.h>

int main() {
    float area, b, h;

    printf("Enter the base length of the triangle: ");
    scanf("%f", &b);

    printf("Enter the height of the triangle: ");
    scanf("%f", &h);

    area = 0.5 * b * h;

    printf("The area of the triangle is: %f", area);

    return 0;
}

