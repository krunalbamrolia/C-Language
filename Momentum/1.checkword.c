#include <stdio.h>

int main() {
    char ch;

	printf("-: CHECK CHARACTER & NUMBER & SYMBOL :-\n");
    
	printf("Enter a character:");
    
	scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character is an Alphabet.\n");
    }
	else if (ch >= '0' && ch <= '9') {
        printf("The character is a Digit.\n");
    } 
	else {
        printf("The character is a Special character.\n");
    }

    return 0;
}

