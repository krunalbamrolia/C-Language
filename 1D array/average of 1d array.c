#include <stdio.h>

int main() {
	prnitf("-: AVERAGE OF 1D ARRAY :- \n");
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int array[N];
    int i;
    int sum = 0;

    for (i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    float average = (float)sum / N;

    printf("Average of the array: %.2f\n", average);

    return 0;
}

