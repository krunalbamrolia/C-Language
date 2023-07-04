#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE] = {2, 5, 9, 12, 0, 7, 6, 3, 1, 8};
    int largest = arr[0];
    int secondLargest = arr[0];
    int i;

    printf("-: SECOND LARGEST NUMBER IN ARRAY :-\n");
    printf("\n");
    printf(" {2, 5, 9, 12, 0, 7, 6, 3, 1, 8} \n\n");
    for (i = 1; i < SIZE; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    printf("The second largest number is: %d\n", secondLargest);

    return 0;
}

