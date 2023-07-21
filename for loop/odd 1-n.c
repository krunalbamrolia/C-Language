#include <stdio.h>

int main() {
    int N, i;
    
    printf(" -: ODD 1 TO N PRINT :- \n");	
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

