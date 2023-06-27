#include <stdio.h>

int main() {
	printf("-: LENGTH OF 1D ARRAY. :- \n");
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int length = sizeof(array) / sizeof(array[0]);

    printf("Length of the array: %d\n", length);

    return 0;
}

