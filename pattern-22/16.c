#include <stdio.h>

int main() {
    int n = 5, i, j;

    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j++) {
            printf("%d ", j % 2);
        }
        printf("\n");
    }

    return 0;
}

