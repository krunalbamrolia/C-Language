#include <stdio.h>

int main() {
    int size, i;
    printf(" -: FIND SQUARE USING POINTER :-\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array without squaring:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *ptr = arr;
    for (i = 0; i < size; i++) {
        *(ptr + i) = *(ptr + i) * *(ptr + i);
    }

    printf("Array with squaring:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

