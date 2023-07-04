#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int temp = arr[SIZE - 1];
    int i;
    printf("-: RIGHT ROTATED ARRAY :- \n");
    
    for (i = SIZE - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;

    printf("Right rotated array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

