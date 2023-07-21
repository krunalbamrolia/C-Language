#include <stdio.h>

int main() {
    int N;
    
	printf(" -: ODD 1 TO N PRINT :- \n");	
	printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = 1;

    while (i <= N) {
        if (i % 2 != 0) { // Check if the number is odd
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

