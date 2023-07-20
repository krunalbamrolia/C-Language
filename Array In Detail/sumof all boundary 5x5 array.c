#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    int array[5][5];
    int sum = 0, i, j;

	printf(" -: SUM OF ALL BOUNDARY 5x5 ARRAY :- \n");
    printf("Enter the elements of the 5x5 array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("The 5x5 array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);

            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += array[i][j]; 
            }
        }
        printf("\n");
    }

    printf("Sum of boundary elements: %d\n", sum);

    return 0;
}

