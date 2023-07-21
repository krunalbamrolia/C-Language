#include <stdio.h>

int main() {
    int N, i;
    
	printf(" -: EVEN N TO 1 PRINT :- \n");
	printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

