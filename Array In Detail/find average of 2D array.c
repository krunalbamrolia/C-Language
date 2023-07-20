#include <stdio.h>

int main() {
    int rows, cols, i, j;
    double sum = 0.0;

	printf(" -: FIND AVERAGE OF 2D ARRAY :- \n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }

    int totalElements = rows * cols;
    double average = sum / totalElements;

    printf("Average of elements in the 2D array: %lf\n", average);

    return 0;
}

