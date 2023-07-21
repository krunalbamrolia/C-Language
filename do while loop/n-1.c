#include <stdio.h>

int main() {
    int N;
    
	printf(" -: N TO 1 PRINT :- \n");
	printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = N;

    do {
        printf("%d ", i);
        i--;
    } while (i >= 1);

    return 0;
}

