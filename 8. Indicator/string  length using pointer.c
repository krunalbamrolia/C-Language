#include <stdio.h>

int main() {
    char str[100];
    printf(" -:  LENGTH OF STRING USING POINTER :- \n");
    printf("Enter a string: ");
    scanf("%s", str);

    int size = 0;
    char *a = str;

    while (*a != '\0') {
        size++;
        a++;
    }

    printf("Length of the string: %d\n", size);

    return 0;
}

