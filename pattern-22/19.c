#include <stdio.h>

int main() {
    int n = 5, i, j;
    int count = 1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}

