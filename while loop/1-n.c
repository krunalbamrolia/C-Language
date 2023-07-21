#include <stdio.h>

int main() {
    int N;
    
	printf(" -: 1 TO N PRINT :- \n");
	printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = 1;

    while (i <= N) {
        printf("%d ", i);
        i++;
    }

    return 0;
}

