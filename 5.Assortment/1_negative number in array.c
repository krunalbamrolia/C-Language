#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, -12, 0, -7, 6, -3, 1, -8};
    printf("-: NEGATIVE NUMBER FINED IN ARRAY :- \n");
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Negative elements in the array: ");
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

