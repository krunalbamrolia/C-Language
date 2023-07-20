#include <stdio.h>

int main() {
    char ch;

	printf(" -: LOWERCASE :- \n");
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert character to lowercase
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    printf("The character in lowercase is: %c\n", ch);

    return 0;
}

