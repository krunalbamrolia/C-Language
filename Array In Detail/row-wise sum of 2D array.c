#include <stdio.h>

int main() {
    int rows, cols, i, j;

	printf(" -: ROW-WISE SUM OF 2D ARRAY :- \n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols], rowSum[rows] = {0};

    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
            rowSum[i] += array[i][j]; 
			}
    }

    printf("Row-wise sums of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}

