#include <stdio.h>

void UpperCase(char *str) {
   
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++; 
    }
}

int main() {
    char input[100];
	int i;
	
	printf(" -: UPPERCASE IN STRING :- \n");
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }
    UpperCase(input);

    printf("String in uppercase: %s\n", input);

    return 0;
}

