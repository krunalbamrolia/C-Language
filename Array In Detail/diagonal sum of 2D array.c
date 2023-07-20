#include <stdio.h>

int main() {
    int size, i, j;

	printf(" -: DIAGONAL SUM OF 2D ARRAY :- \n");
    printf("Enter the size of the square 2D array: ");
    scanf("%d", &size);

    int array[size][size], mainDiagonalSum = 0, antiDiagonalSum = 0;

    printf("Enter the elements of the square 2D array:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &array[i][j]);

           if (i == j) {
                mainDiagonalSum += array[i][j];
            }

            if (i + j == size - 1) {
                antiDiagonalSum += array[i][j];
            }
        }
    }

    printf("Main Diagonal Sum: %d\n", mainDiagonalSum);
    printf("Anti-Diagonal Sum: %d\n", antiDiagonalSum);

    return 0;
}

