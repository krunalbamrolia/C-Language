#include <stdio.h>

int main() {
    int N;
    printf("-: 1D ARRAY USING (scanf):- \n");
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int array[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("Enter element [%d] : ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Array elements:\n");
    for (i = 0; i < N; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

