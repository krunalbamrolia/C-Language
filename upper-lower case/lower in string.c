#include <stdio.h>

void Lowercase(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        str++; 
    }
}

int main() {
    char input[100];
	int i;
	
	printf(" -: LOWERCASE IN STRING :- \n");
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }
    
    Lowercase(input);
    
    printf("String in lowercase: %s\n", input);

    return 0;
}

