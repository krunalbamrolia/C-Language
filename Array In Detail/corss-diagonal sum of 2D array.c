#include <stdio.h>

int main() {
    int size, i, j;

	printf(" -: CROSS-DIAGONAL SUM OF 2D ARRAY :- \n");
    printf("Enter the size of the square 2D array: ");
    scanf("%d", &size);

    int array[size][size], crossDiagonalSum = 0;

    printf("Enter the elements of the square 2D array:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &array[i][j]);

            // Calculate cross-diagonal sum (i == j or i + j == size - 1)
            if (i == j || i + j == size - 1) {
                crossDiagonalSum += array[i][j];
            }
        }
    }

    printf("Cross-Diagonal Sum: %d\n", crossDiagonalSum);

    return 0;
}

