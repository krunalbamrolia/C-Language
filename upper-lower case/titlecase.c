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
	
	printf(" -: TITLECASE :- \n");
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (isLowerCase(input[0])) {
        input[0] = toUpperCase(input[0]);
    }

    for (i = 1; input[i] != '\0'; i++) {

        if (isUpperCase(input[i])) {
            input[i] = toLowerCase(input[i]);
        } else if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n' || input[i] == '\r' || input[i] == '\v' || input[i] == '\f' || input[i] == '.' || input[i] == ',' || input[i] == '!' || input[i] == '?' || input[i] == ';' || input[i] == ':' || input[i] == '-' || input[i] == '(' || input[i] == ')' || input[i] == '[' || input[i] == ']' || input[i] == '{' || input[i] == '}') {
            int nextCharIndex = i + 1;
            while (input[nextCharIndex] != '\0' && !isLowerCase(input[nextCharIndex])) {
                nextCharIndex++;
            }
            if (isLowerCase(input[nextCharIndex])) {
                input[nextCharIndex] = toUpperCase(input[nextCharIndex]);
            }
        }
    }

    printf("String in title case: %s\n", input);

    return 0;
}

