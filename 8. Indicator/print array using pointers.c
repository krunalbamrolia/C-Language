#include <stdio.h>

int main() {
    int size;
    int i;
    prointf(" -: PRINT ARRAY ELEMENTS USING POINTERS :- \n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &(*(arr + i)));
    }

    printf("Array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}

