#include <stdio.h>

int main() {
    int ROWS = 3;
    int COLS = 3;

    int mat1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

    int mat2[3][3] = {{10, 11, 12},
                      {13, 14, 15},
                      {16, 17, 18}};

    int result[3][3];
	int i,j;
    printf("-: ADDITION OF TWO MATRICES :-\n\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Matrix 1:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("Resultant Matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

