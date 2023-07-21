#include <stdio.h>

int main() {
    int N, i;
    
    
	printf(" -: MULTIPLICATION TABLE :- \n");   
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Multiplication table of %d:\n", N);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}

