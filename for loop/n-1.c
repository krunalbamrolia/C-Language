#include <stdio.h>

int main() {
    int N, i;
    
    printf(" -: N TO 1 PRINT :- \n");
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}

