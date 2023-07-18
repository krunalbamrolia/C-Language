#include <stdio.h>

int main() {
    int a, z;
	printf("-: SWAP TWO VARIABLES USING POINTER :- \n");
    printf("Enter the value of A: ");
    scanf("%d", &a);

    printf("Enter the value of Z: ");
    scanf("%d", &z);

    printf("Before swapping: a = %d, z = %d\n", a, z);

    int *ptr1 = &a;
    int *ptr2 = &z;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: a = %d, z = %d\n", a, z);

    return 0;
}

