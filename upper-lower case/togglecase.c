#include <stdio.h>

int isLowerCase(char ch) {
    return ch >= 'a' && ch <= 'z';
}

int isUpperCase(char ch) {
    return ch >= 'A' && ch <= 'Z';
}

char toLowerCase(char ch) {
    if (isUpperCase(ch)) {
        return ch + 32;
    }
    return ch;
}

char toUpperCase(char ch) {
    if (isLowerCase(ch)) {
        return ch - 32;
    }
    return ch;
}

int main() {
    char input[100];
	int i;
	
	printf(" -: TOGGLECASE :- \n");
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++) {
        if (isLowerCase(input[i])) {
            input[i] = toUpperCase(input[i]);
        } else if (isUpperCase(input[i])) {
            input[i] = toLowerCase(input[i]);
        }
    }

    printf("String in toggle case: %s\n", input);

    return 0;
}

