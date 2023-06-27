#include <stdio.h>

int main() {
	printf("-: MERGING OF 1D ARRAY :- \n");
    int N1, N2;
    printf("Enter the number of elements for array1: ");
    scanf("%d", &N1);
    printf("Enter the number of elements for array2: ");
    scanf("%d", &N2);

    int array1[N1];
    int array2[N2];
    int mergedLength = N1 + N2;

    int mergedArray[mergedLength];
    int i, j;

    printf("Enter elements for array1:\n");
    for (i = 0; i < N1; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter elements for array2:\n");
    for (j = 0; j < N2; j++) {
        printf("Enter element %d: ", j + 1);
        scanf("%d", &array2[j]);
    }

    for (i = 0; i < N1; i++) {
        mergedArray[i] = array1[i];
    }

    for (j = 0; j < N2; j++) {
        mergedArray[N1 + j] = array2[j];
    }

    printf("Merged array:\n");
    for (i = 0; i < mergedLength; i++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}

