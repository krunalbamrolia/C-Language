#include <stdio.h>

int main() {
    int rows, cols, i, j;

	printf(" -: 2D ARRAY STORE :- \n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array1[rows][cols], array2[rows][cols], result[rows][cols];

    printf("Enter the elements of the first 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the elements of the second 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    printf("Result of addition:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

