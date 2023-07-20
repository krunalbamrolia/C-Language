#include <stdio.h>

int main() {
    int N, i, j;

	printf(" -: 2D ARRAY OF N ELEMENTS :- \n");
    printf("Enter the size N of the 2D array: ");
    scanf("%d", &N);

    int array[N][N];

    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("The 2D array is:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

