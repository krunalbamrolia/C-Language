#include <stdio.h>

int main() {
    int rows, cols, i, j;

	printf(" -: COLUMN-WISE SUM OF 2D ARRAY :- \n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols], colSum[cols] = {0};

    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
            colSum[j] += array[i][j]; 
        }
    }

    printf("Column-wise sums of the 2D array:\n");
    for (j = 0; j < cols; j++) {
        printf("Column %d sum: %d\n", j + 1, colSum[j]);
    }

    return 0;
}

