#include <stdio.h>

int main() {
    int N;
   
	printf(" -: MULTIPLICATION TABLE :- \n");   
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int i = 1;

    while (i <= 10) {
        printf("%d x %d = %d\n", N, i, N * i);
        i++;
    }

    return 0;
}

