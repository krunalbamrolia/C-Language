#include <stdio.h>

int main() {
    float r, perimeter, PI=3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    perimeter = 2 * PI * r;

    printf("The perimeter of the circle is: %f", perimeter);

    return 0;
}

