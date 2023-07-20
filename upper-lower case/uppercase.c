#include <stdio.h>

int main() {
    char ch;

    printf(" -: UPPERCASE :- \n");
	printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert character to uppercase
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
    }

    printf("The character in uppercase is: %c\n", ch);

    return 0;
}

