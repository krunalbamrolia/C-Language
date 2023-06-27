#include <stdio.h>

int main() {
	printf("-: ADDITION OF 1D ARRAY :- \n");
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int array1[N];
    int array2[N];
    int result[N];
    int i;

    printf("Enter elements for array1:\n");
    for (i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter elements for array2:\n");
    for (i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < N; i++) {
        result[i] = array1[i] + array2[i];
    }

    printf("Resultant array after addition:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

