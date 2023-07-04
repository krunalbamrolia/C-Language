#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("-: SUM OF DIAGONAL :-\n");
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}

