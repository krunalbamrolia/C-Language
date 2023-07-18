#include <stdio.h>

int main() {
    int s,i;
    printf(" -: REVERSE AN ARRAY USING POINTER :- \n");
    printf("Enter the size of the array: ");
    scanf("%d", &s);

    int arr[s];
    printf("Enter the array elements: \n");
    for (i = 0; i <s; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array without reversing: \n");
    for (i = 0; i <s; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *a = arr;
    int *z = arr + s - 1;

    while (a < z) {
        int temp = *a;
        *a = *z;
        *z = temp;

        a++;
        z--;
    }

    printf("Array with reversing: \n");
    for (i = 0; i <s; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

